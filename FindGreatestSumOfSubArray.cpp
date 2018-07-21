class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int count=0;
        int num=array[0];
        for(vector<int>::size_type first=0; first<array.size(); first++){
            count=0;
            for(vector<int>::size_type second=first; second<array.size(); second++){
                count+=array[second];
                if(count<num)
                    continue;
                else
                    num=count;
            }
        }
        return num;
    }
};