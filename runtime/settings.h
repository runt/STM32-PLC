#ifndef SETTINGS_H
#define SETTINGS_H

#include <inttypes.h>

//#define FPGA_ALLOW

#define BUS_MSG_DATA_SIZE 100
#define BUS_UART_DEVICE "/dev/ttyUSB0"
#define BUS_UART_BRATE B9600

#define BUS_MAX_MODULES 1024
#define BUS_WAIT_TIME_MS 50

#define IO_AREA_SIZE 4096

#define RT_ROOT_PATH "./"

#endif // SETTINGS_H
