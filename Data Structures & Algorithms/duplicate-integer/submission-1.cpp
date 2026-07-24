class Solution {
public:
    bool hasDuplicate(vector<int>& a) {
        unordered_set<int> s;
        for(auto x:a)
        {
            s.insert(x);
        }
        if( s.size() < a.size())
        {
            return true;
        }
        return false;
    }
};