#include <iostream>

using namespace std;

void opposite_order(int a) {
    if (a == 0) {
        return;
    } else {
        cout << a % 10;
        opposite_order(a / 10);
    }
}

int main() {
    int a;
    cin >> a;
    opposite_order(a);
    return 0;
}
//time complexity O(logn)
