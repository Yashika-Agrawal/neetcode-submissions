class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<a.size();i++)
        {
            int curr=a[i];
            int need=target-curr;
            if(m.find(need)!=m.end())
            {

                ans.push_back(m[need]);
                ans.push_back(i);
                return ans;
            }
            else{
                 m[a[i]] = i;
            }
            
        }
        return ans;
    }
};
