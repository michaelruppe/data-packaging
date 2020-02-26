// ToDo: Look into compressing functionality using function templates

#ifndef DATA_PACKAGING_H
#define DATA_PACKAGING_H

#include "Arduino.h"
#include <stdint.h>

/* For a Teensy 3.6:
char are 1 byte(s)
shorts are 2 byte(s)
Ints are 4 byte(s)
long are 4 byte(s)

floats are 4 byte(s)
double are 8 byte(s)

word are 4 byte(s)
*/



void packByte(uint8_t var, uint8_t buf[], uint8_t ofs);
void packShort(short var, uint8_t buf[], uint8_t ofs);
void packUShort(unsigned short var, uint8_t buf[], uint8_t ofs);
void packInt(int var, uint8_t buf[], uint8_t ofs);
void packUInt(unsigned int var, uint8_t buf[], uint8_t ofs);
void packFloat(float var, uint8_t buf[], uint8_t ofs);
void packDouble(double var, uint8_t buf[], uint8_t ofs);


uint8_t unPackByte(uint8_t buf[], uint8_t ofs);
short unPackShort(uint8_t buf[], uint8_t ofs);
unsigned short unPackUShort(uint8_t buf[], uint8_t ofs);
int unPackInt(uint8_t buf[], uint8_t ofs);
unsigned int unPackUInt(uint8_t buf[], uint8_t ofs);
float unPackFloat(uint8_t buf[], uint8_t ofs);
double unPackDouble(uint8_t buf[], uint8_t ofs);

#endif
