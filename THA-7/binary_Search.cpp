int solve(int n, vector<int> nums, int target){
//CODE HERE
int low=0;
int high = n-1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(nums[mid]==target)
        return mid;
    else if(nums[mid]>target)
        high = mid-1;
    else
        low = mid+1;
}
return -1;

}
