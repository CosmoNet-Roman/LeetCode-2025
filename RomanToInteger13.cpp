#include <unordered_map>
#include <iostream>

using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> romanMap {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    for(int i = 0; i < s.length(); i++) {
        if(romanMap[s[i]] < romanMap[s[i+1]]) {
            result = result - romanMap[s[i]];
        } else {
            result = result + romanMap[s[i]];
        }
    }

    return result;
}

int main() {
    string case1 = "III";
    string case2 = "LVIII";
    string case3 = "MCMXCIV";

    cout << romanToInt(case1) << endl;
    cout << romanToInt(case2) << endl;
    cout << romanToInt(case3) << endl;

    return 0;
}