//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(tan_test) {
  ck_assert_int_eq(tan(-1.12), s21_tan(-1.12));
  ck_assert_uint_eq(tan(1.12), s21_tan(1.12));
  ck_assert_uint_eq(tan(0), s21_tan(0));
  ck_assert_int_eq(tan(S21_INF), s21_tan(S21_INF));
  ck_assert_uint_ne(tan(S21_MAX_LONG_DOUBLE), s21_tan(S21_MAX_LONG_DOUBLE));
}
END_TEST

Suite *suite_s21_tan(void) {
  Suite *s15;
  TCase *tc15;
  s15 = suite_create("s21_tan");
  tc15 = tcase_create("s21_test");
  tcase_add_test(tc15, tan_test);
  suite_add_tcase(s15, tc15);
  return s15;
}
