 #include <iostream>
using namespace std;
class Solution {
public:
    int factorial(int n) {
    int ans=1;
    for(int i =1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
    }
};
int main(){
    Solution c;
    int r=c.factorial(9);
    cout<<"Result : "<<r;

}
