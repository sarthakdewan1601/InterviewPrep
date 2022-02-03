class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)     {
        int n = nums1.size();
        int i,j,k;
        unordered_map<int,int> umap;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                umap[nums1[i] + nums2[j]]++;
            }
        }
        
        int ans = 0;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(umap.find(-(nums3[i] + nums4[j])) != umap.end())
                {
                    ans += umap[-(nums3[i] + nums4[j])];
                }
            }
        }
        return ans;
    }
};
