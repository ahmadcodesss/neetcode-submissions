class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string , vector<string>> group;
        for(string s : strs)
        {
            string key=s;
            sort(key.begin(), key.end());
            group[key].push_back(s);
        }
        for(auto [key,group]: group)
        {
            result.push_back(group);
        }
        return result;
    }
};
