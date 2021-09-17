//Time complexity O(n)
//Space complexity O(n)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size = n*2;
        int *ptr = new int [2*n];
        for(int i = 0;i<2*n;i++){
            ptr[i] = nums[i];
        }
         for(int i = 0;i<2*n;i++){
           if(i%2==0){
                nums[i] = ptr[i/2];
            }
            else{
                nums[i] = ptr[n+i / 2];
            }
              
          }
             
        return nums;
    }
};