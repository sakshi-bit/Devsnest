vector<int> solve(int n, vector<int> nums, int target){
//CODE HERE
vector<int> ans;
unordered_map<int,int>mpp;
for(int i=0;i<n;i++){
    if(mpp.find(target-nums[i])!=mpp.end()){
        ans.push_back(mpp[target-nums[i]]);
        ans.push_back(i);
        break;
    }
    mpp[nums[i]]=i;
}
return ans;

}
