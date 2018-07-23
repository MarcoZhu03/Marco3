#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int in=0;
    in=n;
    vector<int> save;
    while(n!=0){
        save.push_back(n%10);
        n=n/10;
    }
    int s=0;
    int number=0;
    for(vector<int>::size_type i=0; i<save.size(); i++){
        s=save[i];
        number+=s*pow(10,save.size()-1-i);
    }
    int out=0;
    out=in+number;
    cout<<out<<endl;
}