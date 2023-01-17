//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(fabs_test) {
  ck_assert_uint_eq(fabs(-141.21313), s21_fabs(-141.21313));
  ck_assert_uint_eq(fabs(141.21313), s21_fabs(141.21313));
  ck_assert_uint_eq(fabs(S21_NAN), s21_fabs(S21_NAN));
  ck_assert_uint_eq(fabs(-S21_NAN), s21_fabs(-S21_NAN));
  ck_assert_uint_eq(fabs(S21_INF), s21_fabs(S21_INF));
  ck_assert_uint_eq(fabs(-S21_INF), s21_fabs(-S21_INF));
}
END_TEST

Suite *suite_s21_fabs(void) {
  Suite *s8;
  TCase *tc8;
  s8 = suite_create("s21_fabs");
  tc8 = tcase_create("s21_test");
  tcase_add_test(tc8, fabs_test);
  suite_add_tcase(s8, tc8);
  return s8;
}
