#include <stdio.h>

// Funktion zum Berechnen der Fibonacci-Zahl fn
int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  // Variablen für die Eingabe und Ausgabe
  int n;
  int fn;

  // Eingabeaufforderung und Eingabe
  printf("Gib eine Zahl n ein: ");
  scanf("%d", &n);

  // Berechnung der Fibonacci-Zahl fn
  fn = fibonacci(n);

  // Ausgabe der Fibonacci-Zahl fn
  printf("Die Fibonacci-Zahl fn ist: %d\n", fn);

  return 0;
}
