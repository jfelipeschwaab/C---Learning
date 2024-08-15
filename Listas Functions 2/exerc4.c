#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct data
{
    int day;
    int month;
    int year;
}Data;

Data AdicionarDias(Data data, int daysToAdd){
    data.day += daysToAdd;
    if (data.day > 30 && (data.month == 4 || data.month == 6 || data.month == 9 || data.month == 11)){
        data.month += 1;
        data.day = data.day % 30;
    }
    else if(data.month == 2 && data.day >28){
        data.month +=1;
        data.day = data.day % 28;
    }
    else{
        data.month +=1;
        data.day = data.day % 31;
    }

    
    if(data.month >12){
        data.year += data.month / 12;
        data.month = data.month % 12;
        data.day = data.day % 31;
    }

    return data;

}

int main(){
    Data data;
    data.month = 2;
    data.day = 23;
    data.year = 2024;
    int daysToAdd = 0;
    printf("A data: %d/%d/%d, quer adicionar quantos dias?\n", data.day,data.month,data.year);
    scanf("%d", &daysToAdd);

    Data novaData = AdicionarDias(data, daysToAdd);

    printf("\nNova data: %d/%d/%d",novaData.day,novaData.month,novaData.year);
}



