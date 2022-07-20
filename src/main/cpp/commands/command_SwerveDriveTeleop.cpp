// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/command_SwerveDriveTeleop.h"

command_SwerveDriveTeleop::command_SwerveDriveTeleop(subsystem_SwerveDrive* SwerveDrive,
                                                      std::function<double()> xSpeed,
                                                      std::function<double()> ySpeed,
                                                      std::function<double()> zRotation): m_SwerveDrive{SwerveDrive},
                                                                                          m_xSpeed{xSpeed},
                                                                                          m_ySpeed{ySpeed},
                                                                                          m_zRotation{zRotation}
{
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements({m_SwerveDrive});
}

// Called when the command is initially scheduled.
void command_SwerveDriveTeleop::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void command_SwerveDriveTeleop::Execute() {
  m_SwerveDrive -> SwerveDrive( -frc::ApplyDeadband(m_xSpeed(), 0.08)* SwerveConstants::MaxSpeed,
                                -frc::ApplyDeadband(m_ySpeed(), 0.08) * SwerveConstants::MaxSpeed,
                                -frc::ApplyDeadband(m_zRotation(), 0.08) * SwerveConstants::MaxAngularVelocity,
                                true,
                                false);

  
}

// Called once the command ends or is interrupted.
void command_SwerveDriveTeleop::End(bool interrupted) {}

// Returns true when the command should end.
bool command_SwerveDriveTeleop::IsFinished() {
  return false;
}
