#include <iostream>
using namespace std;

class Solution {
public:
    // Function to reverse number
    int reverseNumber(int n) {
        int revNum = 0;
        while(n > 0){
            int lastDigit = n % 10;
            revNum = (revNum * 10) + lastDigit;
            n = n / 10;
        }
        return revNum;
    }

    // Function to check palindrome
    bool isPalindrome(int n) {
        int reversed = reverseNumber(n);  // Use the function
        return (reversed == n);
    }
};

int main(){
    Solution c;
    int num = 237784;
    int reversed = c.reverseNumber(num);
    bool check = c.isPalindrome(num);

    cout << "Reversed Number: " << reversed << endl;
    cout << "Is Palindrome? " << (check ? "Yes" : "No") << endl;

    return 0;
}
