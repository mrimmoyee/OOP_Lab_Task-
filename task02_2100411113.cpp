#include<iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    int hours()
    {
        return hour;
    }
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h,int m, int s)
    {
        second=s;
        minute=m+(s/60);
        second%=60;
        hour=h+(m/60);
        minute%=60;
        hour%=24;
    }
    void advance(int h, int m, int s)
    {
        second+=s;
        minute+=m+(s/60);
        second%=60;
        hour+=h+(m/60);
        minute%=60;
        hour%=24;

    }
    void print()
    {
        cout<<hour<<":"<<minute<<":"<<second;
    }
};
int main()
{
    Time time;
    time.reset(25,70,90);
    time.advance(1,40,60);
    time.print();
}
