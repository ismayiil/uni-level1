#include <iostream>

using namespace std;
int main(){
    
    int t; cin >> t;
    cout << t / 3600 << " hour(s) " << (t % 3600) / 60 << " minute(s) " << t % 60 << " second(s)";

}