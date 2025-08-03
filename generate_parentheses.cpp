class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector<string> result;
         backtrack(n,n,"",result);
         return result;
    }

    public:
    void backtrack(int open,int close,string p,vector<string>& result) {
        if (open==0 && close==0) {
            result.push_back(p);
            return;

        }
        if (open>0){
            backtrack(open-1,close,p+"(",result);
        }
        if (close>open) {
            backtrack(open,close-1,p+")",result);
        }

    }
};
