#include <iostream>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
if(n==1)return false;
for(int i=2; i<n;i++)
{
    if(n%i==0)return false;
}
return true;
    }
};
int main() {
    Solution c;
    int r = c.isPrime(7);
    cout << "Result: " << r << endl; // Output the result of the prime check
    return 0;
}