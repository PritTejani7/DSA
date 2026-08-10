#include <iostream>
#include <string>
using namespace std;

int main()
{
    string plates[4];
    string target;

    cout << "Enter 4 vehicle plate numbers:" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter plate " << i + 1 << ": ";
        cin >> plates[i];
    }

    cout << "Enter target plate to search: ";
    cin >> target;

    int result = -1;

    for (int i = 0; i < 4; i++)
    {
        if (plates[i] == target)
        {
            result = i + 1;
            break;
        }
    }

    if (result != -1)
    {
        cout << "Target plate found at position : " << result << endl;
    }
    else
    {
        cout << "Target plate not found." << endl;
    }

    return 0;
}