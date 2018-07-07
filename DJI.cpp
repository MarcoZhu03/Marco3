#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin>>str;
	int num=1;
	char judge=str[0];
	string::iterator iter=str.begin();
	if(str.size()==0)
	{
		throw "an error occured";
	}
	else
	{
		iter++;
		while(iter!=str.end())
		{
			
			if(*iter==judge){
				num++;
			} 
			else{
				cout<<judge<<num;
				num=1;
				judge=*iter;
			}
			iter++;
		}
	}
	cout<<judge<<num;
	system("pause");
	return 0;
}