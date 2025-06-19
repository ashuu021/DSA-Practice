#include <iostream>
using namespace std;
class Solution {
public:
    bool isPerfect(int n) {
   int  sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;

        }
    }
    return(sum==n);
    }
};
int main() {
    Solution c;
    // int n = 28; // Example number
    // if(c.isPerfect(n)) {
    //     cout << n << " is a perfect number." << endl;
    // } else {
    //     cout << n << " is not a perfect number." << endl;
    // }
    int r = c.isPerfect(7);
    cout << "Result: " << r << endl; // Output the result of the perfect
    return 0;
}