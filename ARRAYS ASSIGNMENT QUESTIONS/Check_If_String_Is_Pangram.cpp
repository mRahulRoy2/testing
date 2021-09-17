/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/

bool checkPangram(string str)
{
    int index;
    bool *res = new bool[26];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }

        res[index] = true;
    }
    for (int i = 0; i <= 25; i++)
    {
        if (res[i] == false)
        {
            return false;
        }
    }
    return true;
}