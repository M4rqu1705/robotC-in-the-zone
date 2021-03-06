/*   programmingSkills.h - Function containing motions of robot during programming skills*
*    Copyright (C) <2018>  Marcos Ricardo Pesante Colón                                  *
*                                                                                        *
*    This program is free software: you can redistribute it and/or modify                *
*    it under the terms of the GNU General Public License as published by                *
*    the Free Software Foundation, either version 3 of the License, or                   *
*    (at your option) any later version.                                                 *
*                                                                                        *
*    This program is distributed in the hope that it will be useful,                     *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of                      *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                       *
*    GNU General Public License for more details.                                        *
*                                                                                        *
*    You should have received a copy of the GNU General Public License                   *
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.               */

#ifndef PROGRAMMING_SKILLS.h
#define PROGRAMMING_SKILLS.h

#pragma systemfile

void programmingSkillsAuton(){

	/*
	resetValues();
	loadMobileGoal(false, false, false);
	armLoaded(true);

	//Accelerate 3 inches towards the Mobile Goal
	while(drive.PID.notDone){
	driveForward(Acceleration, 3, 127);
	moveMobileGoal(false);
	moveArm(PID, 1);
	moveConeIntake(true, 100);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);
	drive.PID.timeout = 55;

	//Move 40 inches towards the Mobile Goal
	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveForward(PID, 40, 127);
	moveMobileGoal(false);
	moveArm(PID, 1);
	moveConeIntake(true, 100);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);

	//Begin retracting Mobile Goal before beginning to accelerate for half a second
	for(int C = 0; C < 500/META_loopsDelay; C++){
	moveMobileGoal(true);
	moveArm(PID, 1);
	moveConeIntake(true, 100);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);

	drive.PID.timeout = 50;

	//Move 43 inches backwards toward the 5 point zone.
	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveBackwards(PID, 42, 100);
	moveMobileGoal(true);
	moveArm(PID, 1);
	moveConeIntake(true, 100);
	delay(META_loopsDelay);
	}

	resetValues();

	delay(250);

	while(coneIntake.notDone){
	moveConeIntake(false, 500/META_loopsDelay);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, true);
	drive.PID.timeout = 50;

	//Rotate 135 degrees to the left to align Buddy parallel to the starting bar
	while(drive.PID.notDone){
	turnLeft(Gyro, 135, 6.5, 100);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	//Accelerate 6 inches moving towards the middle of the starting bar
	while(drive.PID.notDone){
	driveForward(Acceleration, 3, 127);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 50;

	//Move 20 inches moving towards the middle of the starting bar
	while(drive.PID.notDone){
	driveForward(PID, 23, 100);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, true);

	drive.PID.timeout = 50;

	//Rotate left aligning Buddy perpendicular to the starting bar
	while(drive.PID.notDone){
	turnLeft(Gyro, 90, 6.5, 100);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
	driveForward(Acceleration, 5, 100);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 50;

	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveForward(PID, 20, 100);
	moveMobileGoal(false);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);
	drive.PID.timeout = 50;

	while(drive.PID.notDone){
	driveBackwards(PID, 25, 100);
	moveMobileGoal(true);
	moveArm(PID, 1);
	delay(META_loopsDelay);
	}
	//-------------------------------Finished 22 points--------------------------------------------//

	resetValues();
	loadMobileGoal(false, true, true);
	drive.PID.timeout = 50;

	//Turn left, parallel to the starting bar
	while(drive.PID.notDone){
	turnLeft(Gyro, 90, 6.5, 100);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);
	drive.PID.timeout = 50;

	//Drive forward to align Buddy to the Mobile Goal
	while(drive.PID.notDone){
	driveForward(PID, 15, 127);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, true);
	drive.PID.timeout = 75;

	//Turn Left to face the Mobile Goal
	while(drive.PID.notDone){
	turnLeft(Gyro, 90, 6.5, 100);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);
	drive.PID.timeout = 50;

	//Move forward to pick up the Mobile Goal
	while(drive.PID.notDone){
	driveForward(PID, 25, 127);
	delay(META_loopsDelay);
	}
	resetValues();
	loadMobileGoal(true, false, false);

	//Begin retracting Mobile Goal intake before driving back
	for(int C = 0; C<500/META_loopsDelay; C++){
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 50;

	//Drive backwards towards starting bar
	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveBackwards(PID, 12, 100);
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, true);
	drive.PID.timeout = 100;

	//Turn 180 degrees to face the starting bar
	while(drive.PID.notDone){
	turnLeft(Gyro, 170, 6.5, 127);

	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 50;

	while(drive.PID.notDone){
	driveForward(PID, 25, 127);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	//----------------------------------- 33 points done -------------------------------------------------//

	resetValues();
	loadMobileGoal(false, true, false);
	drive.PID.timeout = 75;

	//Drive backwards to align Buddy with the Mobile Goal
	while(drive.PID.notDone){
	driveBackwards(PID, 45, 127);
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, true);
	drive.PID.timeout = 75;

	//Face the Mobile Goal
	while(drive.PID.notDone){
	turnRight(Gyro, 80, 6.5, 127);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);

	//Accelerate to pick up the Mobile Goal
	while(drive.PID.notDone){
	driveForward(Acceleration, 3, 50);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);
	drive.PID.timeout = 50;

	//Move forward to fit Mobile Goal in Intake
	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveForward(PID, 24, 100);
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);
	drive.PID.timeout = 100;

	//Move Forward while picking up Mobile Goal
	while(drive.PID.notDone || mobileGoalIntake.PID.notDone){
	driveForward(PID, 6, 50);
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}
	//Mobile Goal is Inside
	resetValues();
	loadMobileGoal(true, true, true);
	drive.PID.timeout = 75;

	//Turn towards the starting bar
	while(drive.PID.notDone){
	turnLeft(Gyro, 90, 6.5, 127);
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 75;

	while(drive.PID.notDone){
	driveForward(Acceleration, 3, 127);
	moveMobileGoal(true);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);
	drive.PID.timeout = 75;

	while(drive.PID.notDone){
	driveForward(PID, 45, 127);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(mobileGoalIntake.PID.notDone){
	moveMobileGoal(false);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(mobileGoalIntake.PID.notDone){
	driveBackwards(Acceleration, 4, 127);
	delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(mobileGoalIntake.PID.notDone){
	driveBackwards(PID, 1, 127);
	delay(META_loopsDelay);
	}

	//---------------------------------- 42 points -------------------------------------/
*/
	resetValues();
	loadMobileGoal(false, false, true);

	while(mobileGoalIntake.PID.notDone){
		turnRight(Gyro, 180, 6.5, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);

	while(drive.PID.notDone){
		driveForward(Acceleration, 3, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveForward(None, 50, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);

	while(drive.PID.notDone){
		driveForward(PID, 50, 127);
		moveMobileGoal(true);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	for(int C = 0; C <= 50; C++){
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}

	//---------------------------- 52 points ------------------------------------------------//
	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveBackwards(Acceleration, 3, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}
	resetValues();

	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveBackwards(PID, 35, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}
	resetValues();
	loadMobileGoal(false, false, true);

	while(drive.PID.notDone){
		turnRight(Gyro, 90, 6.5, 127);
		moveMobileGoal(false);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(false, false, false);

	while(drive.PID.notDone){
		driveForward(PID, 30, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, false);

	while(mobileGoalIntake.PID.notDone){
		moveMobileGoal(true);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, true);

	while(drive.PID.notDone){
		turnLeft(Gyro, 90, 6.5, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveForward(PID, 12, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, true);

	while(drive.PID.notDone){
		turnLeft(Gyro, 90, 6.5, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveForward(PID, 30, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, true, true);

	while(drive.PID.notDone){
		turnRight(PID, 90, 6.5, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	loadMobileGoal(true, false, false);

	while(drive.PID.notDone){
		driveForward(PID, 12, 127);
	}
}
#endif
