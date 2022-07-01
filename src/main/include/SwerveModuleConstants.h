

class SwerveModuleConstants {
    public:
        SwerveModuleConstants( int driveMotorID, int angleMotorID, int canCoderID, double angleOffset);

        int getDriveMotorID();
        int getAngleMotorID();
        int getCanCoderID();
        double getAngleOffset();


    private:
        const int m_DriveMotorID;
        const int m_AngleMotorID;
        const int m_CanCoderID;
        const double m_AngleOffset;
};