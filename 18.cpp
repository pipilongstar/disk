#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> nums1;
   vector<int> nums2;
   int m,n;
   cin>>m>>n;
   if(m<n){
    int temp=n;
    n=m;
    m=temp;
   }
   int i=m;
   while(i>n){
    nums1.push_back(i--);
   }
   int j=m-n;
   while(j>1){
    nums2.push_back(j--);
   }
   for(int i=0;i<nums2.size();i++){
    int p=nums2[i];
    for(int j=0;j<nums1.size();j++){
        int q=nums1[j];
        int m=min(p,q);
        int k=m;
        while(k>1){
            if(p%k==0&&q%k==0){
                p/=k;
                q/=k;
            }else{
                k--;
            }
        }
        nums1[j]=q;
        if(p==1) break;
    }
    nums2[i]=p;
   }
   long long res=1;
   for(int i:nums1) res*=i;
   for(int i:nums2) res/=i;
   cout<<res<<endl;
    return 0;
}