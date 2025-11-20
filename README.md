## Advertiser-klassen

Denna klass representerar ett företag som visar annonser på skärmen. Den innehåller:

- Företagsnamn och hur mycket de har betalat
- En lista med annonser och om de ska blinka
- En metod för att hämta nästa annons i turordning
- En metod för att lägga till annonser

Jag har kommenterat varje funktion för att förstå vad den gör. Detta hjälper mig att kunna förklara koden vid redovisningen.
----------------------------------------------------

## AdManager-klassen

Denna klass hanterar alla företag och väljer vilket som ska visas härnäst. Den använder en diskret fördelning för att ge större chans till företag som betalat mer. Jag har kommenterat varje funktion och förstår nu hur viktad slumpning fungerar i C++.

Jag kan förklara att:
- `addAdvertiser()` lägger till företag och uppdaterar sannolikhetsfördelningen.
- `getNextAdvertiser()` använder slumpgeneratorn för att välja ett företag baserat på betalning.
