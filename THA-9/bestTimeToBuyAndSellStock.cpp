int solve(int n, vector<int> prices){
//CODE HERE
int minprice = INT_MAX;
int maxprofit = 0;
for(int i=0;i<n;i++){
    maxprofit = max(maxprofit,prices[i]-minprice);
    minprice = min(minprice,prices[i]);

}
return maxprofit;
}
