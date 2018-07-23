#include <iostream>
using namespace std;

int main(){
    double input;
    cin>>input;
    int judge;
    int output;
    judge=input*10;
    if(judge%10>=5)
        judge=judge/10+1;
    else
        judge=judge/10;
    output=judge;
    cout<<output<<endl;
    return 0;
}