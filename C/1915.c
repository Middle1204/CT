#include <stdio.h>

int f(int n) {
  if (n <= 1)
    return n;
  
  return f(n - 1) + f(n - 2);
}
int main() {
  int n;
  scanf("%d", &n);
  f(n);
  int a = f(n);
  printf("%d", a);
  
  return 0;
}

