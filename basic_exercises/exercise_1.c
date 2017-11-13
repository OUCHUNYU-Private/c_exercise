//
// Created by Chunyu Ou on 11/12/17.
//

#include <stdio.h>
#include "exercise_1.h"


static void print_full_name(char *first, char *last) {
    printf("Name     : %s %s\n", first, last);
}

static void print_dob(char *month_str, int day, int year) {
    printf("DOB      : %s %d, %d\n", month_str, day, year);
}

static void print_mobile_num(char *mobile_num) {
    printf("Mobile   : %s\n", mobile_num);
}

void exercise_1() {
    print_full_name("Chunyu", "Ou");
    print_dob("Feb", 6, 1992);
    print_mobile_num("415-4819735");
}

