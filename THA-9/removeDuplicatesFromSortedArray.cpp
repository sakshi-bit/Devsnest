vector<int> solve(int n, vector<int> arr){
//CODE HERE
vector<int> ans;
ans.push_back(arr[0]);
for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
        ans.push_back(arr[i]);
    }
}
return ans;
}
