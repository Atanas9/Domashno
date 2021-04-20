#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long x, y;
cout << "x="; cin >> x;
if(x >= 20){
    cout << "y="; cout << 2*pow(x,4)+3;
}
else{
    cout << "y="; cout << fabs(x-1);
}



return 0;
}
