#include <iostream>
using namespace std;

int main(){

    int A[8]={1,2,2,3,4,1,3,2};
    bool Verified[8]={false};

    for(int i=0; i<8; i++){
        if(Verified[i])
        continue;

        int count=1;
        for(int j=i+1; j<8; j++){
            if(A[i]==A[j]){
                count++;
                Verified[j]=true;
            }
        }
        cout<<A[i]<<" - "<<count<<endl;
    }

    return 0;
}