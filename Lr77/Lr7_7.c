#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include <stdio.h>
int task1() {
    setlocale(LC_ALL, "RUS");
    char c;
    printf("Введите символы : ");
    scanf("%c", &c);
    switch (c)
    {
    case '1':
    case '2':
    case '4':
    case '3':
    case '5':
    case '6':
    case '7':
    case '9':
    case '8':
    case '0':
        printf("Введена цифра.\n");
        break;
    default:
        printf("Введена буква\n");
    }
    return 0;

}

int task2() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    char c;
    printf("Введите выражение: ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c) {
    case '+':
        printf("= %f\n", x + y);
        break;
    case '-':
        printf("= %f\n", x - y);
        break;
    case '*':
        printf("= %f\n", x * y);
        break;
    case '/':
        printf("= %f\n", x / y);
        break;
    default:
        printf("Ошибка: неизвестная операция\n");
        break;
    }

    return 0;

}

int task3() {
    setlocale(LC_ALL, "RUS");
    int month, year;
    int vis = 0; 
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        vis = 1;
    }
    switch (month) {
    case 1: // ??????
    case 3: // ????
    case 5: // ???
    case 7: // ????
    case 8: // ??????
    case 10: // ???????
    case 12: // ???????
        printf("В этом месяце 31 день.\n");
        break;

    case 4: // ??????
    case 6: // ????
    case 9: // ????????
    case 11: // ??????
        printf("В этом месяце 30 дней.\n");
        break;

    case 2: // ???????
        if (vis) {
            printf("В этом месяце 29 дней.\n");
        }
        else {
            printf("В этом месяце 28 дней.\n");
        }
        break;
    default:
        printf("Ошибка: введите число от 1 до 12.\n");
        break;
    }
    return 0;

}

int main() {
    task3();
    return 0;
}
