#include <stdio.h>
#include <string.h>

struct sub {
  char name[10];
  char surname[10];
  char phone[12];
};

int print_sub(struct sub *, int *);
int add_sub(struct sub *, int *);
int search_sub(struct sub *, int *);

int main() {
  struct sub subscribers[10];
  struct sub *ptr = &subscribers[0];
  int count = 0;
  int *c = &count;

  int number_menu = 0;

  while (number_menu != 4) {
    printf(
        "\tMENU\n1 - display a list of subscribers\n2 - add subscriber\n3 - "
        "subsciber "
        "search\n4 - exit\n\nenter menu item:\n");
    scanf("%d", &number_menu);
    switch (number_menu) {
      case 1:
        print_sub(ptr, c);
        break;
      case 2:
        add_sub(ptr, c);
        break;
      case 3:
        search_sub(ptr, c);
        break;
      case 4:
        printf("exit\n");
        break;
      default:
        printf("no option selected\n");
        break;
    }
  }

  return 0;
}

int print_sub(struct sub *ptr, int *c) {
  if (*c != 0) {
    for (int i = 0; i < *c; i++) {
      printf("Name: %s \t Surname: %s \t Phone: %s \n", ptr[i].name,
             ptr[i].surname, ptr[i].phone);
    }
  } else {
    printf("No subscribers\n");
  }
  return 0;
}

int add_sub(struct sub *ptr, int *c) {
  printf("enter name subscriber:\n");
  scanf("%s", ptr[*c].name);
  printf("enter surname subscriber:\n");
  scanf("%s", ptr[*c].surname);
  printf("enter phone subscriber:\n");
  scanf("%s", ptr[*c].phone);
  *c = *c + 1;

  return 0;
}

int search_sub(struct sub *ptr, int *c) {
  char desired[12];
  int flag = 0;
  printf("what to search?\n");
  scanf("%s", desired);
  for (int i = 0; i < *c; i++) {
    if (strcmp(desired, ptr[i].name) == 0) {
      flag = 1;
      printf("Name: %s \t Surname: %s \t Phone: %s \n", ptr[i].name,
             ptr[i].surname, ptr[i].phone);
    } else if (strcmp(desired, ptr[i].surname) == 0) {
      flag = 1;
      printf("Name: %s \t Surname: %s \t Phone: %s \n", ptr[i].name,
             ptr[i].surname, ptr[i].phone);
    } else if (strcmp(desired, ptr[i].phone) == 0) {
      flag = 1;
      printf("Name: %s \t Surname: %s \t Phone: %s \n", ptr[i].name,
             ptr[i].surname, ptr[i].phone);
    }
  }
  if (flag == 0) {
    printf("no desired subscriber\n");
  }

  return 0;
}