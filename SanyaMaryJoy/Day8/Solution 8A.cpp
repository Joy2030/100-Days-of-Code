class Solution {
public:
    string reverseWords(string s) {
      vector<string>words;
      string t="";
      for(int i=0;i<s.length();i++){
          if(s[i]!=' ')
            {
                t+=s[i];
            }
           if((s[i]==' ' && t!="" )|| (i==s.length()-1 && s[i]!=' '))
            {
                words.push_back(t);
                t="";
            }
      }  
      string ans="";
      bool l=true;
        for(int i=words.size()-1;i>=0;i--)
        {
             if(i==words.size()-1)
             {
                 ans+=words[i];
             } 
             else
             {
                  ans+=' '+words[i];   
             }
        }
        return ans;}
};