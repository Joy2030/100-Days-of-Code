class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
        return "";
    }
        sort(strs.begin(),strs.end());
        int s=strs.size();
        string a=strs[0];
        string b=strs[s-1];
        string ans="";
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                ans+=a[i];
                }
            else break;
        }
        return ans; 
    }
};