#include <iostream>
using namespace std;

int main()
{
    int num;
    int ans = 0;
    cout << "Enter the num: ";
    cin >> num;

    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "The factorial of " << num << " is: " << fact << endl;

    while (fact != 0)
    {
        int last = fact % 10;
        if (last == 0)
        {
            ans++;
        }
        else
        {
            break; // Exit the loop if a non-zero digit is encountered
        }
        fact /= 10; // Remove the last digit
    }

    cout << "The number of trailing zeroes is " << ans << endl;

    return 0;
}