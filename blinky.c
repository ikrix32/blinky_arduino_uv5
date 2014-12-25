/* Copyright (c) 2014 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup blinky_example_main main.c
 * @{
 * @ingroup blinky_example
 * @brief Blinky Example Application main file.
 *
 */
#include "arduino/Arduino.h"

void setup()
{
	for(int i = 0;i < 31;i++){
		pinMode(i, OUTPUT);
	}
}

void turnPins(bool on);

void loop()
{
		turnPins(true);
		delay(500);
		turnPins(false);
		delay(500);
}

void turnPins(bool on){
	for(int i = 0;i < 31;i++)
	{
		if(on){
			digitalWrite(i, HIGH);
		}else{
			digitalWrite(i, LOW);
		}
	}
}

/** @} */
