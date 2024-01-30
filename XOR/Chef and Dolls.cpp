#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>vec(n);
        int res = 0;
        for(int i = 0; i < n; i++) {
            int x;  cin>>x;
            vec[i] = x;
            res = res^x;
        }
        cout<<res<<endl;
    }
    
    return 0;
}
