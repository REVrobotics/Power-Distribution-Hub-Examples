// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <frc/smartdashboard/SmartDashboard.h>

#define NUM_PDH_CHANNELS 24

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {
  /**
   * Get the input voltage of the PDH and display it on Shuffleboard.
   */
  frc::SmartDashboard::PutNumber("Voltage", m_pdh.GetVoltage());

  /**
   * Get the total current of the PDH and display it on Shuffleboard. This will
   * be to the nearest even number.
   *
   * To get a better total current reading, sum the currents of all channels.
   * See below for getting channel current.
   */
  frc::SmartDashboard::PutNumber("Total Current", m_pdh.GetTotalCurrent());

  /**
   * Get the currents of each channel of the PDH and display them on
   * Shuffleboard.
   */
  for (int channel = 0; channel < NUM_PDH_CHANNELS; channel++) {
    frc::SmartDashboard::PutNumber(
        ("Ch" + std::to_string(channel) + " Current"),
        m_pdh.GetCurrent(channel));
  }
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
