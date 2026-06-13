//S11430090 李郁賓
#include <iostream>
using namespace std;


int main(){
    int a,b;
    cin >> a >>b;
    for(int i=a; i<=b; i++){
        if(i%2==1){
            for (int j=a; j<=i; j++){
                if(j%2==1){
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    cout <<"-------------" << endl;
    int c=0;
    for(int i=a; i<=b; i++){
        cout<<i;
        c+=i;
        if(i<b) cout << "+";
    }
    cout << "=" << c << endl;
    return 0;
    }