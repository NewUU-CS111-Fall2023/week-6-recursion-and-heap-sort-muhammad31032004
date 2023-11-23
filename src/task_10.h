#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string sortString(string s) {
    vector<pair<int, char>> vowels;
    string vowelSet = "lYmpH";
    for (int i = 0; i < s.length(); ++i) {
        if (vowelSet.find(s[i]) != string::npos) {
            vowels.emplace_back(i, s[i]);
        }
    }
    sort(vowels.begin(), vowels.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
        if (tolower(a.second) == tolower(b.second)) {
            return a.second < b.second;
        }
        return tolower(a.second) < tolower(b.second);
    });
    string result = s;
    for (const auto& vowel : vowels) {
        result[vowel.first] = vowel.second;
    }
    return result;
}

int main() {
    string s = "newUzbekiStanunIverSIty";
    cout << sortString(s) << endl;
    return 0;
}
//time complexity (worst case): O(nlogn)
