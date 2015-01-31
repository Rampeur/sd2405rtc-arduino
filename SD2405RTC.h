/*
 * SD2405RTC.h - library for i2c SD2405 Real Time Clock
 *
 * Copyright (c) Netgrowing 2015
 * Written by Julien Gautier for Netgrowing Electronics.
 * 
 * This library is intended to be uses with Arduino Time.h library functions
 * 
 * The library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 * 
 * 2015/01/30 - Initial release
 */

#ifndef SD2405RTC_h
#define SD2405RTC_h

#include <Time.h>

// library interface description
class SD2405RTC
{
  // user-accessible "public" interface
  public:
    SD2405RTC();
    static time_t get();
    static void set(time_t t);
    static void read(tmElements_t &tm);
    static void write(tmElements_t &tm);

  private:
    static uint8_t dec2bcd(uint8_t num);
    static uint8_t bcd2dec(uint8_t num);
    static void writeTimeOn(void);
    static void writeTimeOff(void);
};

extern SD2405RTC RTC;

#endif
 

