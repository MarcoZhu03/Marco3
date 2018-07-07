class Solution {
public:
    double Power(double base, int exponent) {
    double temp=1;
    if(exponent>=0)
    {
        for(int num=0; num<exponent; num++)
        {
            temp=temp*base;
        }
    }
    else
    {
        for(int num=0; num<-exponent; num++)
        {
            temp=temp*base;
        }
        temp=1/temp;
    }
    return temp;
    }
};