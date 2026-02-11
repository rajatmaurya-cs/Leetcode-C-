class Solution {
public:
    void soln(string curr , int open , int close , int n , vector<string>&arr){
        if(open+close == n*2){
            arr.push_back(curr);
            return ;
        }
        if(open < n) soln(curr+'(' , open+1 , close , n , arr);
        if(open > close) soln(curr+')' , open , close+1 , n , arr);
     }

    vector<string> generateParenthesis(int n) {
            vector<string> arr;
        soln("",0,0,n, arr);
        return arr;
        
    }
};