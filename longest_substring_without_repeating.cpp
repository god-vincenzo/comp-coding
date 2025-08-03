class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    vector<int> index(256,-1);
    int ml = 0;
    int st=0;
    for (int i=0;i<s.length();i++){
        if (index[s[i]] >= st) {
            st=index[s[i]] +1;

        }
        index[s[i]] =i;
        ml=max(ml,i-st+1);
    }
    return ml;
}};
