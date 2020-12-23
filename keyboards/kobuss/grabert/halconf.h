/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
 *    `qmk chibios-confupdate -i keyboards/kobuss/grabert/halconf.h -r platforms/chibios/common/configs/halconf.h`
 */

#pragma once

#define HAL_USE_DAC FALSE

#define HAL_USE_GPT FALSE

#define HAL_USE_SERIAL_USB FALSE

#define HAL_USE_SPI FALSE

#define PAL_USE_CALLBACKS FALSE

#define PAL_USE_WAIT FALSE

#define ADC_USE_WAIT FALSE

#define ADC_USE_MUTUAL_EXCLUSION FALSE

#define CAN_USE_SLEEP_MODE FALSE

#define DAC_USE_WAIT FALSE

#define DAC_USE_MUTUAL_EXCLUSION FALSE

#define MAC_USE_EVENTS FALSE

#define MMC_NICE_WAITING FALSE

#define SPI_USE_WAIT FALSE

#define SPI_USE_MUTUAL_EXCLUSION FALSE

#include_next <halconf.h>
