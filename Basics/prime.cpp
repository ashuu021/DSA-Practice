#include <iostream>
using namespace std;
int main(){ 
int num ;
 cout<<"Enter the num to check if its prime or not = ";
 cin>>num;
 int i =2;
 bool isPrime =true;
if (num<=1)
{
    isPrime =false;
}
else
{
   while (i<num)
   {
    if (num%i==0)
    {
       isPrime= false;
       break;
    }
    i++;
   }
}
if (isPrime)
        cout << num << " is a Prime Number";
    else
        cout << num << " is NOT a Prime Number";

    return 0;

}