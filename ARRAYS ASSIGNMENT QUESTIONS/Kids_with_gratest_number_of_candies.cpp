//this is achieved in O(n^2)
// space complexity is O(n)
#include <iostream>
using namespace std;
bool *kidsWithMaxCandies(int arr[], int size, int extraCandies)
{
    bool test;
    bool *ans = new bool[size];
    for (int i = 0; i < size; i++)
    {
        test = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] + extraCandies >= arr[j])
                test = true;
            else
            {
                test = false;
                break;
            }
        }
        if (test)
            ans[i] = true;
        else
            ans[i] = false;
    }
    return ans;
}
int main()
{
    int arr[] = {4, 2, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int extracandies = 1;
    bool *ptr = kidsWithMaxCandies(arr, size, extracandies);
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }

    return 0;
}