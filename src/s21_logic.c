#include "s21_smart.h"

void s21_logic(lexeme **numbers, lexeme **operators, lexeme tmp, double x) {
  lexeme topStack = {0};
  if (*operators != NULL) {
    topStack = s21_top(operators);
  } else {
    topStack.priority = -1;
  }
  if (tmp.type == X_LEXEME) {
    s21_push(numbers, x, DIG_LEXEME, 1);
  } else if (tmp.type == LEFTScobe_LEXEME) {
    s21_push(operators, 0, LEFTScobe_LEXEME, -1);
  } else if (tmp.priority > topStack.priority &&
             tmp.type != RIGHTScobe_LEXEME) {
    s21_push(operators, 0, tmp.type, tmp.priority);
  } else if (tmp.priority <= topStack.priority &&
             tmp.type != RIGHTScobe_LEXEME && tmp.type != LEFTScobe_LEXEME) {
    s21_calculation(numbers, operators);
    s21_push(operators, tmp.value, tmp.type, tmp.priority);
  } else if (tmp.type == RIGHTScobe_LEXEME) {
    while (operators && s21_next_sym(operators) != LEFTScobe_LEXEME) {
      s21_calculation(numbers, operators);
    }
    s21_pop(operators);
  }
}
