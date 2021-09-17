#include <iostream>
#include <cstring>
using namespace std;
int Find(string arr[], const string ruleKey, const string ruleValue)
{
    int index, count = 0;
    if (ruleKey == "colors")
    {
        index = 1;
    }
    else if (ruleKey == "name")
    {
        index = 2;
    }
    else
    {
        index = 0;
    }

    if (arr[index] == ruleValue)
    {
        count++;
    }
    return count;
}
int countMatch(string arr[][3], string ruleKey, string ruleValue)
{

    int i, count = 0;
    for (i = 0; i < 3; i++)
    {
        count = count + Find(arr[i], ruleKey, ruleValue);
    }
    return count;
}

int main()
{
    string str[][3] = {{"phone", "blue", "pixel"},
                       {"phone", "silver", "phone"},
                       {"phone", "gold", "iphone"}};
    string ruleKey = "name";
    string ruleValue = "pixel";
    int count = countMatch(str, ruleKey, ruleValue);
    cout << count;
    return 0;
}