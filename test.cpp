class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        res.push_back("");
        int n=digits.size();
        if(n==0)
            return {};
        
        string c[10]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        for(int i=0;i<n;i++)
        {
            vector<string> temp;
            string str=c[digits[i]-'0'];
            for(int j=0;j<str.size();j++)
                for(int k=0;k<res.size();k++)
                    temp.push_back(res[k]+str[j]);
            res=temp;
        }
        
        return res;
    }
};
