/* Calculate the average of elephant seal's weight from the data file
using an array of structs.
Sept. 27, 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// fuction that will calculate the average of an array of n size
double average(int row, int column, int array[row][column])
{
    int a, b;
    double sum = 0.0;
    for (a = 0; a < row; a++)
        for (b = 0; b < column; b++)
            sum += array[a][b];
    return sum / (row * column);
}

// Main function to calculate the average of elephant seal's weight by reading the data file
int main()
{
    // Declare variables
    int i, j, rows = 50, columns = 20;
    int rc = rows * columns;

    // Allocate memory for the array
    int **malloc_array = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        malloc_array[i] = (int *)malloc(columns * sizeof(int));

    // Read the data file and store the data in the array
    FILE *f = fopen("elephant_seal_data.txt", "r");
    for (i = 0; i < rc; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (!fscanf(f, "%d", &malloc_array[i][j]))
                break;
        }
    }
    fclose(f);
    // Print the average of elephant seal's weight
    printf("Average of the Northern Elephant Seal is %.2f\n\n", average(rows, columns, malloc_array));
    return 0;
}