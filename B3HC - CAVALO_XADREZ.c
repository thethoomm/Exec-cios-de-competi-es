#include <stdio.h>
#include <string.h>

int main(void) {
  int ic, jc, v = 0; //,v2=0,v3=0,v4=0;
  scanf("%d %d", &ic, &jc);

  if (jc >= 3 && jc <= 6) {
    if (ic >= 3 && ic <= 6) {
      printf("8\n");
    } else if (ic == 1 || ic == 8) {
      printf("4\n");
    } else {
      printf("6\n");
    }
  }
  if (jc == 2 || jc == 7) {
    if (ic == 1 || ic == 8) {
      printf("3\n");

    } else if (ic == 2 || ic == 7) {
      printf("4\n");
    } else if (ic >= 3 && ic <= 6) {
      printf("6\n");
    }
  }

  if (jc == 1 || jc == 8) {
    if (ic == 1 || ic == 8) {
      printf("2\n");
    } else if (ic == 2 || ic == 7) {
      printf("3\n");
    } else if (ic >= 3 && ic <= 6) {
      printf("4\n");
    }
  }

  if (jc == 2 || jc == 7) {
    if (ic == 2 && ic == 7) {
      printf("4\n");
    }
  }

  return 0;
}
