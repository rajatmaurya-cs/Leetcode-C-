class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int nums) {
        int n = arr.size();
        int left = 0 ;
        int right = n-1;
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < nums)
                left = mid + 1;
            else
                right = mid;
        }

        vector<int> ans;
        int index = left;
        left = index - 1;
        right = index;

        while (left >= 0 && right < n && ans.size() < k) {

            if (abs(nums - arr[left]) < abs(nums - arr[right])) {
                ans.push_back(arr[left--]);
            } else if (abs(nums - arr[left]) > abs(nums - arr[right])) {
                ans.push_back(arr[right++]);
            } else {
                if (arr[left] < arr[right])
                    ans.push_back(arr[left--]);
                else
                    ans.push_back(arr[right++]);
            }
        }

        if(right>=n){
		while(left>=0 && ans.size()<k){
		ans.push_back(arr[left--]);
	}

}

	if(left<0){
		while( right< n && ans.size()<k){
			ans.push_back(arr[right++]);
		}
	}
    sort(ans.begin(),ans.end());
    return ans;
    }
};