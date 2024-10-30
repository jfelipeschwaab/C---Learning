#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um ano é bissexto
bool is_leap_year(int year) {
    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 == 0) return true;
    else return false;
}

// Função para adicionar dias a uma data específica
void add_days_to_date(int *mm, int *dd, int *yy, int days_left_to_add) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (days_left_to_add > 0) {
        int days_left_in_month = days_in_month[*mm] - *dd;

        // Verifica fevereiro em ano bissexto
        if (*mm == 2 && is_leap_year(*yy)) {
            days_left_in_month += 1;
        }

        if (days_left_to_add > days_left_in_month) {
            days_left_to_add -= (days_left_in_month + 1);
            *dd = 1;
            if (*mm == 12) {
                *mm = 1;
                *yy += 1;
            } else {
                *mm += 1;
            }
        } else {
            *dd += days_left_to_add;
            days_left_to_add = 0;
        }
    }
}

int main() {
    int mm, dd, yy, days_left_to_add;

    printf("Por favor, insira uma data entre os anos 1800 e 10000 no formato mm dd yy, e forneça o número de dias para adicionar à data:\n");
    scanf("%d %d %d %d", &mm, &dd, &yy, &days_left_to_add);

    add_days_to_date(&mm, &dd, &yy, days_left_to_add);

    printf("Nova data: %02d/%02d/%04d\n", mm, dd, yy);

    return 0;
}
