#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Estrutura para a corrida
typedef struct {
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[50];
    char firstPlaceRaceCarColor[20];
} Race;

// Estrutura para o carro de corrida
typedef struct {
    char driverName[50];
    char raceCarColor[20];
    int totalLapTime;
} RaceCar;

// Funções de impressão
void printIntro() {
    printf("Bem-vindos ao nosso grande evento de corrida digital!\n");
    printf("Espero que todos tenham seus lanches, pois estamos prestes a começar!\n\n");
}

void printCountDown() {
    printf("Pilotos prontos! Em...\n");
    for (int i = 5; i > 0; i--) {
        printf("%d\n", i);
    }
    printf("Corram!\n\n");
}

void printFirstPlaceAfterLap(Race race) {
    printf("Após a volta número %d\n", race.currentLap);
    printf("Primeiro Lugar: %s no carro de corrida %s!\n\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
}

void printCongratulation(Race race) {
    printf("Parabéns a %s no carro de corrida %s pela performance incrível.\n", race.firstPlaceDriverName, race.firstPlaceRaceCarColor);
    printf("Foi uma grande corrida, e todos tenham uma boa noite!\n");
}

// Funções de lógica
int calculateTimeToCompleteLap() {
    int speed = (rand() % 3) + 1;
    int acceleration = (rand() % 3) + 1;
    int nerves = (rand() % 3) + 1;
    return speed + acceleration + nerves;
}

void updateRaceCar(RaceCar *raceCar) {
    raceCar->totalLapTime += calculateTimeToCompleteLap();
}

void updateFirstPlace(Race *race, RaceCar *raceCar1, RaceCar *raceCar2) {
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime) {
        strcpy(race->firstPlaceDriverName, raceCar1->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar1->raceCarColor);
    } else {
        strcpy(race->firstPlaceDriverName, raceCar2->driverName);
        strcpy(race->firstPlaceRaceCarColor, raceCar2->raceCarColor);
    }
}

// Função principal da corrida
void startRace(RaceCar *raceCar1, RaceCar *raceCar2) {
    Race race = {5, 1, "", ""};

    for (race.currentLap = 1; race.currentLap <= race.numberOfLaps; race.currentLap++) {
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);

        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
    }

    printCongratulation(race);
}

int main() {
    srand(time(0));

    RaceCar raceCar1 = {"Carlos", "Azul", 0};
    RaceCar raceCar2 = {"Ana", "Vermelho", 0};

    printIntro();
    printCountDown();
    startRace(&raceCar1, &raceCar2);

    return 0;
}
