# Testfall för Temperaturlarm

Detta dokument listar testfall för att verifiera att koden uppfyller kraven.

### 1. Normalfall 1
* **ID:** TC-01
* **Indata:** 20
* **Förväntat resultat:** Status: NORMAL
* **Beskrivning:** Testar en normal rumstemperatur.

### 2. Normalfall 2
* **ID:** TC-02
* **Indata:** 30
* **Förväntat resultat:** Status: NORMAL
* **Beskrivning:** Testar en annan normal temperatur under varningsgränsen.

### 3. Gränsfall 1
* **ID:** TC-03
* **Indata:** 50
* **Förväntat resultat:** Status: NORMAL (eller gränsen för varning)
* **Beskrivning:** Testar exakt på varningsgränsen.

### 4. Gränsfall 2
* **ID:** TC-04
* **Indata:** 85
* **Förväntat resultat:** Status: VARNING (Högsta tillåtna värdet)
* **Beskrivning:** Testar maxgränsen för sensorn.

### 5. Värde utanför sensorintervallet
* **ID:** TC-05
* **Indata:** 90
* **Förväntat resultat:** Felmeddelande (utanför tillåtet intervall)
* **Beskrivning:** Testar värde över 85°C.

### 6. Felaktig textinmatning
* **ID:** TC-06
* **Indata:** "abc"
* **Förväntat resultat:** Ogiltig inmatning, programmet sätter inte temperaturen till 0.
* **Beskrivning:** Testar inmatning av bokstäver istället för heltal.

### 7. Giltig konfiguration av varningsgräns
- **ID:** TC-07
- **Indata:** Startgräns: 30, Temperatur: 35
- **Förväntat resultat:** Gränsen accepteras (30°C), och temperaturen 35°C ger Status: VARNING
- **Beskrivning:** Testar att användaren kan ange en giltig varningsgräns vid start inom intervallet 0–60°C.

### 8. Ogiltig konfiguration av varningsgräns
- **ID:** TC-08
- **Indata:** Startgräns: 75 (eller -5)
- **Förväntat resultat:** Felmeddelande visas, programmet kraschar inte utan uppmanar användaren att ange en ny giltig gräns.
- **Beskrivning:** Testar validering av varningsgränsen vid start (intervall 0–60°C).