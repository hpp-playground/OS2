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
  int time_slice = 1;

  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", &process_work_time[i]);
    scanf("%d", &process_arrival_time[i]);
  }

  for (;;) {
    for (int i = 0; i < N; i++) {
      if (process_arrival_time[i] <= now && !check[i]) {
        if (process_work_time[i] >= time_slice) {
          now += time_slice;
          process_work_time[i] -= time_slice;
        } else {
          now += process_work_time[i];
          process_work_time[i] = 0;
        }

        if (process_work_time[i] == 0) {
          check[i] = 1;
          result[i] = now;
        }
      }
    };
    int flag = 1;
    for (int i = 0; i < N; i++) {
      if (!check[i]) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      break;
    };
  };

  for (int i = 0; i < N; i++) {
    printf("%d\n", result[i] - process_arrival_time[i]);
    mean_finish_time += ((float)result[i] - (float)process_arrival_time[i]);
  }
  printf("%f\n", mean_finish_time / (float)N);

  return 0;
}