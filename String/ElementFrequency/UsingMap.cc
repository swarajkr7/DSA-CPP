#include <iostream>
#include <map>
using namespace std;

int main() {
    int A[] = {1, 2, 2, 3, 4, 1, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[A[i]]++;
    }

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
