#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p = (n / 100) * ((n % 100) / 10) * (n % 10), s = (n / 100) + ((n % 100) / 10) + (n % 10);
    if(p > 99) {
        cout << "yes " << p - s;
    } else {
        cout << "no " << p;
    }




return 0;
}
