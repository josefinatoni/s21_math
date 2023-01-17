//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(sin_test) {
  ck_assert_uint_eq(sin(-13.54), s21_sin(-13.54));
  ck_assert_uint_eq(sin(13.54), s21_sin(13.54));
  ck_assert_int_eq(sin(S21_NAN), s21_sin(S21_NAN));
  ck_assert_uint_eq(sin(-S21_NAN), s21_sin(-S21_NAN));
  ck_assert_uint_eq(sin(S21_INF), s21_sin(S21_INF));
  ck_assert_uint_eq(sin(-S21_INF), s21_sin(-S21_INF));
  ck_assert_uint_eq(sin(S21_M_PI), s21_sin(S21_M_PI));
  ck_assert_uint_eq(sin(-S21_M_PI), s21_sin(-S21_M_PI));
  ck_assert_uint_eq(sin(S21_M_E), s21_sin(S21_M_E));
  ck_assert_uint_eq(sin(-S21_M_E), s21_sin(-S21_M_E));
}
END_TEST

Suite *suite_s21_sin(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_sin");
  tc13 = tcase_create("s21_test");
  tcase_add_test(tc13, sin_test);
  suite_add_tcase(s13, tc13);
  return s13;
}
