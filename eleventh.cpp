#include <iostream>
 using namespace std;
       bool isPrime (int n) {
          if(n<=1)
               return false;

               for(int i=2; i<=n/2; i++) {
                  if(n%i==0)
                    return false;
               }
               return true;
       }
              int main() {
                int N;
                cout<<"Enter valur of N: ";
                cin>>N;

                cout <<"Prime number from 1 to "<<N<<"are:\n";

                for(int i=2; i<=N; i++) {
                    if(isPrime(i))
                       cout<<i<<" ";
                }
                return 0;
              }