/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       willem                                                    */
/*    Created:      24/09/2024, 21:48:14                                      */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// Plese refer to following link for command reference:
// https://api.vex.com/v5/home/cpp/index.html

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here
// Construct a V5 Motor that runs in reverse.
motor LmFront = motor(PORT10,ratio18_1,false);
motor RmBack = motor(PORT2,ratio18_1,true);
motor LmBack = motor(PORT9,ratio18_1,false);
motor RmFront = motor(PORT1,ratio18_1, true);

// Create a new object "Controller" with the Controller class.
controller Controller1 = controller();

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................

  LmFront.setVelocity(25, percent);
  RmFront.setVelocity(25, percent);
  LmBack.setVelocity(25, percent);
  RmBack.setVelocity(25, percent);
  
  // don´t wait for completion, until the last motor statement, so that all motors
  // run at the same time - the default is true - meaining it will execute the statement
  // until it moves to the next statement
  LmFront.spinFor(forward, 480, degrees, false);  
  RmFront.spinFor(forward, 480, degrees, false);
  LmBack.spinFor(forward, 480, degrees, false);
  RmBack.spinFor(forward, 480, degrees);

  // Stop all the motors after the movement is completed.
  LmFront.stop();
  RmFront.stop();
  LmBack.stop();
  RmBack.stop();

}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................
    

    LmFront.setVelocity((Controller1.Axis3.position() + (Controller1.Axis4.position() + Controller1.Axis1.position())), percent);
    LmFront.spin(forward);
    RmFront.setVelocity((Controller1.Axis3.position() - (Controller1.Axis4.position() + Controller1.Axis1.position())), percent);
    RmFront.spin(forward);
    LmBack.setVelocity((Controller1.Axis3.position() + (Controller1.Axis4.position() - Controller1.Axis1.position())), percent);
    LmBack.spin(forward);
    RmBack.setVelocity((Controller1.Axis3.position() - (Controller1.Axis4.position() - Controller1.Axis1.position())), percent);
    RmBack.spin(forward);
    
    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}
