#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <stdbool.h>

bool read_temperature(int *temperature);
bool is_valid_temperature(int temperature);
const char *classify_temperature(int temperature, int varning_limit);

#endif