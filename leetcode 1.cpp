class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indices, redundants;
        for (int i=0; i<nums.size(); i++)
        {
            if (indices.find(nums[i]) == indices.end())
                indices.insert({nums[i], i});
            else {
                redundants.insert({nums[i], i});
            }
        }
        for (int i=0; i<nums.size(); i++)
        {
            int b = target - nums[i];
            if (indices.find(b) != indices.end())
            {
                if (indices.at(b) != indices.at(nums[i]))
                {
                    return {indices.at(nums[i]), indices.at(b)};
                }
                else {
                    if (redundants.find(b) != redundants.end())
                        return {indices.at(nums[i]), redundants.at(b)};
                }
            }
        }
        
        return (vector<int>) 0;
    }
        
        
};