class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int count=0;
        int count_num=array.size();
        for(int i=count_num-1; i>=0; i--)
        {
            if(array[i+count]%2==1){
                array.insert(array.begin(),array[i+count]);
                count++;
            }
        }
        int count_num2=array.size();
        for(int j=count_num2-1; j>=count; j--)
        {
            if(array[j]%2==1){
                array.erase(array.begin()+j);
            }
        }
        
    }
};