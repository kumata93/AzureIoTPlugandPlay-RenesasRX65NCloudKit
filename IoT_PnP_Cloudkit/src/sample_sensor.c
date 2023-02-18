/*
 * sample_sensor.c
 *
 *  Created on: Feb 12, 2023
 *      Author: airpl
 */

#include "sample_sensor.h"
#include "demo_printf.h"

static SAMPLE_SENSOR sample_sensor_data;

void sample_sensor_entry(ULONG parameter)
{

	/* Initialize the sensors */
	init_sensors();

	while(1)
	{

		/* Get Illuminance */
		read_isl29035(&(sample_sensor_data.ambient_light_value));

		tx_thread_sleep(100);

		/* Get temperature, humidity, pressure and gas_resistance */
		read_bme680(&sample_sensor_data.enviro_data);
		tx_thread_sleep(100);

		/* Get temperature */
		read_bmi160_accel(&sample_sensor_data.accel_data);
		read_bmi160_gyro(&sample_sensor_data.gyro_data);
		tx_thread_sleep(100);

	}

}

uint16_t sample_get_sensor_data(SAMPLE_SENSOR * sensor_data)
{
    if (NULL == sensor_data)
    {
        LOG_TERMINAL("sensor_data is NULL.\n");
    }else
    {
        sensor_data->ambient_light_value = sample_sensor_data.ambient_light_value;
        sensor_data->enviro_data = sample_sensor_data.enviro_data;
        sensor_data->accel_data = sample_sensor_data.accel_data;
        sensor_data->gyro_data = sample_sensor_data.gyro_data;
    }

	return 0;
}
