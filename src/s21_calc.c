#include "s21_smart.h"

void s21_calculation(lexeme **numbers, lexeme **operators) {
  lexeme operator= s21_top(operators);
  s21_pop(operators);
  lexeme first = {0};
  lexeme second = {0};
  if (operator.type> 8) {
    second = s21_top(numbers);
    s21_pop(numbers);
  } else {
    first = s21_top(numbers);
    s21_pop(numbers);
    second = s21_top(numbers);
    s21_pop(numbers);
  }
  lexeme result = {0};
  if (operator.type <= 8) {
    result = s21_calc(second.value, first.value, operator.type);
  } else {
    result = s21_calc_func(second.value, operator.type);
  }
  s21_push(numbers, result.value, result.type, result.priority);
}

lexeme s21_calc(double first, double second, int type) {
  lexeme result;
  result.priority = 0;
  result.type = DIG_LEXEME;
  if (type == MUL_LEXEME) {
    result.value = first * second;
  } else if (type == PLUS_LEXEME) {
    result.value = first + second;
  } else if (type == MINUS_LEXEME) {
    result.value = first - second;
  } else if (type == DIV_LEXEME) {
    result.value = first / second;
  } else if (type == POW_LEXEME) {
    result.value = pow(first, second);
  } else if (type == MOD_LEXEME) {
    result.value = fmod(first, second);
  }
  return result;
}

lexeme s21_calc_func(double first, int type) {
  lexeme result = {0};
  result.priority = 0;
  result.type = DIG_LEXEME;
  if (type == 11) {
    result.value = cos(first);
  } else if (type == 12) {
    result.value = sin(first);
  } else if (type == 13) {
    result.value = tan(first);
  } else if (type == 14) {
    result.value = acos(first);
  } else if (type == 15) {
    result.value = asin(first);
  } else if (type == 16) {
    result.value = atan(first);
  } else if (type == 17) {
    result.value = sqrt(first);
  } else if (type == 18) {
    result.value = log(first);
  } else if (type == 19) {
    result.value = log10(first);
  }
  return result;
}
