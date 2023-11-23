#include <iostream>

using namespace std;

int secondLargest(int data[], int n) {
    int largest = max(data[0], data[1]);
    int secondLargest = min(data[0], data[1]);
    for (int i = 2; i < n; i++) {
        if (data[i] > largest) {
            secondLargest = largest;
            largest = data[i];
        } else if (data[i] > secondLargest) {
                secondLargest = data[i];
        }
    }
    return secondLargest;
}


int main() {
    int n = 0;
    int numbers[100];
    while (true) {
        cin >> numbers[n];
        if (numbers[n] == 0) {
            break;
        }
        n++;
    }
    int secondLargestElement = secondLargest(numbers, n);
    cout << secondLargestElement << endl;
    return 0;
}
//time complexity O(n)
