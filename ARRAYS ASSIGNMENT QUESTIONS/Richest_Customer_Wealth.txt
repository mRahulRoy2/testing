class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max,sum= 0;
        int size = accounts.size();
        int *ptr = new int[size];
        for(int i = 0;i<accounts.size();i++)
        {
            sum= 0;
            for(int j = 0;j<accounts[i].size();j++){
                sum+=  accounts[i][j];
            }
            ptr[i] = sum;
        }
        int big = ptr[0];
        for(int i = 1; i<size;i++)
        {
            if(big<ptr[i]){
                big = ptr[i];
            }
        }
        return big;
    }
};