int firstOccurence(int n, vector<int> nums, int k){
    int low = 0;
    int high = nums.size()-1;
    int first_Index = -1;
    int mid = low + (high-low)/2;
    while(low<=high){

        if( nums[mid] == k ){
                first_Index = mid;
                high = mid-1;
        }
        else if ( nums[mid]<k ){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
         mid = low+(high-low)/2;
    }

return first_Index;
}


int lastOccurrence(int n, vector<int> nums, int k){
     int low = 0;
    int high = nums.size()-1;
    int last_Index = -1;
    int mid = low + (high-low)/2;
    while(low<=high){

        if( nums[mid] == k ){
                last_Index = mid;
                low = mid+1;
        }
        else if ( nums[mid]<k ){
            low = mid+1;
        }
        else{
            high = mid-1;
    }
     mid = low+(high-low)/2;
    }
   return last_Index;

}


int solve(int n, vector<int> nums, int k){
    int first_Index = firstOccurence(n,nums,k);
    if(first_Index<0) return 0;
    int last_Index = lastOccurrence(n,nums,k);
    return last_Index-first_Index+1;




}
