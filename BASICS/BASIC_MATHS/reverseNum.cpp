#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
    int revNum=0;
    while(n>0){
    int lastDigit=n%10;
    revNum=((revNum*10)+lastDigit);
    n=n/10;
    
    }
return revNum;
    }
};
int main(){
    Solution c;
    int r=c.reverseNumber(237784);
    cout<<"Result : "<<r;

}