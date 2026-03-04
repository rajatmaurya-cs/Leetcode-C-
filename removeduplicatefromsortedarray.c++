class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;int k=0;
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j]){nums[k]=nums[i];k++;}
            i++;
        }
    
        nums[k]=nums[n-1];
        return k+1;
    }
};