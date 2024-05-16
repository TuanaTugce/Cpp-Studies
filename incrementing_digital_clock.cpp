#include<iostream>
#include<string>

using namespace std;

class MyTime {
private:
    int hour;
    int minute;
    int second;

public:
    MyTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void printTime()
    {
        cout << hour << "." << minute << "." << second << endl;
    }
    void incrementSecond()
    {
        if (second == 59)
        {
            second = 0;
            if (minute == 59)
            {
                minute = 0;
                if (hour = 23)
                    hour = 0;
                else
                    hour++;
            }
            else
             minute++;
        }
        else
            second++;
    }
};


int main()
{
    int h,m,s;

    cout << "Enter the hour/minute/second : ";
    cin >> h;
    cin >> m;
    cin >> s;

     MyTime time1(h, m, s);
     time1.printTime();

     time1.incrementSecond();
     time1.printTime();

     time1.incrementSecond();
     time1.printTime();

     time1.incrementSecond();
     time1.printTime();

     time1.incrementSecond();
     time1.printTime();

    return 0;
}
