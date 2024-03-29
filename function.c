#include<stdio.h>

double find_avg(int run1, int run2, int run3)
{
    int total = run1 + run2 + run3;
    double avg = (double)total/3;
    return avg;
}

int main()
{
    int run1, run2, run3;
    scanf("%d %d %d",&run1, &run2, &run3);
    double avg = find_avg(run1, run2, run3);
    printf("Average run = %lf\n",avg);

    scanf("%d %d %d",&run1, &run2, &run3);
    avg = find_avg(run1, run2, run3);
    printf("Average run = %lf\n",avg);
}



