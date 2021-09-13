class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        int*ptr = new int[nums.size()];
        int count = 0,big = 0;
        
        for(int i =0;i<size;i++){
            ptr[i] = nums[i];
        }
        
        for(int i = 0;i<size;i++)
        {
            count = 0;
            big = ptr[i];
            for(int j = 0;j<size;j++)
            {
                if(big>ptr[j]){
                    count++;
                }
            }
            nums[i] = count;
        }
        return nums;
    }
};