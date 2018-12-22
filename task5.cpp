#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Reverse(vector<int> &v)
{
    reverse(v.begin(), v.end());     //слишком просто :Р
}

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Reverse(vec);
    for(auto i : vec)
        cout << i << " ";
    cout << endl;
    return 0;
}
