class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
    if(rotateArray.size()==0)
        return 0;
    else
    {
        for(int num=0; num<rotateArray.size(); num++)
        {
            if(rotateArray[num]>rotateArray[num+1])
                return rotateArray[num+1];
        }
    }
    return rotateArray[0];
    }
};