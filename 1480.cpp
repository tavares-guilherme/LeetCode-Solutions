class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.empty())
            return nums;

        vector<int> sums;

        sums.push_back(nums.at(0));
        
        #pragma omp for
        for(int i = 1; i < nums.size(); i++) {
            sums.push_back(sums.at(i-1) + nums.at(i));
        }
        
        return sums;
    }
};