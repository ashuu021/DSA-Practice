#include <iostream>
using namespace std;
class Solution {
public:
    int largestDigit(int n) {
        int largest=0;
while(n>0){
    int lastDigit=n%10;
    if(lastDigit>largest){
        largest=lastDigit;

    }
      n=n/10;
}
return largest;
    }
};
int main(){
    Solution c;
    int r=c.largestDigit(237784);
    cout<<"Result : "<<r;

}