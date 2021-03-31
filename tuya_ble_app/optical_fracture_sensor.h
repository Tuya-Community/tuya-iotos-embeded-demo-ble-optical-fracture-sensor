#ifndef OPTICAL_FRACTURE_SENSOR_H_
#define OPTICAL_FRACTURE_SENSOR_H_

#include "tuya_ble_common.h"
#include "tuya_ble_log.h"

#define SWITCH_PIN		GPIO_PB4
#define ON	1
#define OFF 0

void optical_fracture_sensor_init(void);
void optical_fracture_sensor_fun(void);

#endif
