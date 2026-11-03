# Kravspecifikation för Temperaturövervakning
* **REQ-01: Enkel menystruktur (Ska-krav)**
  * *Vad som ska göras:* Alla funktioner ska finnas i huvudmenyn.
  * *Gräns:* Det får ta max 2 tryck/val för att komma till en funktion.

* **REQ-02: Varning vid hög temperatur (Ska-krav)**
  * *Vad som ska göras:* Programmet ska varna om det blir för varmt.
  * *Gräns:* Tillåtet intervall för varningsgränsen är 0–60 °C. Om den uppmätta temperaturen är högre än den inställda gränsen ska det stå "VARNING" på skärmen.

* **REQ-03: Hantering av fel (Ska-krav)**
  * *Vad som ska göras:* Programmet får inte krascha om man skriver fel saker.
  * *Gräns:* Om man skriver bokstäver eller felaktiga värden ska programmet visa ett felmeddelande och fråga igen, istället för att stängas av.

* **REQ-04: Snabb svarstid (Bör-krav)**
  * *Vad som ska göras:* Programmet ska svara snabbt när man matar in data.
  * *Gräns:* Det får ta max 1,0 sekund från det man trycker Enter till att svaret visas.