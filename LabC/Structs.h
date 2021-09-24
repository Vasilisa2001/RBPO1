#pragma once

typedef struct Person Person;
typedef enum SortTypes SortTypes;

struct Person {
    char* first_name;
    char* second_name;
    char* middle_name;
    unsigned int year;
};

enum SortTypes {
    ASC = 0,
    DESC,
};