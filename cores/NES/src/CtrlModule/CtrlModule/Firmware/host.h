#ifndef HOST_H
#define HOST_H

#define HOSTBASE 0xFFFFFFE0
#define HW_HOST(x) *(volatile unsigned int *)(HOSTBASE+x)

/* SPI registers */

/* Host Boot Data register */
#define REG_HOST_BOOTDATA 0x08

/* JOY Keystrokes register */
#define REG_HOST_JOYKEY1 0x0D
#define REG_HOST_JOYKEY2 0x0E

/* Host control register */
#define REG_HOST_CONTROL 0x0C
#define HOST_CONTROL_RESET 1
#define HOST_CONTROL_DIVERT_KEYBOARD 2
#define HOST_CONTROL_DIVERT_SDCARD 4
#define HOST_CONTROL_LOADER_RESET 8
#define HOST_CONTROL_MASTER_RESET 16

/* DIP switches / "Front Panel" controls - bits 15 downto 0 */
#define REG_HOST_SCALERED 0x10
#define REG_HOST_SCALEGREEN 0x14
#define REG_HOST_ROMSIZE 0x18
#define REG_HOST_SW 0x1C

#endif

