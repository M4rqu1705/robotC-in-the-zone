#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"
#include "fullRobotTestCommons.h"
#include "fullRobotTestFunctions.h"

void pre_auton(){
	bStopTasksBetweenModes = true;
	bDisplayCompetitionStatusOnLcd = false;
	initialize();
}

task usercontrol(){
	//startTask(autonomous);

	while (true){
		driveOperatorControl(false);
		armOperatorControl(false, false, true);
		mobileGoalOperatorControl(false, false);
		lcdCalibrate();
		delay(LOOPS_DELAY);
	}
}

task autonomous(){
	resetValues();
	clearDebugStream();

	while(claw.notDone && arm.notDone){
		moveClaw(close, 50);
		moveArm(1);
	}
	resetValues();

	while(drive.notDone && mobileGoalIntake.notDone && arm.notDone){
		move(Forward, 12, 75);
		moveMobileGoal(0);
		moveArm(0);
	}
	resetValues();

	while(drive.notDone){
		move(Forward, 12, 50);
	}
	resetValues();

	while(mobileGoalIntake.notDone){
		moveMobileGoal(1);
	}
	resetValues();

	while(drive.notDone){
		move(TurnRight, 180, 50);
	}
	resetValues();

	while(drive.notDone){
		move(Forward, 5, 75);
	}
	resetValues();

	while(drive.notDone && mobileGoalIntake.notDone){
		move(Backward, 5, 50);
		moveMobileGoal(0);
	}
	resetValues();
}