//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(fmod_test) {
  ck_assert_uint_eq(fmod(0, 2.5), s21_fmod(0, 2.5));
  ck_assert_uint_eq(fmod(2.5, 2.5), s21_fmod(2.5, 2.5));
  ck_assert_int_eq(fmod(9, 0), s21_fmod(9, 0));
  ck_assert_uint_eq(fmod(-6, -S21_INF), s21_fmod(-6, -S21_INF));
  ck_assert_uint_eq(fmod(S21_INF, S21_INF), s21_fmod(S21_INF, S21_INF));
  ck_assert_uint_eq(fmod(S21_INF, S21_INF), s21_fmod(S21_INF, S21_INF));
}
END_TEST

Suite *suite_s21_fmod(void) {
  Suite *s10;
  TCase *tc10;
  s10 = suite_create("s21_fmod");
  tc10 = tcase_create("s21_test");
  tcase_add_test(tc10, fmod_test);
  suite_add_tcase(s10, tc10);
  return s10;
}
