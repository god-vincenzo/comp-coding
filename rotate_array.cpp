class Solution {
    public:
        void rotate(vector<int>& num, int k){
        int n=num.size();
        k=k%n;
        reverse(num.begin(),num.end());
        reverse(num.begin(),num.begin()+k);
        reverse(num.begin()+k,num.end());}

} ;
