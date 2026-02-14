# Breaching

Moduł dodający ładunki wybuchowe do niszczenia zablokowanych drzwi i ścian z minimalnym uszkodzeniem otoczenia. Dostępny w kategorii ładunków wybuchowych w ACE Arsenal. Wymaga zewnętrznego detonatora. Sprawdza się także do neutralizacji IED-ów. Dodaje także możliwość wyważania drzwi strzałami.

## Wyważanie drzwi strzałami (Gun Breaching)
Dodaje możliwość wyważania zamkniętych drzwi poprzez ostrzelanie ich odpowiednio skonfigurowaną amunicją.
- Konfiguracja dostępna jest w ustawieniach dodatku; należy podawać klasy AMMO, a nie magazynki.
- Przykład klas amunicji:
```cpp
'B_12Gauge_Slug_NoCartridge', 'B_12Gauge_Pellets_Submunition', 'rhs_ammo_12g_slug', 'rhs_ammo_12g_00buckshot'
```
- Klasę amunicji można znaleźć w ACE Arsenal, w lewym górnym rogu po wybraniu docelowego magazynka. Wiele magazynków używa tej samej amunicji.

### Funkcje
- Amunicja do wyważania — amunicja, która otwiera każde drzwi jednym strzałem. Wymaga wskazania konkretnej klasy amunicji. Działa w odległości do 10 m.
- Dodatkowa amunicja — amunicja, która otwiera drzwi mniej skutecznie; szansa na wyważenie jest konfigurowalna w ustawieniach addonów. Ustawienie wykorzystuje dziedziczenie klas, co ułatwia konfigurację. Domyślnie działa na pewno dla: rhs 556x39, rhs 556x45, rhs 762x39. Działa w odległości do 5 m.

### Źródła
- [Synixe Contractors Mod](https://github.com/SynixeContractors/Mod/tree/main/addons/breaching)
- [Breaching Charge](https://github.com/ampersand38/Breaching-Charge)

### Autorzy

- Breaching Charges: [Ampersand](https://github.com/ampersand38), [MikeMF](https://github.com/mike-mf), [Jonpas](https://github.com/jonpas)
- Gun Breaching: [kolmipilot](https://github.com/kolmipilot)
