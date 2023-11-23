#include <iostream>
#include <string>
using namespace std;

void palindrome_check(string str, int start, int end) {

    if (start >= end) {
        cout<<"YES";
        return;
    } else if (str[start] != str[end]) {
        cout<<"NO";
        return;
    }
    return palindrome_check(str, start + 1, end - 1);
}

int main() {
    string word;
    cin >> word;
    int len = word.length();
    palindrome_check(word, 0, len - 1);
}
// time complexity O(n)
