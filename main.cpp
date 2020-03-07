#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n,key,j,z;
    cin >> n;
    vector<int> v;
    for (j=0; j<n; j++)
    {
        cin >> z;
        v.insert(v.begin(),z);
    }

    for (int i=1; i<n; i++)
    {
        key=v.at(i);
        j=0;

        while (j<i && v.at(j)<key)
        {
            ++j;
        }
        v.insert(v.begin()+j,key);
        v.erase (v.begin()+i+1);
    }

    for (int i=0; i<n; i++)
    {
       cout << v.at(i) << " ";
    }
}