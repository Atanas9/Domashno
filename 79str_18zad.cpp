#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && b + c > a && a + c > b) {
        if(a == b && b == c) {
            cout << "ravnostranen";
        } else if(a == b || a == c || c == b) {
            cout << "ravnobedren";
        } else {
            cout << "raznostranen";
        }

    } else {
        cout << "Ne moje";
    }




return 0;
}
