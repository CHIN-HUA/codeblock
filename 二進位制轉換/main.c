#include<stdio.h>

const unsigned MAXSIZE = 100;

int main() {
  int num, size, ary[MAXSIZE];
  while (scanf("%d", &num) != EOF) {
    size = 0;
    do {
      ary[size++] = num % 2;
      num /= 2;
    } while (num > 0);

    for (size--; size >= 0; size--) printf("%d", ary[size]);

    puts("");
  }
  return 0;
}


