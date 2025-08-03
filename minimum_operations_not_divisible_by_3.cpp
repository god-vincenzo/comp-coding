class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0;
            for (int num:nums){
                if(num%3!=0){
                    operation++;

                }
            }
            return operation;
        }
        
    };
