#include <iostream>
using namespace std;
class Solution {
public:
    int countOddDigit(int n) {
    int oddCount=0;
    while(n>0){
       int lastDigit=n%10;
       if(lastDigit%2==1){
        oddCount+=1;
       }
       n=n/10;
    }
    return oddCount;
    }
};
int main(){
    Solution c;
    int r=c.countOddDigit(237784);
    cout<<"Result : "<<r;

}