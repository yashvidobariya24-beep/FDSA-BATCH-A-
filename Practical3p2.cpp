#include <iostream>
using namespace std;

int main() {
    /*
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else { 
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;

// */
//     int arr[] = {2, 0, 2, 1, 1, 0};
//     int n = 6;

//     int count0 = 0, count1 = 0, count2 = 0;

//     // Count 0, 1 and 2
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] == 0)
//             count0++;
//         else if(arr[i] == 1)
//             count1++;
//         else
//             count2++;
//     }

    
//     int i = 0;

//     while(count0--)
//         arr[i++] = 0;
        
    
//     while(count1--)
//         arr[i++] = 1;
        

    
//     while(count2--)
//         arr[i++] = 2;
        

//     cout << "Sorted array: ";

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;

 int n;
 cout<<"enter array size :"<<endl;
 cin>>n;

 int arr[n];
 cout<<"enter elemnts only 0,1,2 "<<endl;

 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }

 int count0 = 0,count1 = 0,count2 = 0;
 
 for(int i=0;i<n;i++)
 
  if( arr[i]==0)
  count0++;

  else if(arr[i] == 1)
  count1++;

  else
  count2++;

  int i=0;

  while(count0--){
  arr[i++] = 0;
  }

  while(count1--)
  {
    arr[i++] = 1;

  }
  while(count2--)
  {
    arr[i++] = 2;
  }

  cout<<"sorted array :";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";

  }


    
 


}