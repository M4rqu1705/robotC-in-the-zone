/*   main.c - Main file controlling robot movement, containing its motions  *
*    Copyright (C) <2018>  Marcos Ricardo Pesante Colón                     *
*                                                                           *
*    This program is free software: you can redistribute it and/or modify   *
*    it under the terms of the GNU General Public License as published by   *
*    the Free Software Foundation, either version 3 of the License, or      *
*    (at your option) any later version.                                    *
*                                                                           *
*    This program is distributed in the hope that it will be useful,        *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of         *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
*    GNU General Public License for more details.                           *
*                                                                           *
*    You should have received a copy of the GNU General Public License      *
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"
#include "commons.h"
#include "functions.h"
#include "programmingSkills.h"

void pre_auton(){
	bStopTasksBetweenModes = true;
	bDisplayCompetitionStatusOnLcd = false;
	initialize();
}

task usercontrol(){
	while (true){
		driveOperatorControl(false);
		mobileGoalOperatorControl(false);
		armOperatorControl(false);
		coneIntakeOperatorControl();
		LCD_calibrate();
		delay(META_loopsDelay);
	}
}

task autonomous(){
	resetValues();
	loadMobileGoal(true, false, false);
	while(drive.PID.notDone){
		turnLeft(PID, 220, 13, 127);
		delay(META_loopsDelay);
	}

	resetValues();
	//programmingSkillsAuton();
}
