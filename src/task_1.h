#include <iostream>

using namespace std;

void print_out(int a, int b) {
    cout << a << " ";
    if (a==b) {
        return;
    }
    print_out(a+1, b);
}

void print_out_ro(int a, int b) {
    cout << a << " ";
    if (a==b) {
        return;
    }
    print_out_ro(a-1, b);
}

int main() {
    int A, B;
    cin >> A;
    cin >> B;
    if (A>B) {
        print_out_ro(A, B);
    } else {
        print_out(A, B);
    }
    return 0;
}
//time complexity O(n)
