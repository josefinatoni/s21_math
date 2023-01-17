//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(sqrt_test) {
  ck_assert_uint_eq(sqrt(0.0), s21_sqrt(0.0));
  ck_assert_uint_eq(sqrt(1.0), s21_sqrt(1.0));
  ck_assert_int_eq(sqrt(-123), s21_sqrt(-123));
  ck_assert_int_eq(sqrt(S21_NAN), s21_sqrt(S21_NAN));
  ck_assert_uint_eq(sqrt(-S21_NAN), s21_sqrt(-S21_NAN));
  ck_assert_uint_eq(sqrt(S21_INF), s21_sqrt(S21_INF));
  ck_assert_uint_eq(sqrt(-S21_INF), s21_sqrt(-S21_INF));
  ck_assert_uint_eq(sqrt(S21_M_PI), s21_sqrt(S21_M_PI));
  ck_assert_uint_eq(sqrt(-S21_M_PI), s21_sqrt(-S21_M_PI));
  ck_assert_uint_eq(sqrt(S21_M_E), s21_sqrt(S21_M_E));
  ck_assert_uint_eq(sqrt(-S21_M_E), s21_sqrt(-S21_M_E));
}
END_TEST

Suite *suite_s21_sqrt(void) {
  Suite *s14;
  TCase *tc14;
  s14 = suite_create("s21_sqrt");
  tc14 = tcase_create("s21_test");
  tcase_add_test(tc14, sqrt_test);
  suite_add_tcase(s14, tc14);
  return s14;
}
