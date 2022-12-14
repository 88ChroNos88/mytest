#include <stdio.h>

#define ROWSANDCOLUMNS 4

int create_matrix(int *m);
int print_matrix(int m[ROWSANDCOLUMNS][ROWSANDCOLUMNS]);
int task_one(int a, int *m);
int task_two(int b, int *m);
int task_three(int c);
int task_four(int d);

int main() {
  int matrix[ROWSANDCOLUMNS][ROWSANDCOLUMNS];
  create_matrix(*matrix);
  task_one(ROWSANDCOLUMNS, *matrix);
  printf("\n");
  task_two(ROWSANDCOLUMNS, *matrix);
  printf("\n");
  task_three(ROWSANDCOLUMNS);
  printf("\n");
  task_four(ROWSANDCOLUMNS);
  return 0;
}

int create_matrix(int *matrix) {
  int i = 1;
  for (int rows = 0; rows < ROWSANDCOLUMNS; rows++) {
    for (int columns = 0; columns < ROWSANDCOLUMNS; columns++) {
      matrix[rows * ROWSANDCOLUMNS + columns] = i;
      i++;
    }
  }

  return 0;
}

int print_matrix(int matrix[ROWSANDCOLUMNS][ROWSANDCOLUMNS]) {
  for (int rows = 0; rows < ROWSANDCOLUMNS; rows++) {
    for (int columns = 0; columns < ROWSANDCOLUMNS; columns++) {
      printf("%4d ", matrix[rows][columns]);
    }
    printf("\n");
  }

  return 0;
}

int task_one(int RC, int *matrix) {
  for (int rows = 0; rows < RC; rows++) {
    for (int columns = 0; columns < RC; columns++) {
      printf("%4d ", matrix[rows * RC + columns]);
    }
    printf("\n");
  }

  return 0;
}

int task_two(int RC, int *matrix) {
  for (int rows = (RC - 1); rows >= 0; rows--) {
    for (int columns = (RC - 1); columns >= 0; columns--) {
      printf("%d ", matrix[rows * RC + columns]);
    }
  }
  printf("\n");

  return 0;
}

int task_three(int RC) {
  int matrix[RC][RC];

  for (int rows = 0; rows < RC; rows++) {
    for (int columns = 0; columns < RC; columns++) {
      if ((rows + columns) < (RC - 1)) {
        matrix[rows][columns] = 0;
      } else {
        matrix[rows][columns] = 1;
      }
    }
  }
  print_matrix(matrix);

  return 0;
}

int task_four(int RC) {
  int matrix[RC][RC];
  int i = 1;
  int shift = 0;
  while (i <= (RC * RC)) {
    for (int upper_rows = (0 + shift); upper_rows < (RC - shift);
         upper_rows++) {
      matrix[0 + shift][upper_rows] = i;
      i++;
    }
    for (int right_columns = (1 + shift); right_columns < (RC - shift);
         right_columns++) {
      matrix[right_columns][RC - 1 - shift] = i;
      i++;
    }
    for (int lower_rows = (RC - 2 - shift); lower_rows >= (0 + shift);
         lower_rows--) {
      matrix[RC - 1 - shift][lower_rows] = i;
      i++;
    }
    for (int left_columns = (RC - 2 - shift); left_columns >= (1 + shift);
         left_columns--) {
      matrix[left_columns][0 + shift] = i;
      i++;
    }
    shift++;
  }
  print_matrix(matrix);

    return 0;
}