#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;

        else if (target > arr[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

/*int binarySearchRecursive(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;

    else if (target < arr[mid])
        return binarySearchRecursive(arr, low, mid - 1, target);

    else
        return binarySearchRecursive(arr, mid + 1, high, target);
}
*/
int main()
{
    int n;
    cout << "Enter number of book codes: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted book codes: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter target book code: ";
    cin >> target;

    int result1 = binarySearchIterative(arr, n, target);
    
    if (result1 != -1)
        cout << "Iterative Search: Found at position " << result1 + 1 << endl;
    else
        cout << "Iterative Search: Not Found" << endl;

   

    return 0;
}