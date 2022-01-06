// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <frc/smartdashboard/SmartDashboard.h>

void Robot::RobotInit() {
  // Add boolean to Shuffleboard for setting the switchable channel
  frc::SmartDashboard::SetDefaultBoolean("Set Switchable Channel", false);
}

void Robot::RobotPeriodic() {
  /**
   * Set the switchable channel state using the value from Shuffleboard.
   */
  m_pdh.SetSwitchableChannel(
      frc::SmartDashboard::GetBoolean("Set Switchable Channel", false));

  /**
   * Get the switchable channel state and display it to Shuffleboard.
   */
  frc::SmartDashboard::PutBoolean("Get Switchable Channel",
                                  m_pdh.GetSwitchableChannel());
}

void Robot::AutonomousInit() {}

void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
