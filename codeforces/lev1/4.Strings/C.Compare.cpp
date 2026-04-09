#include <iostream>

using namespace std;
string x,y;


int main() {
    cin>>x>>y;
    
    int i = 0;
    int min;
    bool finished = false;
    
    if(x.length()<y.length()){
        min=x.length();
    }else{
        min=y.length();
    }
    
    while (i<min) {
        
        if(x[i]<y[i]){
            cout<<x<<endl;
            finished = true;
            break;
        }else if(x[i]>y[i]){
            cout<<y<<endl;
            finished = true;
            break;
        }
        i++;
        
    }

    if (!finished) {
            if (x.size() <= y.size()) {
                cout << x << endl;
            } else {
                cout << y << endl;
            }
        }
    
        return 0;
    
    
    
}


