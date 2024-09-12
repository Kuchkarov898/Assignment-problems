#include <iostream>
using namespace std;
int main() {
    float x, y, z;
    cin >> x >> y;
    z=y*30.48;
    if(z>x) {
        cout<<"1"<<endl;
    } else {
        cout<<"0"<<endl;
    }
    return 0;
}