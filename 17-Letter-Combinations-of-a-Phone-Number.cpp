class Solution {
public:
    vector<string>ans;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string & digits,int index,string temp){
        if(index==digits.length()){
            ans.push_back(temp);
            return;
        }
        string letters=mapping[digits[index]-'0'];
        for(char ch:letters){
            temp.push_back(ch);
            solve(digits,index+1,temp);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        return {};
        string temp;
        solve(digits,0,temp);
        return ans;
    }
};