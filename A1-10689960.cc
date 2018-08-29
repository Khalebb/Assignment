#include <iostream>
using namespace std;



bool isPrime(int num);

int main(){
   int num;
   bool M;
   cout<<"Enter any number(should be positive integer): ";
   cin>>num;
   M= isPrime(num);
   if (M==true)
      cout<<num<<" is a prime number";
   else
      cout<<num<<" is not a prime number";
   return 0;
}
bool isPrime(int num){
    bool M=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          M= false;
          break;
       }
    }
    return M;
	
}