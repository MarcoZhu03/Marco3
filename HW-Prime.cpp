#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long ulDataInput;
    if(ulDataInput==1)
        return 1;
    while(cin>>ulDataInput){
        for(int i=2; i<sqrt(ulDataInput);i++){
            while(ulDataInput%i==0){
                cout<<i<<' ';
                ulDataInput=ulDataInput/i;
            }
        }
        cout<<ulDataInput<<' '<<endl;
    }
    return 0;
} 