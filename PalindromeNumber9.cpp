#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }

    long long reversed = 0;
    long long temp = x;

    while(temp != 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    return (reversed == x);
}

int main() {
    int case1 = 121;
    int case2 = -121;
    int case3 = 10;

    if(isPalindrome(case1)) {
        cout << case1 << " is a Palindrome!" << endl;
    } else {
        cout << case1 << " is not a Palindrome..." << endl;
    }

    if(isPalindrome(case2)) {
        cout << case2 << " is a Palindrome!" << endl;
    } else {
        cout << case2 << " is not a Palindrome..." << endl;
    }

    if(isPalindrome(case3)) {
        cout << case3 << " is a Palindrome!" << endl;
    } else {
        cout << case3 << " is not a Palindrome..." << endl;
    }

    return 0;
}
