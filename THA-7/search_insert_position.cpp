int solve(int n, vector<int> arr, int key){
//CODE HERE
int low = 0, high = n-1;
while(low<=high){
    int mid = low+(high-low)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        high = mid-1;

    }else{
        low=mid+1;
    }
}
return low;
}
