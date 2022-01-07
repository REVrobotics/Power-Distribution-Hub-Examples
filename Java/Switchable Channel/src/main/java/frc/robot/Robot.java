// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package frc.robot;

import edu.wpi.first.wpilibj.PowerDistribution;
import edu.wpi.first.wpilibj.TimedRobot;
import edu.wpi.first.wpilibj.PowerDistribution.ModuleType;
import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;

public class Robot extends TimedRobot {
  private static final int PDH_CAN_ID = 1;

  PowerDistribution m_pdh = new PowerDistribution(PDH_CAN_ID,ModuleType.kRev);

  @Override
  public void robotInit() {

    // Add boolean to Shuffleboard for setting the switchable channel
    SmartDashboard.setDefaultBoolean("Set Switchable Channel", false);
  }

  @Override
  public void robotPeriodic() {
  /**
   * Set the switchable channel state using the value from Shuffleboard.
   */
  m_pdh.setSwitchableChannel(
    SmartDashboard.getBoolean("Set Switchable Channel", false));

  /**
   * Get the switchable channel state and display it to Shuffleboard.
   */
  SmartDashboard.putBoolean("Get Switchable Channel",
                                m_pdh.getSwitchableChannel());
  }

  @Override
  public void autonomousInit() {}

  @Override
  public void autonomousPeriodic() {}

  @Override
  public void teleopInit() {}

  @Override
  public void teleopPeriodic() {}

  @Override
  public void disabledInit() {}

  @Override
  public void disabledPeriodic() {}

  @Override
  public void testInit() {}

  @Override
  public void testPeriodic() {}
}
