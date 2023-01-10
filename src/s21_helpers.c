#include "s21_smart.h"

int s21_is_digit(char c) {
  int flag = 0;
  if (c >= '0' && c <= '9') {
    flag = 1;
  }
  return flag;
}

int s21_check_string(char *str) {
  int res = 1, cnt = 0, scob = 0;
  while (cnt != (int)strlen(str)) {
    if (str[cnt] == 'x' && cnt != 0 && cnt != (int)strlen(str)) {
      if (str[cnt - 1] == ')' || str[cnt + 1] == '(' ||
          (str[cnt - 1] <= '9' && str[cnt - 1] >= '0') ||
          (str[cnt + 1] <= '9' && str[cnt + 1] >= '0') || str[cnt + 1] == 's' ||
          str[cnt + 1] == 'c' || str[cnt + 1] == 't' || str[cnt + 1] == 'a' ||
          str[cnt + 1] == 'l' || str[cnt + 1] == 'm' || str[cnt + 1] == 'i' ||
          str[cnt + 1] == 'o' || str[cnt + 1] == 'q' || str[cnt + 1] == 'n') {
        res = 0;
      }
    }
    if (str[cnt] == 'x' && str[cnt + 1] == 'x') {
      res = 0;
    }
    if (str[cnt] == '(' && str[cnt + 1] == 'x' && str[cnt + 2] == ')' &&
        str[cnt + 3] == '(' && str[cnt + 4] == 'x' && str[cnt + 5] == ')') {
      res = 0;
    }

    if (str[cnt] == '.') {
      if (cnt == 0 || cnt == (int)strlen(str) - 1) {
        res = 0;
      } else {
        if ((str[cnt - 1] >= '9' && str[cnt - 1] <= '0') ||
            (str[cnt + 1] >= '9' && str[cnt + 1] <= '0')) {
          res = 0;
        }
      }
    } else if (str[cnt] == '+' || str[cnt] == '-' || str[cnt] == '*' ||
               str[cnt] == '/' || str[cnt] == '^') {
      if (cnt == 0) {
        if (str[cnt] != '-') {
          res = 0;
        } else if (str[cnt] == '-' && str[cnt + 1] <= '0' &&
                   str[cnt + 1] >= '9') {
          res = 0;
        } else if (cnt == (int)strlen(str) - 1) {
          res = 0;
        } else {
          if ((str[cnt - 1] != ')' && str[cnt - 1] > '9' &&
               str[cnt - 1] < '0') ||
              (str[cnt + 1] < '0' && str[cnt + 1] > '9') ||
              str[cnt + 1] == 'm' || str[cnt + 1] == '+' ||
              str[cnt + 1] == '-' || str[cnt + 1] == '*' ||
              str[cnt + 1] == '/' || str[cnt + 1] == '^') {
            res = 0;
          }
        }
      }
    } else if (str[cnt] == ')') {
      scob -= 1;
      if (scob == -1) {
        res = 0;
      }
      if (cnt != 0) {
        if (str[cnt - 1] == '+' || str[cnt - 1] == '/' || str[cnt - 1] == '*' ||
            str[cnt - 1] == '-' || str[cnt - 1] == '^' || str[cnt - 1] == '(') {
          res = 0;
        }
        if ((str[cnt + 1] == 's' && str[cnt + 2] == 'i' &&
             str[cnt + 3] == 'n') ||
            (str[cnt + 1] == 'c' && str[cnt + 2] == 'o' &&
             str[cnt + 3] == 's') ||
            (str[cnt + 1] == 't' && str[cnt + 2] == 'a' &&
             str[cnt + 3] == 'n') ||
            (str[cnt + 1] == 'a' && str[cnt + 2] == 's' &&
             str[cnt + 3] == 'i' && str[cnt + 4] == 'n') ||
            (str[cnt + 1] == 'a' && str[cnt + 2] == 'c' &&
             str[cnt + 3] == 'o' && str[cnt + 4] == 's') ||
            (str[cnt + 1] == 'l' && str[cnt + 2] == 'n') ||
            (str[cnt + 1] == 'l' && str[cnt + 2] == 'o' &&
             str[cnt + 3] == 'g') ||
            (str[cnt + 1] == 'a' && str[cnt + 2] == 't' &&
             str[cnt + 3] == 'a' && str[cnt + 4] == 'n') ||
            (str[cnt + 1] == 's' && str[cnt + 2] == 'q' &&
             str[cnt + 3] == 'r' && str[cnt + 4] == 't') ||
            (str[cnt + 1] == 'm' && str[cnt + 2] == 'o' &&
             str[cnt + 3] == 'd')) {
          res = 0;
        }
      } else {
        res = 0;
      }
    } else if (str[cnt] == '(') {
      scob += 1;
      if (cnt != (int)strlen(str) - 1) {
        if (str[cnt + 1] == '+' || str[cnt + 1] == '/' || str[cnt + 1] == '*' ||
            str[cnt + 1] == '^' || str[cnt + 1] == ')') {
          res = 0;
        }
        if (str[cnt - 1] <= '9' && str[cnt - 1] >= '0') {
          res = 0;
        }
      } else {
        res = 0;
      }
    } else if ((str[cnt] == 's' && str[cnt + 1] == 'i' &&
                str[cnt + 2] == 'n') ||
               (str[cnt] == 'c' && str[cnt + 1] == 'o' &&
                str[cnt + 2] == 's') ||
               (str[cnt] == 't' && str[cnt + 1] == 'a' &&
                str[cnt + 2] == 'n') ||
               (str[cnt] == 'a' && str[cnt + 1] == 's' && str[cnt + 2] == 'i' &&
                str[cnt + 3] == 'n') ||
               (str[cnt] == 'a' && str[cnt + 1] == 'c' && str[cnt + 2] == 'o' &&
                str[cnt + 3] == 's') ||
               (str[cnt] == 'l' && str[cnt + 1] == 'n') ||
               (str[cnt] == 'l' && str[cnt + 1] == 'o' &&
                str[cnt + 2] == 'g') ||
               (str[cnt] == 'a' && str[cnt + 1] == 't' && str[cnt + 2] == 'a' &&
                str[cnt + 3] == 'n') ||
               (str[cnt] == 's' && str[cnt + 1] == 'q' && str[cnt + 2] == 'r' &&
                str[cnt + 3] == 't')) {
      if ((cnt != 0 && str[cnt - 1] == ')') ||
          (str[cnt - 1] <= '9' && str[cnt - 1] >= '0')) {
        res = 0;
      }
    } else if (str[cnt] == 'm' && str[cnt + 1] == 'o' && str[cnt + 2] == 'd') {
      if ((cnt == 0 && str[cnt] == 'm') ||
          (str[cnt] == 'd' && cnt == (int)strlen(str) - 1)) {
        res = 0;
      } else if (cnt != 0 && str[cnt] == 'm' &&
                 (str[cnt - 1] == '(' || str[cnt - 1] == '+' ||
                  str[cnt - 1] == '/' || str[cnt - 1] == '*' ||
                  str[cnt - 1] == '-' || str[cnt - 1] == '^')) {
        res = 0;
      } else if (cnt != (int)strlen(str) - 1 && str[cnt] == 'd' &&
                 (str[cnt + 1] == '+' || str[cnt + 1] == '/' ||
                  str[cnt + 1] == '*' || str[cnt + 1] == '-' ||
                  str[cnt + 1] == '^')) {
        res = 0;
      }
    }
    cnt++;
  }
  if (scob != 0) {
    res = 0;
  }
  return res;
}