#include <stdio.h>

int main() {
  int a = 0x00DDAACC;
  char *ptr;
  ptr = (char *)&a;
  printf("%x\n%d\n", a, a);  // output int a in hex and dec
  for (int i = 0; i < 4; i++) {
    int b = ((a >> (8 * i)) & 0x000000FF);
    printf("%d - byte: %x\n", (i + 1), b);
  }
  ptr = ptr + 2;
  *ptr = 0x0A;
  printf("%x\n%d\n", a, a);  // output int a in hex and dec
  for (int i = 0; i < 4; i++) {
    int b = ((a >> (8 * i)) & 0x000000FF);
    printf("%d - byte: %x\n", (i + 1), b);
  }

  // int c = (a ^ 0x00FF0000);  // change 3byte in int c
  // printf("%x\n%d\n", c, c);  // output int c in hex and dec
  // int d = (a | 0x00BB0000);  // change 3byte in int c
  // printf("%x\n%d\n", d, d);  // output int c in hex and dec
  // int s = (a ^ 0x00100000);  // change 3byte in int c
  // printf("%x\n%d\n", s, s);  // output int c in hex and dec
  return 0;
}