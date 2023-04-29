#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isIndexDifferenceLessThan3(string v1, string v2) {
    int len1 = v1.length();
    int len2 = v2.length();
    int diffCount = 0;

    // Check if the length of both strings is same
    if (len1 != len2) {
        return false;
    }

    // Calculate the difference of alphabets index-wise
    for (int i = 0; i < len1; i++) {
        if (v1[i] != v2[i]) {
            diffCount++;
            if (diffCount > 2) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string v1 = "HASIB";
    string v2 = "HABIB";

    if (isIndexDifferenceLessThan3(v1, v2)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
