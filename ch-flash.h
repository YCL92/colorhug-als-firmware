/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2015 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __CH_FLASH_H
#define __CH_FLASH_H

#include <stdint.h>

uint8_t		 CHugFlashErase		(uint16_t	 addr,
					 uint16_t	 len);
uint8_t		 CHugFlashWrite		(uint16_t	 addr,
					 uint16_t	 len,
					 const uint8_t	*data);
uint8_t		 CHugFlashRead		(uint16_t	 addr,
					 uint16_t	 len,
					 uint8_t	*data);

#endif /* __CH_FLASH_H */
