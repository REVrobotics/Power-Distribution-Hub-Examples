// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <fmt/core.h>

#include <frc/smartdashboard/SmartDashboard.h>
#include <frc/PowerDistribution.h>
void printFaults(frc::PowerDistribution::StickyFaults sticky){
  frc::SmartDashboard::PutNumber("Sticky Fault Brownout ", sticky.Brownout);
  frc::SmartDashboard::PutNumber("Sticky Fault CanBusOFF ", sticky.CanBusOff);
  frc::SmartDashboard::PutNumber("Sticky Fault CanWarnign ", sticky.CanWarning);
  frc::SmartDashboard::PutNumber("Sticky Fault Has Reset ", sticky.HasReset);
  frc::SmartDashboard::PutNumber("Sticky Fault 0 ", sticky.Channel0BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 1 ", sticky.Channel1BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 2 ", sticky.Channel2BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 3 ", sticky.Channel3BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 4 ", sticky.Channel4BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 5 ", sticky.Channel5BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 6 ", sticky.Channel6BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 7 ", sticky.Channel7BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 8 ", sticky.Channel8BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 9 ", sticky.Channel9BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 10 ", sticky.Channel10BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 11 ", sticky.Channel11BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 12 ", sticky.Channel12BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 13 ", sticky.Channel13BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 14", sticky.Channel14BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 15 ", sticky.Channel15BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 16 ", sticky.Channel16BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 17 ", sticky.Channel17BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 18 ", sticky.Channel18BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 19", sticky.Channel19BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 20", sticky.Channel20BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 21", sticky.Channel21BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 22", sticky.Channel22BreakerFault);
  frc::SmartDashboard::PutNumber("Sticky Fault 23", sticky.Channel23BreakerFault);
}
void Robot::RobotInit() {
  hub.ClearStickyFaults();
  frc::PowerDistribution::StickyFaults sticky = hub.GetStickyFaults();
  printFaults(sticky);
}

/**
 * This function is called every robot packet, no matter the mode. Use
 * this for items like diagnostics that you want ran during disabled,
 * autonomous, teleoperated and test.
 *
 * <p> This runs after the mode specific periodic functions, but before
 * LiveWindow and SmartDashboard integrated updating.
 */
void Robot::RobotPeriodic() {}

/**
 * This autonomous (along with the chooser code above) shows how to select
 * between different autonomous modes using the dashboard. The sendable chooser
 * code works with the Java SmartDashboard. If you prefer the LabVIEW Dashboard,
 * remove all of the chooser code and uncomment the GetString line to get the
 * auto name from the text box below the Gyro.
 *
 * You can add additional auto modes by adding additional comparisons to the
 * if-else structure below with additional strings. If using the SendableChooser
 * make sure to add them to the chooser code above as well.
 */
void Robot::AutonomousInit() {
}

void Robot::AutonomousPeriodic() {
}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {
  frc::PowerDistribution::StickyFaults sticky = hub.GetStickyFaults();
  printFaults(sticky);

}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {
  hub.ClearStickyFaults();
  frc::PowerDistribution::StickyFaults sticky = hub.GetStickyFaults();
  printFaults(sticky);

}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
