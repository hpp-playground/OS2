#include <stdio.h>

// the number of process;
int N;

int process[2][10000];
int result[10000];
int mean_finish_time;

int main(void)
{
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &process[0][i]);
        scanf("%d", &process[1][i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", process[0][i]);
        printf("%d\n", process[1][i]);
    }

    return 0;
}