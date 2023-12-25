#include <stdio.h>
const int max = 5;
void add10(int *studentmarks)
{
    for (int i = 0; i < max; i++)
    {
        *studentmarks++ += 10;}}

int main()
{
    int marks[5] = {23, 34, 23, 35, 12};
    for (int i = 0; i < max; i++)
    {
        printf("The value of marks as of now: %d\n", marks[i]);}
    add10(marks);

    for (int i = 0; i < max; i++)
    {
        printf("The value of marks later are: d\n", marks[i]); }}