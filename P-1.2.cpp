#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of borrow records: ";
    cin >> n;

    int book[n];

    cout << "Enter Book IDs:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }

    cout << "Books borrowed more than once are:\n";

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (book[i] == book[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << book[i] << endl;
            for (int k = i + 1; k < n; k++)
            {
                if (book[i] == book[k])
                {
                    book[k] = -1;
                }
            }
        }
    }

    return 0;
}