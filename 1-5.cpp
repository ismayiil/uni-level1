#include <iostream>

using namespace std;
int main(){
    
    double c,f; cin >> c;
    f = c * 1.8 + 32;
    cout << c << "C* = " << f << "F*" << '\n';
    cin >> f;
    c = (f - 32) / 1.8;
    cout << f << "F* = " << c << "C*" << '\n';

}