#include <iostream>
using namespace std;

int main(){

    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(A[0]);
    int temp=A[0];

    for(int i=0; i<n-1; i++){
        A[i]=A[i+1];
    }
    A[n-1]=temp;

    for(int j=0; j<n; j++){
        cout<<A[j]<<endl;
    }

    return 0;
}