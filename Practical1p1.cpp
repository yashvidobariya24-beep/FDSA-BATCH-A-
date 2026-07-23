#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h ,n;

    cout<<"enetr your number of items";
    cin>>n;

    vector<int> arr(n);

    cout<<"enter items";
    for(int i = 0 ; i<n ; i++)
    {
    cin>>arr[i];
    }

    cout<<"enter hours";
    cin>>h;

    int k = h % n;

    for(int i = k;i<n;i++){
    cout<<arr[i]<<" ";
    }
    for(int i = 0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}