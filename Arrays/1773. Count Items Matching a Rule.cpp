class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0, k;
        if(ruleKey == "type")
            k = 0;
        if(ruleKey == "color")
            k = 1;
        if(ruleKey == "name")
            k = 2;
        for(int  i = 0; i < items.size(); i++)
        {
            if(items[i][k] == ruleValue)
            {
                ans++;
            }
        }
        return ans;
    }
};
