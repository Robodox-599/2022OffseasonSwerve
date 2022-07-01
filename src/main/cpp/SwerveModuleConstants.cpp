#include "SwerveModuleConstants.h"

SwerveModuleConstants::SwerveModuleConstants(int driveMotorID, int angleMotorID, int canCoderID, double angleOffset)
                        : m_DriveMotorID{driveMotorID}, m_AngleMotorID{angleMotorID},m_CanCoderID{canCoderID}, m_AngleOffset{angleOffset}{

}

int SwerveModuleConstants::getDriveMotorID(){
    return m_DriveMotorID;
}

int SwerveModuleConstants::getAngleMotorID(){
    return m_AngleMotorID;
}

int SwerveModuleConstants::getCanCoderID(){
    return m_CanCoderID;
}

double SwerveModuleConstants::getAngleOffset(){
    return m_AngleOffset;
}