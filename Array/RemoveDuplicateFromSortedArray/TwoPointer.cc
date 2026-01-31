#include <iostream>
using namespace std;

int main(){
    int A[]={1,1,2,2,3,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    int k=0;

    for(int i=1; i<n; i++){
        if(A[i]!=A[k]){
            k++;
            A[k]=A[i];
        }
    }

    int newLength=k+1;

    for(int j=0; j<newLength; j++){
        cout<<A[j]<<endl;
    }

    return 0;
}