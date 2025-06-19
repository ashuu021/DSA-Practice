#include <iostream>
using namespace std;
class Solution{
    public:
    bool isPerfect(int n){
        int sum =1;
        for (int i=2;i*i<=n;i++){
            if (n%i==0){
                sum=sum+i;
                if(i!=(n/i)){
                    sum=sum+(n/i);
                }
            }
        }
        return(sum==n);
    }
};
int main() {
    Solution c;

    int r = c.isPerfect(7);
    cout << "Result: " << r << endl; // Output the result of the perfect
    return 0;
}