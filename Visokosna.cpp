#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int i;
    cout << "Godina:";
    cin >> i;
    if(i % 400 == 0 or ( i % 4 == 0 && i % 100 > 0) ) {
        cout << "Visokosna";
    } else cout << "Ne e visokosna";

return 0;
}

