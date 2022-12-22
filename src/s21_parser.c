#include "s21_smart.h"

double s21_smart_calc(char *string, double x) {
  lexeme *numbers = NULL;
  lexeme *operators = NULL;
  double value = 0;
  char *end = NULL;
  int i = 0;
  if (string[0] == '-' || string[0] == '+') {
    s21_push(&numbers, 0, DIG_LEXEME, 0);
  }
  while (i < (int)strlen(string)) {
    if (string[i] == ' ') {
      i++;
    } else if (s21_string_to_double(&string[i], &end, &value)) {
      i += end - &string[i];
      s21_push(&numbers, value, DIG_LEXEME, 0);
    } else {
      lexeme tmp = s21_parser(&string[i], &end);
      i += end - &string[i];
      if (i > 1 && *(string + i - 2) == '(' &&
          (tmp.type == MINUS_LEXEME || tmp.type == PLUS_LEXEME)) {
        s21_push(&numbers, 0, DIG_LEXEME, 0);
      }
      s21_logic(&numbers, &operators, tmp, x);
    }
  }
  while (numbers != NULL && operators != NULL) {
    s21_calculation(&numbers, &operators);
  }

  double res = (*numbers).value;
  free(numbers);
  free(operators);
  return res;
}

lexeme s21_parser(char *lexem, char **end) {
  lexeme operators;
  int i = 0;
  if (lexem[i] == '+') {
    operators.type = PLUS_LEXEME;
    operators.priority = 1;
    operators.value = 0;
    i++;
  } else if (lexem[i] == '-') {
    operators.type = MINUS_LEXEME;
    operators.priority = 1;
    operators.value = 0;
    i++;
  } else if (lexem[i] == '*') {
    operators.type = MUL_LEXEME;
    operators.priority = 2;
    operators.value = 0;
    i++;
  } else if (lexem[i] == '/') {
    operators.type = DIV_LEXEME;
    operators.priority = 2;
    operators.value = 0;
    i++;
  } else if (lexem[i] == '^') {
    operators.type = POW_LEXEME;
    operators.priority = 3;
    operators.value = 0;
    i++;
  } else if (lexem[i] == 'm' && lexem[i + 1] == 'o' && lexem[i + 2] == 'd') {
    operators.type = MOD_LEXEME;
    operators.priority = 2;
    operators.value = 0;
    i += 3;
  } else if (lexem[i] == 'x') {
    operators.type = X_LEXEME;
    operators.priority = 0;
    operators.value = 0;
    i++;
  } else if (lexem[i] == '(') {
    operators.type = LEFTScobe_LEXEME;
    operators.priority = -1;
    operators.value = 0;
    i++;
  } else if (lexem[i] == ')') {
    operators.type = RIGHTScobe_LEXEME;
    operators.priority = -1;
    operators.value = 0;
    i++;
  } else if (lexem[i] == 'c' && lexem[i + 1] == 'o' && lexem[i + 2] == 's') {
    operators.type = COS_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 3;
  } else if (lexem[i] == 's' && lexem[i + 1] == 'i' && lexem[i + 2] == 'n') {
    operators.type = SIN_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 3;
  } else if (lexem[i] == 't' && lexem[i + 1] == 'a' && lexem[i + 2] == 'n') {
    operators.type = TAN_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 3;
  } else if (lexem[i] == 'a' && lexem[i + 1] == 'c' && lexem[i + 2] == 'o' &&
             lexem[i + 3] == 's') {
    operators.type = ACOS_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 4;
  } else if (lexem[i] == 'a' && lexem[i + 1] == 's' && lexem[i + 2] == 'i' &&
             lexem[i + 3] == 'n') {
    operators.type = ASIN_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 4;
  } else if (lexem[i] == 'a' && lexem[i + 1] == 't' && lexem[i + 2] == 'a' &&
             lexem[i + 3] == 'n') {
    operators.type = ATAN_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 4;
  } else if (lexem[i] == 's' && lexem[i + 1] == 'q' && lexem[i + 2] == 'r' &&
             lexem[i + 3] == 't') {
    operators.type = SQRT_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 4;
  } else if (lexem[i] == 'l' && lexem[i + 1] == 'o' && lexem[i + 2] == 'g') {
    operators.type = LOG_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 3;
  } else if (lexem[i] == 'l' && lexem[i + 1] == 'n') {
    operators.type = LN_LEXEME;
    operators.priority = 5;
    operators.value = 0;
    i += 2;
  }
  *end = (char *)&lexem[i];
  return operators;
}
