class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int temp=0;
        vector<int> MinNum;
        if(input.size()==0||k>input.size()){return MinNum;}
        for(vector<int>::size_type i=0; i<input.size()-1; i++)
            for(vector<int>::size_type j=0; j<input.size()-i-1; j++)
            {
                if(input[j]>input[j+1])
                {
                    temp=input[j];
                    input[j]=input[j+1];
                    input[j+1]=temp;
                }
                    
            } 
        for(int num=0; num<k; num++){
            MinNum.push_back(input[num]);
        }
        return MinNum;
    }
};