#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int *inputArray=new int[n];
        int i=0;
        vector<int> save;
        while(i!=n){
            cin>>inputArray[i];
            i++;
        }
        for(int j=0; j<n; j++){
            save.push_back(inputArray[j]);
        }   
        sort(save.begin(),save.end());//排序
        save.erase(unique(save.begin(),save.end()),save.end());//删除重复元素
        for(int num=0; num<save.size(); num++){
            cout<<save[num]<<endl;
        }
        delete []inputArray;
        save.clear();
    }
    return 0;
}