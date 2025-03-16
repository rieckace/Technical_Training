#include <iostream>
#include <vector>
#include <unordered_map>

class Solution
{
public:
    int totalNumbers(std::vector<int> &digits)
    {
        std::unordered_map<int, int> counts;

        // Count frequency of each digit
        for (int digit : digits)
        {
            counts[digit]++;
        }

        int count = 0;

        // Iterate over the possible last digits (even digits)
        for (int lastDigit : {0, 2, 4, 6, 8})
        {
            if (counts[lastDigit] == 0)
            {
                continue; // Skip if there are no such last digits
            }

            // Use one occurrence of lastDigit
            counts[lastDigit]--;

            // Iterate over possible first digits (cannot be 0)
            for (int firstDigit = 1; firstDigit <= 9; firstDigit++)
            {
                if (counts[firstDigit] == 0)
                {
                    continue; // Skip if there's no such first digit
                }

                // Use one occurrence of firstDigit
                counts[firstDigit]--;

                // Iterate over possible middle digits
                for (int middleDigit = 0; middleDigit <= 9; middleDigit++)
                {
                    if (counts[middleDigit] == 0)
                    {
                        continue; // Skip if there's no such middle digit
                    }

                    // Count this valid combination
                    count++;
                }

                // Return the used digit counts
                counts[firstDigit]++;
            }

            // Return the used lastDigit count
            counts[lastDigit]++;
        }

        return count; // Return the total count of valid numbers
    }
};

int main()
{
    Solution solution;
    std::vector<int> digits = {1, 2, 3, 4}; // Example input
    int result = solution.totalNumbers(digits);
    std::cout << "Total unique three-digit even numbers: " << result << std::endl;
    return 0;
}