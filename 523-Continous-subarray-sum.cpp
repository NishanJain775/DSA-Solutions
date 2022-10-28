class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long ps=0;
        unordered_set<int> seen;
        for(auto x:nums)
        {
            ps=(ps+x)%k;
            if(seen.count(ps))return true;
            seen.insert(((ps-x)%k+k)%k);
        }
        return false;
    }
};
