//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(atan_test) {
  ck_assert_uint_eq(atan(3.14), s21_atan(3.14));
  ck_assert_uint_eq(atan(0.5), s21_atan(0.5));
  ck_assert_uint_eq(atan(1), s21_atan(1));
  ck_assert_uint_eq(atan(-1), s21_atan(-1));
  ck_assert_uint_eq(atan(S21_NAN), s21_atan(S21_NAN));
  ck_assert_uint_eq(atan(-S21_NAN), s21_atan(-S21_NAN));
  ck_assert_uint_eq(atan(S21_INF), s21_atan(S21_INF));
  ck_assert_uint_eq(atan(-S21_INF), s21_atan(-S21_INF));
}
END_TEST

Suite *suite_s21_atan(void) {
  Suite *s4;
  TCase *tc4;
  s4 = suite_create("s21_atan");
  tc4 = tcase_create("s21_test");
  tcase_add_test(tc4, atan_test);
  suite_add_tcase(s4, tc4);
  return s4;
}
