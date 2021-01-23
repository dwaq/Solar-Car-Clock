pin 1 is square

MCU is STM8S003K3T6C

1: 4.010V (battery voltage) (goes through S43/S44 diodes to MCU pin 6 (VDD))
    (<1 ohm to battery VCC)
2: DATA [SWIM] (connects to pin 26 of MCU) 3.717V
3: NRST (connects to pin 1 of MCU) 0V (can measure 4V on pin 1, but not 3.7V on pin 3) (not connected to GND)
4: GND (connects to pin 4 of MCU (0 ohm to battery GND)

PCB
1: Green (VDD)
2: Blue (DATA)
3: Purple (RESET)
4: Gray (GND)

SWIM:
1: Green (VDD)
2: Blue (DATA)
3: Gray (GND)
4: Purple (RESET)

SWIM:
1 VDD
2 DATA
3 GND
4 RESET


Charge LED lights up from solar panel 