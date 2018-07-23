#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string str;
    while(cin>>str){
    string::iterator iter=str.begin()+2;
    int s;
    int number=0;
    for(int i=str.size()-2;i!=0&&iter!=str.end();i--){
        if((*iter>='A')&&(*iter<='F'))
        {
            *iter=*iter-'A';
			s=*iter+10;
            number+=s*pow(16,i-1);
        }
        else
        {
            *iter=*iter-'0';
			s=*iter;
            number+=s*pow(16,i-1);
        }
        iter++;
    }
    cout<<number<<endl;
    }
    
}