class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        // res.push_back({});

        // for(int i=0;i<nums.size();i++){
        //     vector<int> dummy;
        //     // dummy.push_back(nums[i]);
        //     // res.push_back(dummy);
        //     for(int j=i;j<nums.size();j++){
        //         dummy.push_back(nums[j]);
        //         res.push_back(dummy);
        //     }
        // }

        getSubsets(nums, res, {}, 0);
        return res;
    }

private: 
    void getSubsets(vector<int>& nums, vector<vector<int>>& res, vector<int> temp, int i){
        // cout<<"count\n";
        if(i>=nums.size()){
            res.push_back(temp);
            return;
        }
        // res.push_back(temp);
        getSubsets(nums, res, temp, i+1);
        temp.push_back(nums[i]);
        // res.push_back(nums)
        getSubsets(nums, res, temp, i+1);
    }    
};
