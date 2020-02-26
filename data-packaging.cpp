#include "data-packaging.h"

// Pack the binary data for a float variable into a buffer for a bitstream
void packFloat(float var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(float));
}
// UnPack the binary data for a float variable from a buffer
float unPackFloat(uint8_t buf[], uint8_t ofs) {
  float temp;
  memcpy(&temp, buf + ofs, sizeof(float));
  return temp;
}

// Pack the binary data for a double variable into a buffer for a bitstream
void packDouble(double var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(double));
}
// UnPack the binary data for a float variable from a buffer
double unPackDouble(uint8_t buf[], uint8_t ofs) {
  double temp;
  memcpy(&temp, buf + ofs, sizeof(double));
  return temp;
}

// Pack the binary data for a int variable into a buffer for a bitstream
void packInt(int var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(int));
}
// UnPack the binary data for a int variable from a buffer
int unPackInt(uint8_t buf[], uint8_t ofs) {
  int temp;
  memcpy(&temp, buf + ofs, sizeof(int));
  return temp;
}

// Pack the binary data for a short variable into a buffer for a bitstream
void packShort(short var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(short));
}
// UnPack the binary data for a short variable from a buffer
short unPackShort(uint8_t buf[], uint8_t ofs) {
  short temp;
  memcpy(&temp, buf + ofs, sizeof(short));
  return temp;
}

// Pack the binary data for a Ushort variable into a buffer for a bitstream
void packUShort(unsigned short var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(unsigned short));
}
// UnPack the binary data for a Ushort variable from a buffer
unsigned short unPackUShort(uint8_t buf[], uint8_t ofs) {
  short temp;
  memcpy(&temp, buf + ofs, sizeof(unsigned short));
  return temp;
}


// Pack the binary data for a unsigned int variable into a buffer for a bitstream
void packUInt(unsigned int var, uint8_t buf[], uint8_t ofs) {
  memcpy(buf+ofs, &var, sizeof(unsigned int));
}
// UnPack the binary data for a unsigned int variable from a buffer
unsigned int unPackUInt(uint8_t buf[], uint8_t ofs) {
  unsigned int temp;
  memcpy(&temp, buf + ofs, sizeof(unsigned int));
  return temp;
}


// Pack the binary data for a unsigned int variable into a buffer for a bitstream
void packByte(uint8_t var, uint8_t buf[], uint8_t ofs){
  memcpy(buf+ofs, &var, sizeof(uint8_t));
}
// UnPack the binary data for a unsigned int variable from a buffer
uint8_t unPackByte(uint8_t buf[], uint8_t ofs) {
  uint8_t temp;
  memcpy(&temp, buf + ofs, sizeof(uint8_t));
  return temp;
}
