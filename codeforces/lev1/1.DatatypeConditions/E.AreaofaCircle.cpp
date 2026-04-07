#include<iostream>
#include <iomanip>

using namespace std;

double r,z;
double  pi=3.141592653;
 
int main(){
    cin>>r;
    
    z = pi * (r * r);

    cout << setprecision(11)<<z<<endl;
}