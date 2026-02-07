class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=0;
        for(int k : nums){
            if(k==val){continue;}
            else{nums[n++]=k;}
        }
        return n;
    }
};