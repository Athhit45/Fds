#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    cout << "The first " << n << " natural numbers are: ";
    
    for(int i = 1; i <= n; ++i) {
        cout << i << " ";
        sum += i;
    }
    
    cout << endl << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}