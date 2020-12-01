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
        for (size_t j = 1; j < length; j++)
        {
            for (size_t t = 2; t < length; t++)
            {
                if (i != j && i != t && j != t)
                {
                    if (data[i] + data[j] + data[t] == 2020)
                    {
                        printf("%d * %d * %d = %d\n", data[i], data[j], data[t], (data[i] * data[j] * data[t]));
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}