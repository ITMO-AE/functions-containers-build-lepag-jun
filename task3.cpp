#include <iostream>
#include <vector>

using namespace std;

bool IsPalindrom(string str)
{
    int len = str.length();
    if(len == 0 || str == "\0")
        return true;
    for(int i = 0; i < len/2; ++i)
    {
        if(str[i] != str[len-i-1])
            return false;
    }
    return true;
}

vector<string> PalindromFilter(vector<string> &words, int minLength)
{
    vector<string> out;
    for(auto i : words)
    {
        if(i.size() >= minLength)
        {
            if(IsPalindrom(i))
                out.push_back(i);
        }
    }
    return out;
}

int main()
{
    vector<string> words = {"abacaba", "aba"};
    int minLength = 2;
    vector<string> result = PalindromFilter(words, minLength);
    for(auto i : result)
        cout << i << endl;
    return 0;
}
