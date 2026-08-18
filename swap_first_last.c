#include <stdio.h>

int main()
{
    int num;
    int first, last;
    int digits = 0;
    int power = 1;
    int middle;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    int temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    for (int i = 1; i < digits; i++)
    {
        power = power * 10;
    }

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Original number = %d\n", num);
    printf("After swapping = %d", result);

    return 0;
}
