#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    string s;
    cin>>s;
    int num=1;
    char judge;
    string::iterator iter=s.begin();
    vector<int> save;
    if(s.size()==0)
    {
        throw "an error occured";
    }
    else
    {
        judge=s[0];
        while(iter!=s.end())
        {
            iter++;
            if(*iter==judge){
                num++;
            } 
            else{
                save.push_back(num);
                num=1;
                judge=*iter;
            }
        }
    }
    double count=0;
    for(vector<int>::size_type i=0; i<save.size(); i++){
        count+=save[i];
    }
    count=count/save.size();
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<count<<endl;
    return 0;
}