#include <iostream>

using namespace std;

bool pow_of_two(int n) {
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}

int main() {
    int a;
    cin >> a;
    pow_of_two(a) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
//time complexity: O(logn)
