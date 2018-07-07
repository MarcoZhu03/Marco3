class Solution {
public:
    bool Find(int target, vector<vector<int> > array ) {
        int length=array.size();
        int lengthCo=array[0].size();
        if(length==0||lengthCo==0)
        {
            return false;
        }
        else
        {
            for(int i=0; i<length; i++)
            {
                for(int j=0; j<lengthCo; j++)
                {
                    if(array[i][j]==target)
                    {
                        return true;
                    }
                    else
                    {
                        ;
                    }
                }
            }
            return false;
        }
    }
};