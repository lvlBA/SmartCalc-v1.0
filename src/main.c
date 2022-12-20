#include "s21_smart.h"

int main() {
  char array[256] = {0};

  double result = 0;
  char *string = "sqrt(25)+   4+5+6 + sqrt(25)    ";
  s21_parser(string, &result);

  // for (int i = 0, j = 0; i < strlen(string); i++) {
  //   if ((string[i] >= 48 && string[i] <= 57) || string[i] == '.') {
  //     array[j] = string[i];
  //     j++;
  //   }
  //   if ((string[i] >= 48 && string[i] <= 57) && string[i + 1] != '.' &&
  //       (string[i + 1] < 48 || string[i + 1] > 57)) {
  //     array[j] = 58;
  //     j++;
  //   }
  // }
  // printf("\n");
  // for (int i = 0; i < strlen(array); i++) {
  //   printf("%c", array[i]);
  // }

  return 0;
}
