CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = temperature_alarm
SRCS = src/main.c src/temperature.c
OBJS = main.o temperature.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: src/main.c src/temperature.h
	$(CC) $(CFLAGS) -c src/main.c -o main.o

temperature.o: src/temperature.c src/temperature.h
	$(CC) $(CFLAGS) -c src/temperature.c -o temperature.o

# Använd 'del /f /q' istället för 'rm -f' för Windows
clean:
	del /f /q $(OBJS) $(TARGET).exe

# Valfri genväg för att bygga och köra direkt
run: all
	.\$(TARGET).exe

.PHONY: all clean run