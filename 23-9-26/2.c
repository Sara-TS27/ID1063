#include <stdio.h>
int daysElapsed(int day, int month)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = day;
    for (int i = 0; i < month - 1; i++)
    {
        total = total + days[i];
    }
    return total;
}
int main()
{
	int day, month;
        scanf("%d %d", &day, &month);
        printf("%d", daysElapsed(day, month));
        return 0;
}
