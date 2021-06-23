#pragma once 
#include <Arduino.h>

#define IODIRA      0x00    // Setzt Input/Output Port A Bitweise Verbindung zum GPIOA/OLATA
#define IODIRB      0x01    // Setzt Input/Output Port B Bitweise Verbindung zum GPIOB/OLATB
#define IPOLA       0x02    // Wenn GPIO als Input (IDIRA) wird die Logik invertiert.
#define IPOLB       0x03    // Wenn GPIO als Input (IDIRB) wird die Logik invertiert.
#define GPINTENA    0x04    // Port A Interrupt on Change ON/OFF siehe auch DEFVAL und IOCON
#define GPINTENB    0x05    // Port B Interrupt on Change ON/OFF siehe auch DEFVAL und IOCON
#define DEFVALA     0x06    // Wenn ein Verbundener Pin nicht den gleichen Wert in DEFVAL (BIT)  
#define DEFVALB     0x07    // und IOCON verbundenen Pin = 1 dann gibt es einen IRQ. Port A und Port B
#define INTCONA     0x08    // Für Funktion IntOnChange umschalten zwischen Wert am PIN oder DEFVAL
#define INTCONB     0x09    // Für Funktion IntOnChange umschalten zwischen Wert am PIN oder DEFVAL
#define INTCAPA     0x10    // READ ONLY liest den Port im Moment eines Interrupts
#define INTCAPB     0x11    // READ ONLY liest den Port im Moment eines Interrupts
#define GPIOA       0x12    // gibt den wirklichen Status am Port zurück (PORT A) 
#define GPIOB       0x13    // gibt den wirklichen Status am Port zurück (PORT B)
#define OLATA       0X14    // Wenn IODIR=0 (OUTPUT) dann wird Wert auf den Ausgang gesetzt(forciert)
#define OLATB       0X15    // Wenn IODIR=0 (OUTPUT) dann wird Wert auf den Ausgang gesetzt(forciert)
#define IOCONA      0x0A    // Konfiguration für BANK, MIRROR, SEQOP,DISSLW,HAEN,ODR,INTPOL (PORT)
#define IOCONB      0x0B    // Konfiguration für BANK, MIRROR, SEQOP,DISSLW,HAEN,ODR,INTPOL (PORT)
#define INTFA       0x0E    // READ ONLY gibt an welches Bit einen Interrupt ausgelöst
#define INTFB       0x0F    // READ ONLY gibt an welches Bit einen Interrupt ausgelöst
#define GPPUA       0x0C    // Setzt Intern PULLUP wenn als IODIR=1 (Bitweise funktion)
#define GPPUB       0x0D    // Setzt Intern PULLUP wenn als IODIR=1 (Bitweise funktion)
