class Solution {
    vector<string> a;
    void dfs(vector<string>& ans, string& s, int pos, string& digist){
        if(pos == digist.size()){
            ans.push_back(s);
            return;
        }
        for(int i =0; i<a[digist[pos]-'0'].size();i++){
            s += a[pos][i];
            dfs(ans, s, ++pos, digist);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty())
            return ans;
        a= {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s;
        dfs(ans, s, 0, digits);
        return ans;
    }
    
};