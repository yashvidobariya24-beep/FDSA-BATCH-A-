#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout<<"enter size:"<<endl;
    cin >> n;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        freq[id]++;
    }

    cout << "duplicate book ids: ";

    for(auto x : freq)
    {
        if(x.second > 1)
        {
            cout << x.first << " ";
        }
    }

    return 0;
}