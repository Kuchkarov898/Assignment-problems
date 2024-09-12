#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << " The temperature in Farenheit is equal to "<< fahrenheit << endl;
    return 0;
}