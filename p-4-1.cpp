#include <iostream>
#include <string>
using namespace std;

int main()
{
    string queue[100];
    int n = 0;

    int operations;

    cout << "Enter number of operations: ";
    cin >> operations;

    for (int i = 0; i < operations; i++)
    {
        int choice;
        string patient;

        cout << "\n1. Critical Patient";
        cout << "\n2. Routine Patient";
        cout << "\n3. Priority Patient";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter patient token: ";
            cin >> patient;

            for (int j = n; j > 0; j--)
            {
                queue[j] = queue[j - 1];
            }

            queue[0] = patient;
            n++;
        }

        else if (choice == 2)
        {
            cout << "Enter patient token: ";
            cin >> patient;

            queue[n] = patient;
            n++;
        }

        else if (choice == 3)
        {
            int position;

            cout << "Enter patient token: ";
            cin >> patient;

            cout << "Enter position: ";
            cin >> position;

            if (position >= 1 && position <= n + 1)
            {
              
                for (int j = n; j >= position; j--)
                {
                    queue[j] = queue[j - 1];
                }

                queue[position - 1] = patient;
                n++;
            }
            else
            {
                cout << "Invalid position!" << endl;
            }
        }

       
        cout << "Queue: ";

        for (int j = 0; j < n; j++)
        {
            cout << queue[j] << " ";
        }

        cout << endl;
    }

    return 0;
}