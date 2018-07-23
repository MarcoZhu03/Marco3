#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string::iterator iter=str.begin()+str.size()-1;
    int num=0;
    while(iter!=str.begin())
    {
        if(*iter==' ')
            break;
        else 
            num++;
        
        iter--;
    }
    if(iter==str.begin()){num++;}
    cout<<num<<endl;
}