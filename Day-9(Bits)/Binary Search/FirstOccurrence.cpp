#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int arr[] = {6,4,1,2, 3, 4, 4, 5, 6, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int l = 0, r = n - 1;
    int target;
    cout << "Enter the target: ";
    cin >> target;
    int mid;
    int ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            // r = mid - 1; //for first occurrence
            l = mid + 1;  // for last occurrence
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if(ans != -1){
        // cout<<"First occurrence of "<<target<<" is at index "<<ans<<endl<<"\n";
        cout<<"Last occurrence of "<<target<<" is at index "<<ans<<endl<<"\n";
    }
    else{
        cout<<"Target not found";
    }
    return 0;
}
// Time Complexity: O(logn)
// Space Complexity: O(1)