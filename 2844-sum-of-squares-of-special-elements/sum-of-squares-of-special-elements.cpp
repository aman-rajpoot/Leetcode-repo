class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int special=0;
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(n%(1+i)==0){
                special=nums[i];
                sum+=nums[i]*nums[i];
            }
            
        }
        return sum;
        

        
    }
};