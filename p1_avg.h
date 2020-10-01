#include <stdio.h>

void main_avg(void) {
  int n;
  scanf("%d", &n);
  if(n == 3) {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);
    x2 = (double)x2;//convert every int into a double in this if statement
    x1 = (double)x1;
    x3 = (double)x3;
    printf("%lf\n", (x1+x2+x3) / 3.00);
  } else {
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    x2 = (double)x2;//convert every int into a double in this else statement
    x1 = (double)x1;
    x3 = (double)x3;
    x4 = (double)x4;
    printf("%lf\n", (x1+x2+x3+x4) / 4.00);
  }
}
