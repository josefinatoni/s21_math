//
// Created by Killed Hizdahr on 03.01.2023.
//
#include "../s21_math.h"

long double s21_cos(double x) {
  double r, s, numerator, denominator = 1, ratio = 1;
  int n = 1;
  r = s21_fmod(x, 2 * S21_M_PI);
  s = 1;
  numerator = 1;
  do {
    numerator *= (-1) * r * r;
    denominator *= (2 * n - 1) * 2 * n;
    ratio = numerator / denominator;
    s += ratio;
    n++;
  } while (s21_fabs(ratio) > S21_EPS10);
  return s;
}
