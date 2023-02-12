#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int main() {
  int a[N];
  
  // Generate the 100000 integer numbers
  srand(time(0));
  for (int i = 0; i < N; i++) {
    a[i] = rand();
  }
  
  // Write the numbers to a text file
  FILE *f = fopen("numbers.txt", "w");
  if (f == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  for (int i = 0; i < N; i++) {
    fprintf(f, "%d\n", a[i]);
  }
  fclose(f);
  
  // Read the numbers from the text file
  f = fopen("numbers.txt", "r");
  if (f == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  for (int i = 0; i < N; i++) {
    fscanf(f, "%d", &a[i]);
  }
  fclose(f);
  
  return 0;
}