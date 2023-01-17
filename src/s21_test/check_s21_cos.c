//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(cos_test) {
  ck_assert_uint_eq(cos(13.54), s21_cos(13.54));
  ck_assert_uint_eq(cos(S21_NAN), s21_cos(S21_NAN));
  ck_assert_uint_eq(cos(-S21_NAN), s21_cos(-S21_NAN));
  ck_assert_uint_eq(cos(S21_INF), s21_cos(S21_INF));
  ck_assert_uint_eq(cos(-S21_INF), s21_cos(-S21_INF));
}
END_TEST

Suite *suite_s21_cos(void) {
  Suite *s6;
  TCase *tc6;
  s6 = suite_create("s21_cos");
  tc6 = tcase_create("s21_test");
  tcase_add_test(tc6, cos_test);
  suite_add_tcase(s6, tc6);
  return s6;
}
