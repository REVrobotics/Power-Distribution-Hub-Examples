# Get Current and Voltage

### Description
This example shows how to get the channel currents, total current, and input voltage of the PDH.

### Usage
Things to check:
* `PDH_CAN_ID` in _src/main/java/frc/robot/Robot.java_ should match your device's CAN ID.
* `teamNumber` in _.wpilib/wpilib_preferences.json_ should match your roboRIO's team number.

Steps:
1. Deploy the code to your roboRIO with the PDH connected.
2. Open the included _shuffleboard.json_ from this project in Shuffleboard.
4. Channel currents, total current, and input voltage should be displayed on Shuffleboard.