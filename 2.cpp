#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int wiggleMaxLength(vector<int>& nums) {
         int n = nums.size();
        if (n < 2) {
            return n;
        }
        vector<int> up(n), down(n);
        up[0] = down[0] = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                up[i] = max(up[i - 1], down[i - 1] + 1);
                down[i] = down[i - 1];
            } else if (nums[i] < nums[i - 1]) {
                up[i] = up[i - 1];
                down[i] = max(up[i - 1] + 1, down[i - 1]);
            } else {
                up[i] = up[i - 1];
                down[i] = down[i - 1];
            }
        }
        return max(up[n - 1], down[n - 1]);
    }
    
int main(){
	vector<int> nums;
	
	int a;
	while(cin>>a)
	{
		nums.push_back(a);
		if(cin.get() == '\n'){
			break;
		}
	}
	
	int ans = wiggleMaxLength(nums);
	
	cout<<ans<<endl;
	return 0;
} 
