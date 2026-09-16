R = Row 
C = Column 
I = Index 
J = Index 
A / arr = Array
X = Temporary variable 
B / temp = Temporary array

#include <iostream>
using namespace std;

class Array2D
{
    int arr[2][2];

public:

    void input()
    {
        cout << "Enter 4 elements:\n";

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
    }

    void insert()
    {
        int r, c, value;

        cout << "Enter row, column and value: ";
        cin >> r >> c >> value;

        arr[r][c] = value;
    }

    void deleteElement()
    {
        int r, c;

        cout << "Enter row and column to delete: ";
        cin >> r >> c;

        arr[r][c] = 0;
    }

    void search()
    {
        int value;

        cout << "Enter value to search: ";
        cin >> value;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (arr[i][j] == value)
                {
                    cout << "Element found at ["
                         << i << "][" << j << "]\n";
                    return;
                }
            }
        }

        cout << "Element not found\n";
    }

    void rotate()
    {
        int temp[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp[j][1 - i] = arr[i][j];
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                arr[i][j] = temp[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Array2D a;

    a.input();

    cout << "\nOriginal Array:\n";
    a.display();

    a.insert();

    cout << "\nAfter Insert:\n";
    a.display();

    a.deleteElement();

    cout << "\nAfter Delete:\n";
    a.display();

    a.search();

    a.rotate();

    cout << "\nAfter Rotation:\n";
    a.display();

    return 0;
}
// output
Enter 4 elements:
1 2
3 4

Original Array:
1 2
3 4

Enter row, column and value: 0 1 5

After Insert:
1 5
3 4

Enter row and column to delete: 1 0

After Delete:
1 5
0 4

Enter value to search: 5
Element found at [0][1]

After Rotation:
0 1
4 5
