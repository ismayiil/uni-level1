#include <bits/stdc++.h>

using namespace std;

const double pi = 3.14159265;

int main(){
    
    double r; cin >> r;
    double area, circum;
    area = pi * r * r;
    circum = 2 * pi * r;
    cout << fixed << setprecision(8) << area << ' ' << circum;

}