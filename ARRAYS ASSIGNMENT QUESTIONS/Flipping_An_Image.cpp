/*
Leetcode 832 Problem
https://leetcode.com/problems/flipping-an-image/
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        //This logic is used to reverse our vector
        int n= image.size();
        int col = image[0].size()-1;
        for(int i = 0;i<n;i++){
            for(int j= 0;j<=col/2;j++)
            {
                 int temp = image[i][j];
                image[i][j] = image[i][col - j];
                 image[i][col - j] = temp;        
            }    
        }
        
        //Here we are just putting 1 at the place of 0 , and 0 at the place of 1
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(image[i][j]==1)
                    image[i][j]=0;
                else 
                    image[i][j]=1;
            }
        }
        return image;
    }
};