class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;

        while(start<=end){
            if(start==end){
                return nums[start];
            }

            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    start=mid+2;
                }
                else{
                    end=mid;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            mid=start+(end-start)/2;
        }
        return -1;
        
    }
};