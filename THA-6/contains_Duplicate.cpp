int solve(int n, vector<int> arr){
//CODE HERE
map<int,int> mp;
for(auto i: arr){
    mp[i]++;
    if(mp[i]>1)
    return 1;
}
return 0;
}
