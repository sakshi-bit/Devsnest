int solve(int n, vector<int> nums){
//CODE HERE
int ans;
for(int i=0;i<nums.size();i++){
ans = nums[i]^ans;
}
return ans;
}
