int solve(int n, vector<int> nums){
//CODE HERE
int ans = 0;
for(int i=0;i<nums.size();i++){
ans = ans^nums[i];
}
return ans;
}
