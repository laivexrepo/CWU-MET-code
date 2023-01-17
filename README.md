# CWU-MET-code

This repository contains sample programs for the CWU MET courses and CWU MET High School Robotics program.  These programs are written in VEXcode V5 block mode, to demonstrate various concepts on how to control the robot students maybe designing to the posed challenges. Key to both programs is the concept of drive base / robot deviation testing, or determining how straight my robot will drive, does illuminating the mechanical build quality of the chassis.

**Deviation Sample Programs:**

- AdvDeviationMotorGroup.v5blocks	-- deviation test code with rampUp/rampDown functionality for motor group chassis
- AdvDeviationTwoMotor.v5blocks		-- deviation test code with rampUp/rampDown functionality for 2 motor chassis

- deviationDrivetrain.v5blocks    -- drivetrain object based single motor sample test project
- deviationTwoMotor.v5blocks      -- drive base with single left and right motor sample project
- deviationMotorGroup.v5blocks    -- drive base using two or more motors per side configured using motorgroup

**Sample Robot Subsystem Programs:**

- tankDrive.v5blocks              -- sample program to operate the robot in tankdrive mode
- 2mDrivebase.v5blocks		  -- simple two joystick, two motor drive base code
- 4mDrivebase.v5blocks		  -- simple two joystick, for motorgroup drive base
- Adv2mDrivebase.v5blocks	  -- simple two joystick, two motor drive base code with speed control for better maneuvering
- Adv4mDrivebase.v5blocks	  -- simple two joystick, for motorgroup drive base code with speed control for better maneuvering

**Competition Template Sample programs:**

- COMPtemplate01.v5blocks         -- Sample setup of the competition template for the robot
- COMPtemplate02.v5blocks         -- Sample setup of the competition template using Drivebase Object and Gyro for precise turning
- COMPtemplate03.v5blocks         -- Sample demonstrating how to test code without competition switch, four motor drivetrain object and gyro
- COMPtemplate04.v5blocks	  -- Sample demonstrating how to test code without competition switch, two motor drivetrain object
- COMPtemplate05.v5blocks	  -- Sample demonstrating how to test code without competition switch, two motor (or Motor group), speed scaling and element manipulator control (grabber)

- COMPauto01.v5blocks		  -- Sample code with competition template setup for autonomous using drive base object - no driver control
- COMPdriver01.v5blocks		  -- Sample code with competition template setup for driver control using motor/motorgroup object - no autonomous

**myBlocks (function or reusable code):**

- MyBlockExample.v5blocks        -- Sample demonstrating using a myBlock to calculate motor degrees to spin based on a given distance to drive
- MyBlockExampleTEST.V5blocks    -- Sample demo program showing the interaction between main code blocks and myBlock code and passing and return variables


