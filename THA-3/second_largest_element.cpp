int solve(int n, vector<int> arr){
//CODE HERE
int maxi = INT_MIN;
int sec_maxi = INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>maxi){
        maxi = arr[i];
    }
}
for(int i=0;i<n;i++){
    if(arr[i]>sec_maxi && arr[i]!=maxi ){
        sec_maxi=arr[i];
    }

}
 return sec_maxi;
}
