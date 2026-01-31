#include <iostream>
#include <array>
using namespace std;

using std::string ;

int main(){

    array<int,5> A={1,2,3,4,5};

    for(int i=0; i<A.size(); i++){
        cout<<A[i];
    }

    return 0;
}