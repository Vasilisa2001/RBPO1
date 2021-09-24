#include "CreatePerson.h"

Person CreatePerson(const char* first_name, const char* second_name, const char* middle_name, unsigned int year) {
    Person p;
    p.first_name = (char*)malloc(sizeof(char) * strlen(first_name));
    strcpy(p.first_name, first_name);

    p.second_name = (char*)malloc(sizeof(char) * strlen(second_name));
    strcpy(p.second_name, second_name);

    p.middle_name = (char*)malloc(sizeof(char) * strlen(middle_name));
    strcpy(p.middle_name, middle_name);

    p.year = year;

    return p;
}
