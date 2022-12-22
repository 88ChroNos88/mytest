#include <stdio.h>

int main() {
  // struct test {
  //   unsigned char b1 : 1;
  //   unsigned char b2 : 1;
  //   unsigned char b3 : 1;
  //   unsigned char b4 : 1;
  //   unsigned char b5 : 1;
  //   unsigned char b6 : 1;
  //   unsigned char b7 : 1;
  //   unsigned char b8 : 1;
  // };
  // char a = 0b11011001;
  // struct test *ptr;
  // ptr = (struct test *)&a;

  // struct test {
  //   char a;
  //   int b;
  // } __attribute__((packed));

  // printf("sizeof_stract_test = %ld\n", sizeof(struct test));

  // struct test {
  //   char a;
  //   int b;
  // };
  // char str[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};
  // struct test *ptr;
  // ptr = (struct test *)&str[0];
  // printf("%d\n", ptr->b);
  char a[10];
  char *b;
  b = &a[0];
  scanf("%s", b);
  printf("%s\n", b);
  return 0;
}