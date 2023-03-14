#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int right=0;
    int res=nums[0];
    int count=0;
    while(right<nums.size()){
        count+=nums[right];
        res=max(res,count);
        if(count<0) count=0;
        right++;
    }
    cout<<res<<endl;
    return 0;
}