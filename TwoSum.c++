class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>v2;
        int i=0;
        int j=0;
        while(i<nums.size()){
            int a=target-nums[i];
            if(m.find(a)==m.end()){m[nums[i]]=j++;}
            else{
                v2.push_back(i);
                v2.push_back(m[a]);
            }
            i++;
        }
        return v2;

        
    }
};