#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'hps' in
 * file '../../../FPGA/DE1_PLC/de1_sys/hps.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'buttons', class 'altera_avalon_pio'
 * The macros are prefixed with 'BUTTONS_'.
 * The prefix is the slave descriptor.
 */
#define BUTTONS_COMPONENT_TYPE altera_avalon_pio
#define BUTTONS_COMPONENT_NAME buttons
#define BUTTONS_BASE 0x0
#define BUTTONS_SPAN 16
#define BUTTONS_END 0xf
#define BUTTONS_IRQ 0
#define BUTTONS_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTONS_CAPTURE 0
#define BUTTONS_DATA_WIDTH 4
#define BUTTONS_DO_TEST_BENCH_WIRING 0
#define BUTTONS_DRIVEN_SIM_VALUE 0
#define BUTTONS_EDGE_TYPE NONE
#define BUTTONS_FREQ 50000000
#define BUTTONS_HAS_IN 1
#define BUTTONS_HAS_OUT 0
#define BUTTONS_HAS_TRI 0
#define BUTTONS_IRQ_TYPE LEVEL
#define BUTTONS_RESET_VALUE 0

/*
 * Macros for device 'switches', class 'altera_avalon_pio'
 * The macros are prefixed with 'SWITCHES_'.
 * The prefix is the slave descriptor.
 */
#define SWITCHES_COMPONENT_TYPE altera_avalon_pio
#define SWITCHES_COMPONENT_NAME switches
#define SWITCHES_BASE 0x10
#define SWITCHES_SPAN 16
#define SWITCHES_END 0x1f
#define SWITCHES_IRQ 1
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 0
#define SWITCHES_DATA_WIDTH 10
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE NONE
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ_TYPE LEVEL
#define SWITCHES_RESET_VALUE 0

/*
 * Macros for device 'leds', class 'altera_avalon_pio'
 * The macros are prefixed with 'LEDS_'.
 * The prefix is the slave descriptor.
 */
#define LEDS_COMPONENT_TYPE altera_avalon_pio
#define LEDS_COMPONENT_NAME leds
#define LEDS_BASE 0x20
#define LEDS_SPAN 16
#define LEDS_END 0x2f
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE NONE
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ_TYPE NONE
#define LEDS_RESET_VALUE 0

/*
 * Macros for device 'jtag_uart', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_COMPONENT_NAME jtag_uart
#define JTAG_UART_BASE 0x30
#define JTAG_UART_SPAN 8
#define JTAG_UART_END 0x37
#define JTAG_UART_IRQ 2
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8

/*
 * Macros for device 'SYS_ID', class 'altera_avalon_sysid_qsys'
 * The macros are prefixed with 'SYS_ID_'.
 * The prefix is the slave descriptor.
 */
#define SYS_ID_COMPONENT_TYPE altera_avalon_sysid_qsys
#define SYS_ID_COMPONENT_NAME SYS_ID
#define SYS_ID_BASE 0x10000
#define SYS_ID_SPAN 8
#define SYS_ID_END 0x10007
#define SYS_ID_ID 2899645186
#define SYS_ID_TIMESTAMP 1514375775

/*
 * Macros for device 'alt_vip_vfr_vga', class 'alt_vip_vfr'
 * The macros are prefixed with 'ALT_VIP_VFR_VGA_'.
 * The prefix is the slave descriptor.
 */
#define ALT_VIP_VFR_VGA_COMPONENT_TYPE alt_vip_vfr
#define ALT_VIP_VFR_VGA_COMPONENT_NAME alt_vip_vfr_vga
#define ALT_VIP_VFR_VGA_BASE 0x20000
#define ALT_VIP_VFR_VGA_SPAN 128
#define ALT_VIP_VFR_VGA_END 0x2007f
#define ALT_VIP_VFR_VGA_IRQ 0

/*
 * Macros for device 'uart_0', class 'altera_avalon_uart'
 * The macros are prefixed with 'UART_0_'.
 * The prefix is the slave descriptor.
 */
#define UART_0_COMPONENT_TYPE altera_avalon_uart
#define UART_0_COMPONENT_NAME uart_0
#define UART_0_BASE 0x30000
#define UART_0_SPAN 32
#define UART_0_END 0x3001f
#define UART_0_IRQ 3
#define UART_0_BAUD 115200
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_FREQ 50000000
#define UART_0_PARITY 'N'
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0


#endif /* _ALTERA_HPS_0_H_ */
