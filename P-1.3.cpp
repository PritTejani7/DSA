#include <iostream>
using namespace std;
int main()
{
    string arr[5] = {"R", "RR", "RRR", "RRRR", "RRRRR"};
    string max;
    arr[0] = max;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the longest word among all is " << max << endl;
    cout << "the longest word's lenth among all is " << max.length() << endl;
    return 0;
}
