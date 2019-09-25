# COMPSYS 303 Assignment 2 Group 26: DDD Mode Pacemaker
## Sherjeel Shehzad and Kevin Tang

### How to view SCCharts diagram

* Open Kieler Version 0.12.0 and set the workspace to the folder `workspace`

* The SCCharts diagram should show up by default

### How to view the C code and run the DE2 pacemaker 

* Open Nios 16.1 Software Build Tools for Eclipse and Compiler and set the workspace to the folder `nios_workspace`

* Run the project by right-clicking the pacemaker folder in Project Explorer and under Run As, click on `Option 3: Nios II Hardware`

* KEY0 is the input for VSense and KEY 1 is the input for ASense 

* All of the the timer states will be outputted on the console

* LEDG0 is the output for VPace and LEDG1 is the output for APace (LED will pulse on for 200ms)

* The timer and LED values can be changed in main.h

* To run Mode 2, the user needs to open `CS303-Heart.exe` situation within the Pacemaker folder

* Select the correct COM Port and set the Baud Rate to 115200 and flick SW0 up to select Mode 2

* Press Start to view the Heart Emulation

* In order to switch back to Mode 1, flick SW0 down

### Warnings

* Do not spam KEY0 and/or KEY1 as this is known to cause issues and may crash Nios

* Nios may crash unexpectedly

#### Total time spent on Assignment 2: ~16 hours (mainly debugging)