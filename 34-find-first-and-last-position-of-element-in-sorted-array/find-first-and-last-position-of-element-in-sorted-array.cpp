class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        int index=-1;
        int first;
        int last;
        int mid;

        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                index=mid;
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }
        first=index;

        low=0;
        high=n-1;
        index=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                index=mid;
                low=mid+1;

            }else if(nums[mid]<target){
                low=mid+1;

            }else{
                high = mid-1;
            }
        }
        last = index;
        return {first,last};
        
    }
    
};