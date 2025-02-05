/*****************************************
This is a library for the MCP23017 I/O Port Expander

You'll find some examples including the wiring which should enable you to use the library. 
Furthermore I have added a list of commands.

You are free to use it, change it or build on it. In case you like it, it would be cool 
if you give it a star.

If you find bugs, please inform me!

Written by Wolfgang (Wolle) Ewald
https://wolles-elektronikkiste.de/port-expander-mcp23017-2?lang=en

*******************************************/


#ifndef MCP23017_H
#define MCP23017_H

#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif
#include <Wire.h>
#include <MCP23017DEF.h>
// REGISTER Adressen nur gültig IOCON.BANK=0
#define INTPOL      1    
#define INTODR      2
#define MIRROR      6    


class MCP23017{
    public:
        MCP23017(int addr, uint8_t rp);
        MCP23017(int addr);
        MCP23017(TwoWire *w, int addr);
        MCP23017(TwoWire *w, int addr, uint8_t rp);
        
        void Init();
        void reset(); 
        void setPinMode(uint8_t, MCP_PORT, uint8_t); 
        void setPortMode(uint8_t, MCP_PORT);
        void setPortMode(uint8_t val, MCP_PORT port, uint8_t pu);
        void setPin(uint8_t, MCP_PORT, uint8_t); 
        void togglePin(uint8_t, MCP_PORT); 
        void setPinX(uint8_t, MCP_PORT, uint8_t, uint8_t); 
        void setAllPins(MCP_PORT, uint8_t); 
        void setPort(uint8_t, MCP_PORT);    
        void setPort(uint8_t, uint8_t); 
        void setPortX(uint8_t, uint8_t, MCP_PORT); 
        void setInterruptPinPol(uint8_t); 
        void setIntOdr(uint8_t);  
        void setInterruptOnChangePin(uint8_t, MCP_PORT); 
        void setInterruptOnDefValDevPin(uint8_t, MCP_PORT, uint8_t);  
        void setInterruptOnChangePort(uint8_t, MCP_PORT); 
        void setInterruptOnDefValDevPort(uint8_t, MCP_PORT, uint8_t);
        void deleteAllInterruptsOnPort(MCP_PORT); 
        void setPinPullUp(uint8_t, MCP_PORT, uint8_t); 
        void setPortPullUp(uint8_t, MCP_PORT); 
        void setIntMirror(uint8_t);
        uint8_t getIntFlag(MCP_PORT);
        bool getPin(uint8_t, MCP_PORT);
        uint8_t getPort(MCP_PORT);  
        uint8_t getIntCap(MCP_PORT); 
        
    protected:
        void setI2C_Address(int);  
        void setResetPin(uint8_t);     
        void setIoCon(uint8_t, MCP_PORT);  
        void setGpIntEn(uint8_t, MCP_PORT);  
        void setIntCon(uint8_t, MCP_PORT);   
        void setDefVal(uint8_t, MCP_PORT);    
        void writeMCP23017(uint8_t, uint8_t);
        void writeMCP23017(uint8_t, uint8_t, uint8_t);
        uint8_t readMCP23017(uint8_t);
        TwoWire *_wire;
        int I2C_Address;
        uint8_t resetPin;
        uint8_t ioDirA, ioDirB;
        uint8_t gpioA, gpioB;
        uint8_t gpIntEnA, gpIntEnB;
        uint8_t ioConA, ioConB;
        uint8_t intConA, intConB;
        uint8_t defValA, defValB;
        uint8_t gppuA, gppuB;
};

#endif

