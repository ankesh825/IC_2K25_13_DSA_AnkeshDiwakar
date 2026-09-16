Matrix input lo → 0 ko ignore karo → sirf non-zero elements ki Row, Column aur Value store karo → Triplet form print karo.
#include <iostream>
using namespace std;

int main()
{
    int matrix[10][10], sparse[20][3];
    int rows, columns, index = 1;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter matrix elements:\n";

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            cin >> matrix[row][column];
        }
    }

    sparse[0][0] = rows;
    sparse[0][1] = columns;

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            if (matrix[row][column] != 0)
            {
                sparse[index][0] = row;
                sparse[index][1] = column;
                sparse[index][2] = matrix[row][column];

                index++;
            }
        }
    }

    sparse[0][2] = index - 1;

    cout << "\nTriplet Representation:\n";
    cout << "Row\tColumn\tValue\n";

    for (int i = 0; i < index; i++)
    {
        cout << sparse[i][0] << "\t"
             << sparse[i][1] << "\t"
             << sparse[i][2] << endl;
    }

    return 0;
}
output:
Enter rows and columns: 3 3

Enter matrix elements:
1 0 0
0 5 0
0 0 9

Triplet Representation:
Row     Column  Value
3       3       3
0       0       1
1       1       5
2       2       9
