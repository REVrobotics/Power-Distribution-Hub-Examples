// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

package frc.robot;

import edu.wpi.first.wpilibj.TimedRobot;
import edu.wpi.first.wpilibj.PowerDistribution;
import edu.wpi.first.wpilibj.PowerDistribution.ModuleType;
import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;

public class Robot extends TimedRobot {

  private static final int PDH_CAN_ID = 1;
  private static final int NUM_PDH_CHANNELS =24;

  PowerDistribution m_pdh = new PowerDistribution(PDH_CAN_ID,ModuleType.kRev);
  
  @Override
  public void robotInit() {}

  @Override
  public void robotPeriodic() {
     /**
     * Get the input voltage of the PDH and display it on Shuffleboard.
     */
    SmartDashboard.putNumber("Voltage", m_pdh.getVoltage());

    /**
     * Get the total current of the PDH and display it on Shuffleboard. This will
     * be to the nearest even number.
     *
     * To get a better total current reading, sum the currents of all channels.
     * See below for getting channel current.
     */
    SmartDashboard.putNumber("Total Current", m_pdh.getTotalCurrent());

    /**
     * Get the currents of each channel of the PDH and display them on
     * Shuffleboard.
     */
    for (int channel = 0; channel < NUM_PDH_CHANNELS; channel++) {
      SmartDashboard.putNumber(
          ("Ch" + String.valueOf(channel) + " Current"),
          m_pdh.getCurrent(channel));
    }
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
