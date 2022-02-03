class Solution {
public:
    vector<int> findAnagrams(string s, string t) {
        int i, j, k, n = s.size(), m = t.size();
        unordered_map<char, int> umap1;
        vector<int> ans;
        for (i = 0; i < m; i++)
        {
            umap1[t[i]]++;
        }
        unordered_map<char, int> umap2;
        for (i = 0; i < m; i++)
        {
            umap2[s[i]]++;
        }
        i = 0; j = m - 1;
        while (j < n)
        {
            bool check = true;
            for (auto it : umap2)
            {
                if (it.second != 0)
                {
                    if (umap1.find(it.first) == umap1.end())
                    {
                        check = false;
                        break;
                    }
                    else if (umap1.find(it.first) != umap1.end() &&
                             it.second == umap1[it.first])
                    {
                        continue;
                    }
                    else
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true)
            {
                // cout << i << endl;
                ans.push_back(i);
            }
            umap2[s[i]]--;
            i++;
            j++;
            umap2[s[j]]++;
        }
        return ans;
    }
};
