#include <iostream>
using namespace std;

int main(){

    int A[]={1,2,4,5};
    int n=sizeof(A)/sizeof(A[0]);

    int left=0;
    int right=n-1;

    while(left<right){
        int temp;
        temp=A[left];
        A[left]=A[right];
        A[right]=temp;
        left++;
        right--;
    }

    for(int i=0; i<n; i++){
        cout<<A[i]<<endl;
    }

    return 0;
}