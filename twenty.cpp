#include <iostream>
 using namespace std;
   
        int reverseNumber(int n) {
            int rev=0;
            while(n!=0) {
                rev=rev*10+(n%10);
            }
            return rev;
        }
          int main() {
            int num;
            cin>>num;
                 cout<<"Reversed number=" <<reverseNumber(num);
         return 0;
    }