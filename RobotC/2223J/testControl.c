/*   fullRobotLCD.h - Autonomous selection program                          *
*    Copyright (C) <2018>  Jorge Andrés Santiago Ferdández                  *
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

#pragma config(Motor,  port1,           MOTOR_driveLB, tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           MOTOR_driveLF, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           MOTOR_intakeR, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           MOTOR_liftUL,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           MOTOR_liftDL,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           MOTOR_liftDR,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           MOTOR_liftUR,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           MOTOR_intakeL, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           MOTOR_driveRF, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          MOTOR_driveRB, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)

#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"



void pre_auton()
{

	bStopTasksBetweenModes = true;

}


task autonomous()
{
	AutonomousCodePlaceholderForTesting();
}

task usercontrol()
{


	while (true)
	{
		motor[MOTOR_driveLB] = motor[MOTOR_driveLF] = (vexRT[Ch2] + vexRT[Ch1]);
		motor[MOTOR_driveRB] = motor[MOTOR_driveRF] = (vexRT[Ch2] - vexRT[Ch1]);

		motor[MOTOR_liftUL] = motor[MOTOR_liftUR] = motor[MOTOR_liftDL] = motor[MOTOR_liftDR] = vexRT[Ch3];

		if (vexRT[Btn6U] == 1)
		{
			motor[MOTOR_intakeR] = motor[MOTOR_intakeL] = 55;
		}
		else if (vexRT[Btn6D] == 1)
		{
			motor[MOTOR_intakeR] = motor[MOTOR_intakeL] = -55;
		}
		else
		{
			motor[MOTOR_intakeR] = motor[MOTOR_intakeL] = 0;
		}


	}
}
