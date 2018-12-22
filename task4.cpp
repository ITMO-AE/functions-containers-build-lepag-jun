#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void CopyVec1ToVec2(vector<int> &Vec1, vector<int> &Vec2)
{
    vector<int>::iterator it = Vec1.begin();
    while (it < Vec1.end())
    {
        Vec2.push_back(*it);
        it++;
    }
    Vec1.clear();
}

int main()
{
    vector<int> Vec1 = {12, 34, 22, 40};
    vector<int> Vec2 = {50, 3, 8, 10, 42, 21, 48};
    CopyVec1ToVec2(Vec1, Vec2);
    for (auto i : Vec2)
            cout << i << " ";
    cout << endl;
    return 0;
}
