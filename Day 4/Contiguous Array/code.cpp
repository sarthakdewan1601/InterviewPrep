class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int i,j,k;
        int ans = 0;
        int sum = 0;
        unordered_map<int,int> umap{{0,-1}};
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                sum--;
            }
            else
            {
                sum++;
            }
            if(umap.find(sum) != umap.end())
            {
                ans = max(ans,i-umap[sum]);
            }
            else umap[sum] = i;
        }
        return ans;
    }
};
