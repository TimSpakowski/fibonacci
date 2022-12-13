#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  
  int n;
  int fn;

  printf("Gib eine Zahl n ein: ");
  scanf("%d", &n);
  
  fn = fibonacci(n);

  printf("Die Fibonacci-Zahl fn ist: %d\n", fn);

  return 0;
}
