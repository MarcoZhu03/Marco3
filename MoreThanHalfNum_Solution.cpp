class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
    int count=0;
    int count_times=0;
    if(numbers.size()%2==0)
        count=numbers.size()/2;
    else
        count=(numbers.size()-1)/2;
    for(int i=0; i<numbers.size();i++){
        for(int j=0; j<numbers.size();j++)
        {
            if(numbers[i]==numbers[j])
                count_times++;
        }
        if(count_times>count)
            return numbers[i];
        else
            count_times=0;
    }
        return 0;
    }
};