#ifndef LCD_DRIVER_HPP
#define LCD_DRIVER_HPP

#include <stdint.h>

// Klass som styr LCD-skärmen
class hd44780 {
public:
    hd44780();                        // Konstruktor – initierar LCD och pinnar
    void write_text(const char *text); // Skriver text på skärmen
    void clear();                      // Rensar skärmen
    void blink_text(const char *text); // Blinkar en text

private:
    void init_lcd();                  // Initierar LCD (kallas i konstruktorn)
};

#endif
