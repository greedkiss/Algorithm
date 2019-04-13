class Solution {
    vector<string> m;
    void dfs(vector<string>& res,string& s,const string& digits,int pos){
        if(pos==digits.size()){
            res.push_back(s);
            return;
        }
        for(auto ch:m[digits[pos]-'0']){
            s+=ch;
            dfs(res,s,digits,pos+1);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty())
            return res;
        m={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s;
        dfs(res,s,digits,0);
        return res;
    }
};