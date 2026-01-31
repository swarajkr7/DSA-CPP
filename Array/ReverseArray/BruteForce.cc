#include <iostream>
using namespace std;

int main(){
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    int B[n];

    for(int i=0; i<n; i++){
        B[i]=A[n-i-1];
    }

    for(int j=0; j<n; j++){
        cout<<B[j]<<endl;
    }

    return 0;
}