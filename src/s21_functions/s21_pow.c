//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_pow(double base, double exp) {
  long double res = 0.0;
  if (exp == 0) {
    res = 1;
  } else if (base == 1) {
    res = 1;
  } else if ((base == 1 || base == -1) && (exp == S21_INF || exp == -S21_INF)) {
    res = 1;
  } else if (base == -S21_INF && (exp == -S21_INF)) {
    res = 0;
  } else if ((base < 0) && (exp == S21_INF)) {
    res = S21_INF;
    if (base > -1) {
      res = 0;
    }
  } else if ((base < 0) && (exp == -S21_INF)) {
    res = 0;
    if (base > -1) {
      res = S21_INF;
    }
  } else if (base < 0 && (exp - (int)exp != 0)) {
    res = S21_NAN;
    if (base - (int)base != 0) {
      res = S21_NAN;
    }
  } else if (base < 0) {
    base = -base;
    res = s21_exp(exp * s21_log(base));
    if (s21_fmod(exp, 2) != 0) {
      res = -res;
    }
  } else {
    res = s21_exp(exp * s21_log(base));
  }
  return res;
}
