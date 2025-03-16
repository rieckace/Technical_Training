#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> frequencyMap;
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        frequencyMap[arr[i]]++;
    }

    for (const auto& pair : frequencyMap) {
        std::cout << "Element " << pair.first << " occurs " << pair.second << " times." << std::endl;
    }

    return 0;
}