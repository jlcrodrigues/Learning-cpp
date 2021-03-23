  
#include <iostream>
#include <ctime>

using namespace std;

time_t timeElapsed()
{   
    static const time_t start = time(nullptr);
    return time(nullptr) - start;
}

int main()
{   
    while (1)
    {
        cin.ignore(); //wait for ENTER key
        cout << timeElapsed();

        if (cin.eof() && cin.fail()) break;
    }
    return 0;
}