class Solution {
  public:
    
  
  void soln(string arr ,unordered_set<string>&ans ,string&s , vector<int>&visited){
     
      if(arr.size()==s.size()){
         
          ans.insert(arr);
          return ;
      }
      for(int i = 0 ;i < s.size(); i++){
          
          if(!visited[i]){
              visited[i] = 1;
              soln(arr+s[i] , ans , s, visited);
              
           
              visited[i] = 0;
          }
      }
      
  }
    vector<string> findPermutation(string &s) {
       unordered_set<string>ans;
       string arr ="";
       vector<int>visited(s.size(),0);
       soln(arr , ans , s , visited);
       vector<string>nums;
       for(auto it : ans){
           nums.push_back(it);
       }
       return nums;
       
    }
};