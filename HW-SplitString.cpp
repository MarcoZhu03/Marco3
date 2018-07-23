#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int count=0;
    while(cin>>str){
        string::iterator iter=str.begin();
        if(str.size()<8){
            str.append(8-str.size(),'0');
            cout<<str<<endl;
        }
        else if(str.size()==8)
        {
            cout<<str<<endl;
        }
        else{
            while(str.size()>8){
            cout << str.substr(0,8) <<endl;
            str=str.substr(8);   
            }
        str.append(8-str.size(),'0');
        cout<<str<<endl;
        }
       
    }
    return 0;
}