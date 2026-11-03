#include <stdio.h>
#include "temperature.h"

int main(void) {
    int running = 1;
    int temp = 0;

    int warning_limit = 0;
    while (1) {
        printf("Ange varningsgrans (0-60 C): ");
        if (scanf("%d", &warning_limit) != 1) {
            while (getchar() != '\n');
            printf("Fel: Ogiltig inmatning. Ange ett heltal.\n");
            continue;
        }
        while (getchar() != '\n');

        if (warning_limit < 0 || warning_limit > 60) {
            printf("Fel: Varningsgransen maste vara mellan 0 och 60 C.\n");
            continue;
        }
        break;
    }

    while (running) {
        printf("\n=== TEMPERATURLARM ===\n");
        printf("1. Mat in temperatur\n");
        printf("2. Avsluta\n");
        printf("Val: ");

        int choice = 0;
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Felaktig inmatning! Vanligen anget ett nummer.\n");
            continue;
        }

        if (choice == 1) {
            printf("Ange temperatur: ");
            
            if (!read_temperature(&temp)) {
                printf("Fel: Ogiltig inmatning (bokstäver oräknade)! Försök igen.\n");
                continue;
            }

            if (!is_valid_temperature(temp)) {
                printf("Fel: Temperaturen ar utanfor tillatet intervall (-40 till 85 C).\n");
                continue;
            }

            const char *status = classify_temperature(temp, warning_limit);
            printf("Temperatur: %d C - Status: %s\n", temp, status);

        } else if (choice == 2) {
            printf("Avslutar programmet...\n");
            running = 0;
        } else {
            printf("Ogiltigt val, tryck 1 eller 2.\n");
        }
    }

    return 0;
}