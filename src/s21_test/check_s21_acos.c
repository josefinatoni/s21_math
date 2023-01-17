//
// Created by Killed Hizdahr on 11.01.2023.
//
#include "cases.h"

START_TEST(acos_test) {
  ck_assert_uint_eq(acos(1), s21_acos(1));
  ck_assert_uint_eq(acos(-1), s21_acos(-1));
  ck_assert_uint_eq(acos(0.5), s21_acos(0.5));
  ck_assert_uint_eq(acos(-0.5), s21_acos(-0.5));
  ck_assert_int_ne(acos(-0.5), s21_acos(-1.5));
}
END_TEST

Suite *suite_s21_acos(void) {
  Suite *s2;
  TCase *tc2;
  s2 = suite_create("s21_acos");
  tc2 = tcase_create("s21_test");
  tcase_add_test(tc2, acos_test);
  suite_add_tcase(s2, tc2);
  return s2;
}
