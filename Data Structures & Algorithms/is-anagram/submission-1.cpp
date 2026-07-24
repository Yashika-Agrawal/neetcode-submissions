class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m,n;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int j=0;j<t.size();j++)
        {
            n[t[j]]++;
        }
        for(auto x:m)
        {
            if(m[x.first]!=n[x.first])
            {
                return false;
            }
        }
        return true;
        
    }
};
