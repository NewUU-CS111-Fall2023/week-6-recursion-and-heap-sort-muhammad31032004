#include <iostream>

using namespace std;

int sum_of_digits (int a) {
    if (a == 0) {
        return 0;
    }
    return (a % 10 + sum_of_digits(a / 10));
}

int main() {
    int n;
    cin >> n;
    cout << sum_of_digits(n);
}
//time complexity O(loga) or O(n)
//a->input number, n->number of digits
