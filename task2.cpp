#include <iostream>

using namespace std;

bool IsPalindrom(string &str)
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

int main()
{
    string str;
    cout << "Введите слово: ";
    getline(cin,str);
//    cin >> str;
    if(IsPalindrom(str))
        cout << "это палиндром" << endl;
    else
        cout << "это не палиндром" << endl;
    return 0;
}
