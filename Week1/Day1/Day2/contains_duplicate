#include <vector>
#include<algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n=nums.size();
        //int count =0;
        sort(nums.begin(),nums.end());
        //int j=1;

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                
                return true;
                //j++;
            }

        }
        return false;
        
    }
};
