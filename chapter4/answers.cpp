#include <iostream>
using namespace std;

struct Time
{
    int hrs;
    int mins;
    int secs;
    int paw;
};

enum players {B1, B2, SS, B3, RF, CF, LF, P, C};

enum speeds {obsolete = 78, single = 45, album = 33};

int main()
{
    players joe, tom;
    joe = LF;
    tom = P;

    Time time2;
    time2.hrs = 11;

    Time time1;
    time1.hrs = 11;
    time1.mins = 10;
    time1.secs = 59;

    return 0;
}