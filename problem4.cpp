#include <iostream>
using namespace std;
int main() {
    int N, othercomputers;
    cin>>N;
    othercomputers=50-N%50;
    if (othercomputers==50){othercomputers=0;}
    cout<<othercomputers<<endl;
    return 0;
}