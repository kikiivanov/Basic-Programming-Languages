/* 1. Write a program in C to read n number of values in an array and print it. Display it in reverse order.
Copy the elements of one array into another array. Sort elements of array in ascending and descending order.
Find the sum of all elements of the array. Find the maximum and minimum element in an array.
Test Data:
Input the number of elements to store in the array: 3
Input 3 number of elements in the array:
element - 0: 2
element - 1: 7
element - 2: 5
Expected Output:
The values store into the array are:
2 7 5
The values store into the array in reverse are:
5 7 2
The elements copied into the second array are:
2 7 5
Elements of array in sorted ascending order:
2 5 7
Elements of array in sorted descending order:
7 5 2
Sum of all elements stored in the array is 14
Maximum element is 7
Minimum element is 2 */

#include <stdio.h>

int main()
{
    int n, i, array[100], sum = 0, array2[100], max, min, j, temp;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    printf("\nInput %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nThe values store into the array are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    printf("\n\nThe values store into the array in reverse are:\n");
    for (i = n - 1; i >= 0; i--)
	    printf("%d ", array[i]);

	for (i = 0; i < n; i++)
        sum += array[i];

    for (i = 0; i < n; i++)
        array2[i] = array[i];

    printf("\n\nThe elements copied into the second array are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", array2[i]);

    max = array[0];
    min = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];

        if (array[i] < min)
            min = array[i];
    }

    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\n\nElements of array in sorted ascending order:\n");
    for(i = 0; i < n; i++)
        printf("%d  ", array[i]);

    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(array[j] > array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\n\nElements of array in sorted descending order:\n");
    for(i = 0; i < n; i++)
        printf("%d  ", array[i]);

    printf("\n\nSum of all elements stored in the array is %d", sum);
    printf("\n\nMaximum element is: %d\n", max);
    printf("\nMinimum element is: %d", min);

    return 0;
}
