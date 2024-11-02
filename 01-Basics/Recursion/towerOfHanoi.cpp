#include<bits/stdc++.h>
using namespace std;

// Solution class
class Solution {
public:
    void towerOfHanoi(int N,int A,int B,int C) {
        // Add your solution here
        if(N>0){
            towerOfHanoi(N - 1, A, C, B);
            cout << "From " << A << " to " << C <<"\n";
            towerOfHanoi(N - 1, B, A, C);
        }
    }
};

int main() {
    // Fast IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
   /* cout << "Enter number of test cases: ";*/
    cin >> T;

    while (T--) {
        int A = 1, B = 2 , C = 3;
        int N;
        if (!(cin >> N)){
            cerr << "Insufficient inputs for the number of test cases specified." << endl;
            return 1; // Exit with error code
        }
        Solution obj;
        obj.towerOfHanoi(N,A,B,C);//do not input N>10 takes to much resourse
        cout << " ";
    }

    return 0;
}