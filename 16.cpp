#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string res="";
    int i=0;
    while(i<s.size()){
        if(s[i]=='@') i++;
        else break;
    }
    for(int j=i;j<s.size();j++){
        res+=s[j];
    }
    while(i--){
        res+='@';
    }
    cout<<res<<endl;
    return 0;
}