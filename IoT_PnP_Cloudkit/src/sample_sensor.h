/*
 * sample_sensor.h
 *
 *  Created on: Feb 12, 2023
 *      Author: airpl
 */

#ifndef SRC_SAMPLE_SENSOR_H_
#define SRC_SAMPLE_SENSOR_H_

#include "tx_api.h"
#include "tx_port.h"
#include <stdio.h>
#include <stdint.h>
#include "rx65n_cloud_kit_sensors.h"

typedef struct SAMPLE_SENSOR_STRUCT{

	double ambient_light_value;
	struct bme68x_data enviro_data;
	struct bmi160_sensor_data accel_data;
	struct bmi160_sensor_data gyro_data;

}SAMPLE_SENSOR;

void sample_sensor_entry(ULONG parameter);
uint16_t sample_get_sensor_data(SAMPLE_SENSOR * sensor_data);

#endif /* SRC_SAMPLE_SENSOR_H_ */
