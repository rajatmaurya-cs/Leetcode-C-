class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int left = 0 ;
        int right = n-1;
        int i = 0;
        while(i<=right){
            if(arr[i]==0) swap(arr[i++],arr[left++]);
            else if(arr[i]==2) swap(arr[i],arr[right--]);
            else i++;
        }
    }
};