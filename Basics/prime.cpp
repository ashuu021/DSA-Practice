#include <iostream>
using namespace std;

int main(){ 
    int num;
    cout << "Enter the num = ";
    cin >> num;

    int i = 2;

    if (num <= 1) {
        cout << "Not prime";
    }
    else {
        while (i < num) {
            if (num % i*i == 0) {
                cout << "Not prime";
                return 0; // direct exit once divisible
            }
            i++;
        }
        cout << "Prime"; // agar loop pura chal gaya toh prime
    }

    return 0;
}
