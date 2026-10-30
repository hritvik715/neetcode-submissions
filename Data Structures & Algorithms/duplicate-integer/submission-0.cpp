class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        // 1st way
        // for(int i=0; i<nums.size()  ; i++){
        //     for(int j=i+1 ; j<nums.size() ; j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // return false;


        // 2nd way 
        unordered_set<int> x(nums.begin() , nums.end());
        if(x.size() == nums.size()){
            return false;
        }
        else return true;

        
    }
};