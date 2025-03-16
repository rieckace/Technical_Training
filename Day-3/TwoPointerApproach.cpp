
#include <iostream>  
#include <algorithm>  
using namespace std;  

int main() {  
    int n;  

    cout << "Enter the size of array: ";  
    cin >> n;  

    int sum;  
    cout << "Enter the sum: ";  
    cin >> sum;  

    int arr[n]; // Dynamic array input  
    cout << "Enter the elements in array: ";  
    
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    // Sort the array to use the two-pointer technique  
    sort(arr, arr + n);  

    // Iterate through each element  
    for (int i = 0; i < n; i++) {  
        int l = i + 1; // Left pointer starts just after i  
        int r = n - 1; // Right pointer starts at the last element  

        // Use two pointers to find pairs  
        while (l < r) {  
            if (sum == arr[i] + arr[l]) {  
                cout << "Found pair: " << arr[i] << " and " << arr[l]  
                     << " at indices: " << i << " and " << l << endl;  
                l++; // Move left pointer  
            } else if (sum > arr[i] + arr[l]) {  
                l++; // Increase left pointer to increase the sum  
            } else {  
                r--; // Decrease right pointer to decrease the sum  
            }  
        }  
    }  
    
    return 0;  
=======
#include <iostream>  
#include <algorithm>  
using namespace std;  

int main() {  
    int n;  

    cout << "Enter the size of array: ";  
    cin >> n;  

    int sum;  
    cout << "Enter the sum: ";  
    cin >> sum;  

    int arr[n]; // Dynamic array input  
    cout << "Enter the elements in array: ";  
    
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  

    // Sort the array to use the two-pointer technique  
    sort(arr, arr + n);  

    // Iterate through each element  
    for (int i = 0; i < n; i++) {  
        int l = i + 1; // Left pointer starts just after i  
        int r = n - 1; // Right pointer starts at the last element  

        // Use two pointers to find pairs  
        while (l < r) {  
            if (sum == arr[i] + arr[l]) {  
                cout << "Found pair: " << arr[i] << " and " << arr[l]  
                     << " at indices: " << i << " and " << l << endl;  
                l++; // Move left pointer  
            } else if (sum > arr[i] + arr[l]) {  
                l++; // Increase left pointer to increase the sum  
            } else {  
                r--; // Decrease right pointer to decrease the sum  
            }  
        }  
    }  
    
    return 0;  

}