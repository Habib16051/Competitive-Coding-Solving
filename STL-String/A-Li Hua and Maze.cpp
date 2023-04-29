#include <iostream>
#include <set>
using namespace std;

int block_path(int n, int m, int x1, int y1, int x2, int y2) {
    set<pair<int,int>> blocked_cells;
    blocked_cells.insert({x1-1, y1});
    blocked_cells.insert({x1, y1-1});
    blocked_cells.insert({x1, y1+1});
    blocked_cells.insert({x1+1, y1});
    blocked_cells.insert({x2-1, y2});
    blocked_cells.insert({x2, y2-1});
    blocked_cells.insert({x2, y2+1});
    blocked_cells.insert({x2+1, y2});
    if (blocked_cells.count({x1, y1})) {
        blocked_cells.erase({x1, y1});
    }
    if (blocked_cells.count({x2, y2})) {
        blocked_cells.erase({x2, y2});
    }
    int num_obstacles = blocked_cells.size();
    if (num_obstacles == 0) {
        return 0;
    }
    if (x1 == x2 && y1 == y2) {
        return 1;
    }
    if (abs(x1-x2) == 1 && abs(y1-y2) == 1) {
        return 2;
    }
    if (x1 == x2 || y1 == y2) {
        return num_obstacles;
    }
    return num_obstacles + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x1, y1, x2, y2;
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        cout << block_path(n, m, x1, y1, x2, y2) << endl;
    }
    return 0;
}
