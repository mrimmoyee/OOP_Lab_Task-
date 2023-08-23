#include<iostream>
using namespace std;
class Counter
{
private:
     int count;
     int increment_step;

public:
    void setIncrementstep(int step_val)
    {
        increment_step = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=increment_step;
    }

    void resetCount()
    {
        count=0;
    }


};
int main()
{
    Counter count1;
    count1. setIncrementstep(2);
    count1.resetCount();
    count1.increment();
    count1.setIncrementstep(4);
    count1.increment();
    cout<<count1.getCount()<<endl;

}


