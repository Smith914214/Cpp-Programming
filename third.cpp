#include <iostream>
using namespace std;
      int main() {
         int N;
         int sum =0;
          cout <<"Enter the value of N: ";
          cin >> N;
         

         for(int i=1; i<=N; i++) {
            if(i%3==0) {
              sum=sum+i;  
            }
            
         }
         cout <<"sum of number divisible by 3 from 1 to="<<N<<"="<<sum;
         return 0;

      }
