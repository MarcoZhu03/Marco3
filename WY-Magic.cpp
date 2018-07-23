#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string out;
    while(n!=0){
        if(n%2==1)
        {
            n=(n-1)/2;
            out.insert(0,"1");
        }
        else
        {
            n=(n-2)/2;
            out.insert(0,"2");
        }
    }
    cout<<out<<endl;
}