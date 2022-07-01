// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include "SwerveModuleConstants.h"
#include <units/length.h>
#include <units/voltage.h>
#include <units/velocity.h>
#include <units/time.h>




/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */


namespace SwerveConstants{

    /*Drivetrain constants*/
    constexpr double OpenLoopRamp = 0.25;
    constexpr double closedLoopRamp = 0.0;

    constexpr double DriveGearRatio = 6.75;
    constexpr double AngleGearRatio = 150.0 / 7.0;

    constexpr units::meter_t WheelCircumference{ 0.0_in };

    /*setting up correct units for the simepleMotorFeedforward KS gain*/
    constexpr units::volt_t DriveKS{0.667};

    constexpr units::volt_t VoltageKV{2.44};
    constexpr units::foot_t FeetKV{1.0};
    constexpr units::second_t TimeKV{1.0};
    /*Setting up correct units for the simpleMotorFeedforward KV gain
    Change VoltageKV when wanting to change the KV gain*/
    constexpr auto DriveKV = VoltageKV * TimeKV / FeetKV;

    constexpr units::volt_t VoltageKA{0.27};
    constexpr units::foot_t FeetKA{1.0};
    constexpr units::second_t TimeKA{1.0};
    /*Setting up correct units for the simpleMotorFeedforward KA gain
    Change VoltageKA when wanting to change the KA gain*/
    constexpr auto DriveKA = VoltageKA * (TimeKA * TimeKA) / FeetKA; 

    /*Angle Encoder Invert*/
    constexpr bool CanCoderInvert = false;

    

    /*Swerve Angle Motor PID gains*/
    constexpr double AngleKP = 0.0;
    constexpr double AngleKI = 0.0;
    constexpr double AngleKD = 0.0;
    constexpr double AngleKF = 0.0;

    /*Swerve Angle Current Limit Config*/
    constexpr bool AngleEnableCurrentLimit = true;
    constexpr int AngleContinuousCurrentLimit = 25;
    constexpr int AnglePeakCurrentLimit = 40;
    constexpr double AnglePeakCurrentDuration = 0.1;


    
    /*Swerve Drive Motor PID gains*/
    constexpr double DriveKP = 0.0;
    constexpr double DriveKI = 0.0;
    constexpr double DriveKD = 0.0;
    constexpr double DriveKF = 0.0;

    /*Swerve Drive Current Limit Config*/
    constexpr bool DriveEnableCurrentLimit = true;
    constexpr int DriveContinuousCurrentLimit = 35;
    constexpr int DrivePeakCurrentLimit = 60;
    constexpr double DrivePeakCurrentDuration = 0.1;


    /*Motor Inverts Config*/
    constexpr bool AngleMotorInvert = false;
    constexpr bool DriveMotorInvert = false;

    /* Swerve Profiling Values */
    constexpr units::meters_per_second_t MaxSpeed{4.5};
    constexpr units::degrees_per_second_t MaxAngularVelocity{11.5};


    /*Voltage Config*/
    constexpr units::volt_t kNominal {12.0};
    

    
     
}
namespace FrontLeftModule{
    constexpr int driveMotorID = 0;
    constexpr int angleMotorID = 0;
    constexpr int canCoderID = 0;
    constexpr double angleOffset = 0.0;
    const SwerveModuleConstants constants =  SwerveModuleConstants(driveMotorID, 
                                                                          angleMotorID,
                                                                          canCoderID,
                                                                          angleOffset);
}

namespace FrontRightModule{
    constexpr int driveMotorID = 0;
    constexpr int angleMotorID = 0;
    constexpr int canCoderID = 0;
    constexpr double angleOffset = 0.0;
    const SwerveModuleConstants constants = SwerveModuleConstants(driveMotorID,
                                                                  angleMotorID,
                                                                  canCoderID,
                                                                  angleOffset);
}
namespace BackLeftModule{
    constexpr int driveMotorID = 0;
    constexpr int angleMotorID = 0;
    constexpr int canCoderID = 0;
    constexpr auto angleOffset = 0.0;
    const SwerveModuleConstants constants = SwerveModuleConstants(driveMotorID,
                                                                  angleMotorID,
                                                                  canCoderID,
                                                                  angleOffset);
}
namespace BackRightModule{
    constexpr int driveMotorID = 0;
    constexpr int angleMotorID = 0;
    constexpr int canCoderID = 0;
    constexpr double angleOffset = 0.0;
    const SwerveModuleConstants constants = SwerveModuleConstants(driveMotorID,
                                                                  angleMotorID,
                                                                  canCoderID,
                                                                  angleOffset);
}

