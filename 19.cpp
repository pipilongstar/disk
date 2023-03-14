#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> nums(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    long long res=0;
    for(int i=0;i<n;i++){
        res+=nums[i][0];
        res+=nums[i][n-1];
    }
    for(int i=1;i<n-1;i++){
        res+=nums[0][i];
        res+=nums[n-1][i];
    }
    cout<<res<<endl;
    return 0;
}