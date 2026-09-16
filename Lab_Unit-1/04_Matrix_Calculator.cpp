Addition: 1 2 / 3 4 + 5 6 / 7 8 → 6 8 / 10 12
Multiplication: → 19 22 / 43 50
Transpose: rows ↔ columns
Determinant: 1×4 - 2×3 = -2
5: Program close 

#include <iostream>
using namespace std;

void inputMatrix(int matrix[10][10], int rows, int columns)
{
    cout << "Enter matrix elements:\n";

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            cin >> matrix[row][column];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int columns)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }
}

void addMatrix()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter first matrix:\n";
    inputMatrix(matrix1, rows, columns);

    cout << "Enter second matrix:\n";
    inputMatrix(matrix2, rows, columns);

    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            result[row][column] =
                matrix1[row][column] + matrix2[row][column];
        }
    }

    cout << "\nAddition Result:\n";
    displayMatrix(result, rows, columns);
}

void multiplyMatrix()
{
    int matrix1[10][10], matrix2[10][10], result[10][10] = {0};
    int rows1, columns1, rows2, columns2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> columns1;

    cout << "Enter first matrix:\n";
    inputMatrix(matrix1, rows1, columns1);

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> columns2;

    cout << "Enter second matrix:\n";
    inputMatrix(matrix2, rows2, columns2);

    if (columns1 != rows2)
    {
        cout << "Multiplication is not possible.\n";
        return;
    }

    for (int row = 0; row < rows1; row++)
    {
        for (int column = 0; column < columns2; column++)
        {
            for (int k = 0; k < columns1; k++)
            {
                result[row][column] +=
                    matrix1[row][k] * matrix2[k][column];
            }
        }
    }

    cout << "\nMultiplication Result:\n";
    displayMatrix(result, rows1, columns2);
}

void transposeMatrix()
{
    int matrix[10][10];
    int rows, columns;

    cout << "Enter rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter matrix:\n";
    inputMatrix(matrix, rows, columns);

    cout << "\nTranspose:\n";

    for (int column = 0; column < columns; column++)
    {
        for (int row = 0; row < rows; row++)
        {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }
}

void determinant()
{
    int matrix[10][10];
    int size, det;

    cout << "Enter size of matrix (2 or 3): ";
    cin >> size;

    if (size != 2 && size != 3)
    {
        cout << "Only 2x2 and 3x3 matrices are allowed.\n";
        return;
    }

    cout << "Enter matrix:\n";
    inputMatrix(matrix, size, size);

    if (size == 2)
    {
        det = matrix[0][0] * matrix[1][1]
            - matrix[0][1] * matrix[1][0];
    }
    else
    {
        det = matrix[0][0] *
              (matrix[1][1] * matrix[2][2]
             - matrix[1][2] * matrix[2][1])
            - matrix[0][1] *
              (matrix[1][0] * matrix[2][2]
             - matrix[1][2] * matrix[2][0])
            + matrix[0][2] *
              (matrix[1][0] * matrix[2][1]
             - matrix[1][1] * matrix[2][0]);
    }

    cout << "Determinant = " << det << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MATRIX CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Multiplication\n";
        cout << "3. Transpose\n";
        cout << "4. Determinant\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addMatrix();
            break;

        case 2:
            multiplyMatrix();
            break;

        case 3:
            transposeMatrix();
            break;

        case 4:
            determinant();
            break;

        case 5:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
output:
===== MATRIX CALCULATOR =====
1. Addition
2. Multiplication
3. Transpose
4. Determinant
5. Exit
Enter choice: 1

Enter rows and columns: 2 2

Enter first matrix:
1 2
3 4

Enter second matrix:
5 6
7 8

Addition Result:
6 8
10 12


===== MATRIX CALCULATOR =====
1. Addition
2. Multiplication
3. Transpose
4. Determinant
5. Exit
Enter choice: 2

Enter rows and columns of first matrix: 2 2

Enter first matrix:
1 2
3 4

Enter rows and columns of second matrix: 2 2

Enter second matrix:
5 6
7 8

Multiplication Result:
19 22
43 50


===== MATRIX CALCULATOR =====
1. Addition
2. Multiplication
3. Transpose
4. Determinant
5. Exit
Enter choice: 3

Enter rows and columns: 2 3

Enter matrix:
1 2 3
4 5 6

Transpose:
1 4
2 5
3 6


===== MATRIX CALCULATOR =====
1. Addition
2. Multiplication
3. Transpose
4. Determinant
5. Exit
Enter choice: 4

Enter size of matrix (2 or 3): 2

Enter matrix:
1 2
3 4

Determinant = -2


===== MATRIX CALCULATOR =====
1. Addition
2. Multiplication
3. Transpose
4. Determinant
5. Exit
Enter choice: 5

Program ended
