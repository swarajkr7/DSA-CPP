#include <iostream>
using namespace std;

int main(){

    int A[]={1,1,2,2,3,3,4};
    int n=sizeof(A)/sizeof(A[0]);

    for(int i=0; i<n-1; i++){
        if(A[i]==A[i+1]){
            for(int j=i; j<n-1; j++ )
            A[j]=A[j+1];
            n--;
            i--;
        }  
    }

    for(int k=0; k<n; k++){
        cout<<A[k]<<endl;
    }

    return 0;
}