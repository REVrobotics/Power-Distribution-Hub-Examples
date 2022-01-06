# Faults

### Description
This example shows how to get both normal and sticky faults and how to clear sticky faults on the PDH.

### Usage
Things to check:
* `PDH_CAN_ID` in _src/include/Robot.h_ should match your device's CAN ID.
* `teamNumber` in _.wpilib/wpilib_preferences.json_ should match your roboRIO's team number.

Steps:
1. Deploy the code to your roboRIO with the PDH connected.
2. Open the included _shuffleboard.json_ from this project in Shuffleboard.
3. On Shuffleboard, you should see the faults represented by booleans. `true` (green) denoting there is a fault, and `false` (red) denoting there is no fault.
4. Insert a breaker into a channel on the PDH. You should see the corresponding channel breaker fault turn to `false` on Shuffleboard while its sticky fault remains `true`.
5. Click the `Clear Sticky Faults` button on Shuffleboard. You should see sticky channel breaker fault turn to `false` on Shuffleboard now.
6. Remove the breaker from the channel on the PDH. You should see both the normal and sticky channel breaker fault turn to `false` on Shuffleboard.
