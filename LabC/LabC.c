#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "Structs.h"
#include "CompareString.h"
#include "Sort.h"
#include "CreatePerson.h"
#include "GetPersons.h"

void PrintPerson(Person p) {
    printf("|%23s|%22s|%23s|%16d|\n", p.second_name, p.first_name, p.middle_name, p.year);
}

void PrintAllPerson(Person* p, int count) {
    printf(" _______________________________________________________________________________________\n");
    printf("|                       |                      |                       |                |\n");
    printf("|      Second name      |      First name      |      Middle name      |      Year      |\n");
    printf("|_______________________|______________________|_______________________|________________|\n");
    for (int i = 0; i < count; i++) {
        PrintPerson(p[i]);
    }
    printf("|_______________________|______________________|_______________________|________________|\n");
}


int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");
    if (argc == 1) {
        printf("Введите параметры!");
        return 0;
    }
    int count = 0;

    Person* p = GetPersons(argc, argv, &count);
    int type_sort = 0;
    printf("1 - ASC, 2 - DESC: ");  scanf("%d", &type_sort);
    
    if (type_sort == 1) {
        Sort(p, count, ASC);
    }
    else if (type_sort == 2){
        Sort(p, count, DESC);
    }
    else {
        printf("Введите либо 1 либо 2.");
        return 0;
    }

    PrintAllPerson(p, count);


    getchar();

    return 0;

}

