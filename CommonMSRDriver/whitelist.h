#pragma once

#include "ntdef.h"

#ifndef __cplusplus
typedef unsigned char bool;
static const bool true = 1;
static const bool false = 0;
#endif

#define EXTRACT_PCI_BUS(addr) (((addr) >> 16) & 0xFF)
#define EXTRACT_PCI_DEV(addr) (((addr) >> 11) & 0x1F)
#define EXTRACT_PCI_FUN(addr) (((addr) >> 8) & 0x07)
#define EXTRACT_PCI_OFF(addr) (((addr) >> 0) & 0xFF)

bool AllowMSRAccess(ULONG64 msrAddress);
bool AllowPCICFGAccess(UINT32 device, UINT32 offset);
