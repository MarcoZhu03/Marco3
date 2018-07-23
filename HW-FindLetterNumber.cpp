#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    char s;
    cin>>s;
    transform(str.begin(),str.end(),str.begin(),::tolower);//转换为小写字符串
    if(s>='A'&&s<='Z'){s+=32;}//若s为大写字母则转换其为小写
    string::iterator iter=str.begin();
    int count=0;
    while(iter!=str.end()){
        if(*iter==s){
            count++;
        }
        iter++;
    }
    cout<<count<<endl;
}