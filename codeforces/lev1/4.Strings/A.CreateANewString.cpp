#include <iostream>
#include <ostream>
#include <string.h>
using namespace std;

string S,T;
int i,j;

int main(){
    
cin>>S>>T;

while(S[i]!='\0'){
    i++;
}
while (T[j]!='\0') {
    j++;
}

cout<<i<<" "<< j<<endl;
cout<<S<<" "<< T<<endl;


}



