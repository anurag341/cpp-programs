#include <iostream>
using namespace std;
int main(){
   int number;
   bool flag = true;
   cout<<"Enter any number(should be positive integer): ";
   cin>>number;

   for(int i = 2; i <= number / 2; i++) {
      if(number % i == 0) {
         flag = false;
         break;
      }
   }
   if (flag==true)
      cout<<number<<" is a prime number";
   else
      cout<<number<<" is not a prime number";
   return 0;
}
