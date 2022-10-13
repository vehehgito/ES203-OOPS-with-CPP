#include <iostream>
using namespace std;

int main()
{
    float num1, num2, avg;
    
    cout << "Enter the numbers you want to find an average for:";
    cin >> num1;
    cin >> num2;
    
    avg = (num1 + num2)/2;
    
    cout << "Average = ", avg;
    
    return 0;
}
