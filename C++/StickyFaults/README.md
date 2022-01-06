# Sticky Faults

### Description
This example shows how to get and clear sticky faults on the Power Distrubtion Hub.

### Usage
Plug in Fuses or breakers on channels you would like to check faults with.  

1. Run code
2. Should see in Smart dashboard the intial values 1 = fault 0 = no Fault, these values should corespond to the leds on the hub.
3. Enable teleoperated mode.
4. unplug a fuse or breaker should see it go from 0 to 1 and light off to light steady on. This indicates a fault but also triggers sticky fault.
5. replug that fuse now the light should be blinking indicating a sticky fault.  This means it will stay until cleared.
6. Disable the code.  This will clear the sticky faults and now should update the led to off on the fuse you plugged back in. 

Values for the sticky faults for each channel will be displayed on SmartDashboard and updated throughout the process.