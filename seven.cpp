#include <iostream>
using namespace std;
       int main() {
        int n=5;
          
           for(int i=0; i<=n; i++) {
             char ch='A'+i-1;
             for(char j=1; j<=i; j++)  {
                cout<<ch;
                ch--;
             }
             cout<<endl;
           }
           return 0;
       }