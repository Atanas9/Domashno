#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n, m, p, v, t;
    cin >> n >> m;
    if((n / 100) + (m % 10) <= 9) {
        p = (n / 100) + (m % 10);
    }
    else {
        p = ((n / 100) + (m % 10)) % 10 + ((n / 100) + (m % 10)) / 10;
    }
    if(((n % 100) / 10) + ((m % 100) / 10) <= 9) {
        v = ((n % 100) / 10) + ((m % 100) / 10);
    }
    else {
        v = (((n % 100) / 10) + ((m % 100) / 10)) % 10 + (((n % 100) / 10) + ((m % 100) / 10)) / 10;
    }
    if((m / 100) + (n % 10) <= 9) {
        t = (m / 100) + (n % 10);
    }
    else {
        t = ((m / 100) + (n % 10)) % 10 + ((m / 100) + (n % 10)) / 10;
    }
    cout << p * 100 + v * 10 + t;
return 0;
}
