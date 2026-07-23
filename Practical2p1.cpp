#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter how many plates :"<<endl;
    cin>>n;
    string arr[n];
    string target;

    for(int i = 0 ;i < n; i++)
    {
        cout<<"enter number plates of vehicle :"<<endl;
        cin>>arr[i];
       
    }
    cout<<"enter target :"<<endl;
    cin>>target;

    for(int i=0;i<n;i++)
   if(arr[i] == target)
   {
        cout<<"your target" << arr[i]<<endl;
        cout<< "index : "<<i+1 <<endl;
        return 0;
   }
   cout<<"target not found "<<endl;
   return 0;

   


    
}
