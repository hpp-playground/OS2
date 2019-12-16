#include <stdio.h>

int main(void) {
  // the number of process;
  int N;
  int check[10000] = {};
  int process_work_time[10000];
  int process_arrival_time[10000];
  int result[10000];
  float mean_finish_time;
  int now = 0;
  int min_process;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &process_work_time[i]);
    scanf("%d", &process_arrival_time[i]);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (!check[j]) {
        min_process = j;
        break;
      }
    }

    for (int j = 0; j < N; j++) {
      if (!check[j]) {
        if (process_arrival_time[j] <= now &&
            process_arrival_time[j] < process_arrival_time[min_process]) {
          min_process = j;
        }
      }
    }

    now += process_work_time[min_process];
    check[min_process] = 1;
    result[min_process] = now;
  }

  for (int i = 0; i < N; i++) {
    printf("%d %d\n", result[i], process_arrival_time[i]);
    mean_finish_time += ((float)result[i] - (float)process_arrival_time[i]);
  }
  printf("%f\n", mean_finish_time / (float)N);

  return 0;
}