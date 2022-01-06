// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <frc/smartdashboard/SmartDashboard.h>

/**
 * Helper function to display PDH normal faults on Shuffleboard.
 */
void printFaults(frc::PowerDistribution::Faults faults) {
  frc::SmartDashboard::PutBoolean("Channel 0", faults.Channel0BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 1", faults.Channel1BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 2", faults.Channel2BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 3", faults.Channel3BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 4", faults.Channel4BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 5", faults.Channel5BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 6", faults.Channel6BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 7", faults.Channel7BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 8", faults.Channel8BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 9", faults.Channel9BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 10", faults.Channel10BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 11", faults.Channel11BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 12", faults.Channel12BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 13", faults.Channel13BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 14", faults.Channel14BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 15", faults.Channel15BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 16", faults.Channel16BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 17", faults.Channel17BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 18", faults.Channel18BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 19", faults.Channel19BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 20", faults.Channel20BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 21", faults.Channel21BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 22", faults.Channel22BreakerFault);
  frc::SmartDashboard::PutBoolean("Channel 23", faults.Channel23BreakerFault);
  frc::SmartDashboard::PutBoolean("Brownout", faults.Brownout);
  frc::SmartDashboard::PutBoolean("CAN Warning", faults.CanWarning);
  frc::SmartDashboard::PutBoolean("Hardware", faults.HardwareFault);
}

/**
 * Helper function to display PDH sticky faults on Shuffleboard.
 */
void printStickyFaults(frc::PowerDistribution::StickyFaults stickyFaults) {
  frc::SmartDashboard::PutBoolean("Sticky Channel 0",
                                  stickyFaults.Channel0BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 1",
                                  stickyFaults.Channel1BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 2",
                                  stickyFaults.Channel2BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 3",
                                  stickyFaults.Channel3BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 4",
                                  stickyFaults.Channel4BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 5",
                                  stickyFaults.Channel5BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 6",
                                  stickyFaults.Channel6BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 7",
                                  stickyFaults.Channel7BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 8",
                                  stickyFaults.Channel8BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 9",
                                  stickyFaults.Channel9BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 10",
                                  stickyFaults.Channel10BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 11",
                                  stickyFaults.Channel11BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 12",
                                  stickyFaults.Channel12BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 13",
                                  stickyFaults.Channel13BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 14",
                                  stickyFaults.Channel14BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 15",
                                  stickyFaults.Channel15BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 16",
                                  stickyFaults.Channel16BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 17",
                                  stickyFaults.Channel17BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 18",
                                  stickyFaults.Channel18BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 19",
                                  stickyFaults.Channel19BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 20",
                                  stickyFaults.Channel20BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 21",
                                  stickyFaults.Channel21BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 22",
                                  stickyFaults.Channel22BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Channel 23",
                                  stickyFaults.Channel23BreakerFault);
  frc::SmartDashboard::PutBoolean("Sticky Brownout", stickyFaults.Brownout);
  frc::SmartDashboard::PutBoolean("Sticky CAN Bus Off", stickyFaults.CanBusOff);
  frc::SmartDashboard::PutBoolean("Sticky CAN Warning",
                                  stickyFaults.CanWarning);
  frc::SmartDashboard::PutBoolean("Sticky Has Reset", stickyFaults.HasReset);
}

void Robot::RobotInit() {
  // Add button to Shuffleboard to clear sticky faults
  frc::SmartDashboard::SetDefaultBoolean("Clear Sticky Faults", false);
}

void Robot::RobotPeriodic() {
  /**
   * Get faults from the PDH and display them onto Shuffleboard.
   */
  frc::PowerDistribution::Faults faults = m_pdh.GetFaults();
  printFaults(faults);

  /**
   * Get sticky faults from the PDH and display them on Shuffleboard.
   *
   * Sticky faults are different from normal faults because they "stick", even
   * after the normal fault is cleared. The sticky version of the fault is
   * always set when the normal version is set. To clear sticky faults, see
   * below.
   */
  frc::PowerDistribution::StickyFaults stickyFaults = m_pdh.GetStickyFaults();
  printStickyFaults(stickyFaults);

  // Check Clear Sticky Faults button status
  if (frc::SmartDashboard::GetBoolean("Clear Sticky Faults", false)) {
    frc::SmartDashboard::PutBoolean("Clear Sticky Faults", false);

    /**
     * Clear sticky faults on the PDH.
     *
     * This clears sticky faults if their corresponding normal fault is also
     * clear. If the normal fault is still set, the sticky fault will remain
     * set.
     */
    m_pdh.ClearStickyFaults();
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
