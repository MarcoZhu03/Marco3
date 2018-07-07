class Solution {
public:
	void replaceSpace(char *str,int length) {
    	string str2(str);
    	int i=0;
    	while((i=str2.find(' '))!=string::npos){
        str2.erase(i,1);
        str2.insert(i,"%20");
	//str2.replace(i,1,"%20");//Another method
    	}      
    	strcpy(str,str2.c_str());//string to char*
	}
};