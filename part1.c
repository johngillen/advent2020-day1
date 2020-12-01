#include <stdlib.h>
#include <stdio.h>
#include "advent.h"

int main(int argc, char const *argv[])
{
    FILE * file;
    file = fopen("input", "r");
    int length = inputlen(file);

    int data[length];;

    rewind(file);
    for (size_t i = 0; i < length; i++)
    {
        fscanf(file, "%d", &data[i]);
    }

    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length; j++)
        {
            if (i == j) { j++; }
            if (data[i] + data[j] == 2020)
            {
                printf("%d * %d = %d\n", data[i], data[j], (data[i] * data[j]));
                return 0;
            }
        }
    }
    return 0;
}