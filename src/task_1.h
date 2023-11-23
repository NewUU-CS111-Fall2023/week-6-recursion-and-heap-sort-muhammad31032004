#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A;
    cin >> B;
    if (A>B) {
        for (int i=A; i>=B; i--) {
            cout << i << " ";
        }
    } else {
        for (int i=A; i<=B; i++) {
            cout << i << " ";
        }
    }
    return 0;
}
