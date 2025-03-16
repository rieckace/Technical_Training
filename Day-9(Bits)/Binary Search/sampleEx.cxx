#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];

    // enter input
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout<<"Sorted array: ";     
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int l = 0;
    int r = n - 1;
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (target == arr[mid])
        {
            cout << "Target found at index " << mid << endl;
            return 0;
        }
        else if (target < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "Target not found" << endl;
    return 0;
}
