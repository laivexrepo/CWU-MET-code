# CWU-MET-code

This repository contains sample programs for the CWU MET courses and CWU MET High School Robotics program.  These programs are written in VEXcode V5 block mode, to demonstrate various concepts on how to control the robot students maybe designing to the posed challenges. Key to both programs is the concept of drive base / robot deviation testing, or determining how straight my robot will drive, does illuminating the mechanical build quality of the chassis.

**Deviation Sample Programs:**

- deviationDrivetrain.v5blocks    -- drivetrain object based single motor sample test project
- deviationTwoMotor.v5blocks      -- drive base with single left and right motor sample project
- deviationMotorGroup.v5blocks    -- drive base using two or more motors per side configured using motorgroup

**Sample Robot Subsystem Programs:**

- tankDrive.v5blocks              -- sample program to operate the robot in tankdrive mode

**Competition Template Sample programs:**

- COMPtemplate01.v5blocks         -- Sample setup of the competition template for the robot
- COMPtemplate02.v5blocks         -- Sample setup of the competition template using Drivebase Object and Gyro for precise turning
- COMPtemplate03.v5blocks         -- Sampel demonstrating how to test code without competition switch or tournament management system

**myBlocks (function or reusable code):**

- MyBlockExample.v5blocks        -- Sample demonstarting using a myBlock to claculate motor degrees to spin based on a given distance to drive
- MyBlockExampleTEST.V5blocks    -- Sample demo program showing the interaction between mian code blocks and myBlock code and passing and return variables


