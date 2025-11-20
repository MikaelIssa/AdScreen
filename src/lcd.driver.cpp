#include "lcd_driver.hpp"
#include <iostream>      // För att simulera LCD-utskrift
#include <thread>        // För att kunna pausa
#include <chrono>        // För att mäta tid

// Konstruktor – initierar LCD
hd44780::hd44780() {
    init_lcd();  // Här skulle vi initiera pinnar om vi körde på riktig hårdvara
}

// Skriver text till "LCD" (simulerat med terminalutskrift)
void hd44780::write_text(const char *text) {
    std::cout << "[LCD] " << text << std::endl;
}

// Rensar skärmen (simulerat)
void hd44780::clear() {
    std::cout << "[LCD CLEARED]" << std::endl;
}

// Blinkar en text 3 gånger (på/av)
void hd44780::blink_text(const char *text) {
    for (int i = 0; i < 6; ++i) {
        clear();
        if (i % 2 == 0) {
            write_text(text);  // Visa text varannan gång
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500));  // Vänta 0.5 sek
    }
}

// Initierar LCD (simulerat)
void hd44780::init_lcd() {
    std::cout << "[LCD INIT]" << std::endl;
}
