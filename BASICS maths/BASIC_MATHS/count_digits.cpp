#include <iostream>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
        
if(n==0)return 1;
int count =0;
while (n>0)
{
    n=n/10;
    count+=1;

}

return count;
    }
};
int main(){
    Solution c;
    int r=c.countDigit(234);
    cout<<"Result"<<r;

}