class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
         int n = nums.size();
    vector<int>ptr(2*n, 0);
    for(int i = 0;i<2*n;i++){
        ptr[i] = nums[i%n];
    }
    return ptr;
        
    }
};