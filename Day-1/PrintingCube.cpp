#include <iostream>
#include <cmath> // include cmath for pow function
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    
    // Corrected formula for LHS
    long long LHS = pow(a, 3) + pow(b, 3) + 3*a*a*b + 3*a*pow(b, 2) * pow(a + b, 3);
    
    // Print the result
    cout << "The result of LHS is: " << LHS << endl;
    
    return 0;
}
