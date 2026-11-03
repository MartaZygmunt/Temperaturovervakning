# Temperaturövervakning (Temperaturlarm)

## Syfte
Syftet med detta projekt är att skapa ett modulärt program i C som övervakar temperaturer, validerar inmatning för att förhindra krascher och varna användaren om temperaturen överskrider tillåtna gränser.

## Filstruktur
```
├── src/
│   ├── main.c           # Huvudprogram och menyhantering
│   ├── temperature.c    # Logik för inläsning, validering och klassificering
│   └── temperature.h    # Funktionsdeklarationer
├── .gitignore           # Git-exkluderingsfiler
├── Makefile             # Regler för kompilering
├── requirements.md      # Kravspecifikation
├── tests.md             # Testfall för verifiering
├── traceability.md      # Spårbarhetsmatrisgit
├── retrospective.md     # Projektreflektion
└── README.md            # Huvuddokumentation
```

## Byggkommando
Projektet kan byggas på två sätt beroende på om du har `make` installerat:

### Alternativ 1: Med Make (Rekommenderas)
make

### Alternativ 2: Direkt med GCC (om Make saknas)
gcc -Wall -Wextra -std=c11 -Isrc src/main.c src/temperature.c -o temperature_alarm

## Körkommando
För att starta det färdiga programmet:

temperature_alarm.exe

## Användningsexempel

Programmet inleds med att användaren anger en anpassad varningsgräns (0–60 °C), varefter menyn startar.

### Exempel 1: Konfiguration och normal temperatur

Ange varningsgrans (0-60 C): 45

=== TEMPERATURLARM ===
1. Mat in temperatur
2. Avsluta
Val: 1
Ange temperatur: 25
Temperatur: 25 C - Status: NORMAL

### Exempel 2: Varning när temperaturen överstiger den satta gränsen

Ange varningsgrans (0-60 C): 45

=== TEMPERATURLARM ===
1. Mat in temperatur
2. Avsluta
Val: 1
Ange temperatur: 50
Temperatur: 50 C - Status: VARNING