class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1=strs[0];
        string prefix="";
        for(int i=0;i<s1.length();i++){
            char ch=s1[i];
            for(int j=1;j<strs.size();j++){
                if(ch != strs[j][i]){return prefix;}
                
            }
            prefix.push_back(ch);
        }
        return prefix;
        
    }
};