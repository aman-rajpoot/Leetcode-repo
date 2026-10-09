class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low= 0;
        int high = m-1;
        int mid;
       
        while(low<=high){
            mid=(low+high)/2;
            int row = 0;
            int left=-1;
            int right =-1;
            for(int i=0;i<n;i++){
                if(mat[i][mid]>mat[row][mid]){
                    row=i;
                    
                }
              
            }
            if(mid>0){
                left = mat[row][mid-1];
            }
            if(mid<m-1){
                right =  mat[row][mid+1];
            }
            if(mat[row][mid]>left&&mat[row][mid]>right){
                return {row,mid};
            }
            else if(left>mat[row][mid]){
                high =mid-1;
            }else{
                low = mid+1;
            }
           
        }
        return {-1,-1};


        
    }
};