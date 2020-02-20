class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i,m=0,n = nums.size(),maxI = (int)pow(2,n);
        vector<vector<int>> sol;
        while(m<maxI)
        {
            vector<int> sub;
            for(i=0;i<n;i++) if((m>>i)&1) sub.push_back(nums.at(n-1-i));
            sol.push_back(sub);
            m++;
        }
        return sol;
    }
};