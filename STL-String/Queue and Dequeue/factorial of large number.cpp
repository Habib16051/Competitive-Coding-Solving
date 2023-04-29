#include <iostream>
#include <string>
using namespace std;

string factorial(int n) {
    // Base case: 0! = 1
    if (n == 0) {
        return "1";
    }
    // Recursive case: n! = n * (n-1)!
    else {
        string prev = factorial(n-1);
        int carry = 0;
        string result = "";
        for (int i = prev.size()-1; i >= 0; i--) {
            int product = (prev[i]-'0') * n + carry;
            result = to_string(product%10) + result;
            carry = product / 10;
        }
        while (carry > 0) {
            result = to_string(carry % 10) + result;
            carry /= 10;
        }
        return result;
    }
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}
