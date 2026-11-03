#include <stdio.h>
#include "temperature.h"

bool read_temperature(int *temperature) {
    int check = scanf("%d", temperature);
    
    if (check != 1) {
        while (getchar() != '\n');
        return false;
    }
    
    return true;
}

bool is_valid_temperature(int temperature) {
    if (temperature >= -40 && temperature <= 85) {
        return true;
    } else {
        return false;
    }
}

const char *classify_temperature(int temperature, int varning_limit) {
    if (temperature > varning_limit) {
        return "VARNING";
    } else {
        return "NORMAL";
    }
}