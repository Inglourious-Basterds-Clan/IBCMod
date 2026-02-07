## Odradzanie

Szablon odradzania z możliwością dostosowywania na żywo poprzez ustawienia CBA.

### Włączenie w misji

Poniższa konfiguracja musi zostać dodana do pliku konfiguracyjnego misji, aby system działał poprawnie:

```cpp
respawn = 3;
respawnDelay = 1e10;
respawnOnStart = -1;
respawnTemplates[] = {"ibc_respawn_default", "Counter"};
```

## Zmiana opóźnienia odradzania

Możesz zmienić opóźnienie odradzania w dowolnym momencie trwania misji. Jeśli ktoś już czekał na odrodzenie, jego licznik zostanie odpowiednio dostosowany, aby uwzględnić czas już spędzony na oczekiwaniu.

## Wyłączanie odradzania

Odradzanie można dowolnie włączać i wyłączać. Gdy zostanie wyłączone, a jacyś gracze czekali, czas ich oczekiwania zostaje zapisany i w przypadku ponownego włączenia odradzania licznik wznawia od miejsca, w którym się zatrzymał (obsługiwana jest również zmiana opóźnienia w międzyczasie).

## Wymuszenie odrodzenia

Zawsze możesz wymusić odrodzenie za pomocą zdarzenia serwerowego/lokalnego "ibc_respawn_force" (w zależności od tego, kogo chcesz odrodzić — wszystkich lub tylko wybranych graczy).

### Autorzy

- [3Mydlo3](http://github.com/3Mydlo3)
