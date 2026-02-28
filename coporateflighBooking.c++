class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> arr (n+1, 0);
        for(int i = 0 ; i< bookings.size() ; i++){
            int first = bookings[i][0];
            int last = bookings[i][1];
            int val = bookings[i][2];
            arr[first] += val;
           if(last+1<=n) arr[last+1] -= val;

        }
        vector<int> ans(n);
        int curr = 0 ;
        for(int i = 1; i <= n ;i++){
            ans[i-1] = curr + arr[i];
            curr = ans[i-1];
           
        }
        return ans;
    }
};