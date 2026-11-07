#include <iostream>
using namespace std;
    void sumAndProduct(int arr[], int n, int &sum, long long & product) {
        sum=0;
        product=1;

        for(int i=0; i<n; i++) {
            sum += arr[i];
            product *= arr[i];
        }
    }
        int main() {
            int arr[] = {1,2,3,4,5,6};
            int n=6;

            int sum;
            long long product;

            sumAndProduct(arr,n,sum,product);

            cout<<"sum="<< sum << endl;
            cout<<"produt="<< product << endl;
            return 0;
        }
    