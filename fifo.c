#include <stdio.h>

int main(void)
{
    // the number of process;
    int N;
    scanf("%d", &N);

    int process_arrival_time[10000];
    int process_work_time[10000];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &process_arrival_time[i]);
        scanf("%d", &process_work_time[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", process_arrival_time[i]);
        printf("%d \n", process_work_time[i]);
    }

    return 0;
}