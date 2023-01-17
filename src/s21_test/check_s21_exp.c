//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(exp_test) {
  ck_assert_uint_eq(exp(-S21_INF), s21_exp(-S21_INF));
  ck_assert_uint_eq(exp(S21_NAN), s21_exp(S21_NAN));
  ck_assert_uint_eq(exp(-S21_NAN), s21_exp(-S21_NAN));
  ck_assert_uint_eq(exp(S21_INF), s21_exp(S21_INF));
  ck_assert_uint_eq(exp(-S21_INF), s21_exp(-S21_INF));
}
END_TEST

Suite *suite_s21_exp(void) {
  Suite *s7;
  TCase *tc7;
  s7 = suite_create("s21_exp");
  tc7 = tcase_create("s21_test");
  tcase_add_test(tc7, exp_test);
  suite_add_tcase(s7, tc7);
  return s7;
}
