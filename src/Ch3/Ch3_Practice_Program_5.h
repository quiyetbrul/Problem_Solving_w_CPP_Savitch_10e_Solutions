#include <iostream>

using namespace std;

int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   return isPrime;
}

void Ch3_Practice_Program_5(){
    cout << "Printing all prime numbers from 0-dsff100:" << endl;

    bool isPrime;
    for(int n = 2; n < 100; n++) {
        isPrime = isPrimeNumber(n);

        if(isPrime == true)
            cout<<n<<" ";
    }
}
