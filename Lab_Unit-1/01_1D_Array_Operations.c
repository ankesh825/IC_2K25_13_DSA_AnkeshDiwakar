#include <stdio.h>

int main()
{
    int arr[100], n, choice;
    int position, value, key, rotations;
    int i, r, found, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 0 || n > 100)
    {
        printf("Invalid number of elements.");
        return 0;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Search");
        printf("\n4. Rotate");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (n == 100)
            {
                printf("Array is full.");
                break;
            }

            printf("Enter position: ");
            scanf("%d", &position);

            if (position < 0 || position > n)
            {
                printf("Invalid position.");
                break;
            }

            printf("Enter value: ");
            scanf("%d", &value);

            for (i = n; i > position; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[position] = value;
            n++;

            printf("Value inserted.");
            break;

        case 2:
            if (n == 0)
            {
                printf("Array is empty.");
                break;
            }

            printf("Enter position to delete: ");
            scanf("%d", &position);

            if (position < 0 || position >= n)
            {
                printf("Invalid position.");
                break;
            }

            for (i = position; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            n--;
            printf("Value deleted.");
            break;

        case 3:
            printf("Enter value to search: ");
            scanf("%d", &key);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (arr[i] == key)
                {
                    printf("Value found at position %d.", i);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Value not found.");
            }
            break;

        case 4:
            if (n == 0)
            {
                printf("Array is empty.");
                break;
            }

            printf("Enter number of right rotations: ");
            scanf("%d", &rotations);

            rotations = rotations % n;

            for (r = 0; r < rotations; r++)
            {
                last = arr[n - 1];

                for (i = n - 1; i > 0; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[0] = last;
            }

            printf("Array rotated.");
            break;

        case 5:
            if (n == 0)
            {
                printf("Array is empty.");
                break;
            }

            printf("Array: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 6:
            printf("Program ended.");
            break;

        default:
            printf("Invalid choice.");
        }

    } while (choice != 6);

    return 0;
}
output:
Enter number of elements: 4
Enter array elements:
10 20 30 40
//Insert:

Enter choice: 1
Enter position: 2
Enter value: 25
Value inserted.

Arrray:
10 20 25 30 40

//Delete:

Enter choice: 2
Enter position to delete: 1
Value deleted.

10 25 30 40

//Search:

Enter choice: 3
Enter value to search: 30
Value found at position 2.

//Rotate right 1 time:
Enter choice: 4
Enter number of right rotations: 1
Array rotated.

Final array:
40 10 25 30
