#include <iostream>
using namespace std;

class Solution {
public:
    /* Function to find the
    GCD of two numbers */
    int GCD(int n1, int n2) {
        
        // Variable to store the gcd
        int gcd = 1;
        
        // Iterate from 1 to min(n1, n2)
        for(int i = 1; i <= min(n1, n2); i++) {
            
            /* Check if i is a common
            divisor of both n1 and n2 */
            if(n1 % i == 0 && n2 % i == 0) {
                
                // Update gcd
                gcd = i;
            }
        }
        
        // Return stored GCD.
        return gcd;
    }
};

int main() {
    int n1 = 4, n2 = 6;
    
    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to find the
    gcd of two numbers */
    int ans = sol.GCD(n1, n2);
    
    cout << "GCD of " << n1 << " and " << n2 << " is: " << ans << endl;
    
    return 0;
}
