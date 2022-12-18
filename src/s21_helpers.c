#include "s21_smart.h"

int s21_string_to_double(char *str, char **end, double *number) {
  int flag = 1;
  double num = 0;
  int dot = 0;
  size_t i = 0;
  if (s21_is_digit(str[i]) == 0) {
    if (str[i] == '.') {
      if (s21_is_digit(str[i + 1]) == 0) {
        flag = 0;
      }
    } else {
      flag = 0;
    }
  }
  if (flag == 1) {
    for (;; i++) {
      if (s21_is_digit(str[i]) == 0) {
        if (str[i] != '.') {
          break;
        }
      }
      if (str[i] == '.') {
        dot = 10;
      }
      if (dot == 0) {
        num = (num * 10) + (double)(str[i] - '0');
      } else if (str[i] != '.') {
        num += (double)(str[i] - '0') / dot;
        dot *= 10;
      }
    }
  }
  *end = (char *)&str[i];
  *number = num;
  return flag;
}

int s21_is_digit(char c) {
  int flag = 0;
  if (c >= '0' && c <= '9') {
    flag = 1;
  }
  return flag;
}

void s21_arithmetic(lexeme **operators, lexeme **numbers) { int tmp = 0; }