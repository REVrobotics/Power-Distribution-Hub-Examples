# Switchable Channel

### Description
This example shows how to set and get the switchable channel state on the PDH.

### Usage
Things to check:
* `PDH_CAN_ID` in _src/main/java/frc/robot/Robot.java_ should match your device's CAN ID.
* `teamNumber` in _.wpilib/wpilib_preferences.json_ should match your roboRIO's team number.

Steps:
1. Deploy the code to your roboRIO with the PDH connected.
2. Open the included _shuffleboard.json_ from this project in Shuffleboard.
3. Connect a low-current device (i.e. a flashlight) to the switchable channel (channel 23).
4. Use the "Set Switchable Channel" toggle button on Shuffleboard to toggle the switchable channel. You should see your low-current device power on and off with the switchable channel, and the "Get Switchable Channel" boolean should reflect the switchable channel's state.