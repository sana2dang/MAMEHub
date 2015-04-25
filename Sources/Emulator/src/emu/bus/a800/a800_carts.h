// license:BSD-3-Clause
// copyright-holders:etabeta
#ifndef __A800_CARTS_H
#define __A800_CARTS_H


#include "emu.h"

#include "rom.h"
#include "oss.h"
#include "sparta.h"

static SLOT_INTERFACE_START(a800_left)
	SLOT_INTERFACE_INTERNAL("a800_8k",       A800_ROM)
	SLOT_INTERFACE_INTERNAL("a800_8k_right", A800_ROM)
	SLOT_INTERFACE_INTERNAL("a800_16k",      A800_ROM)
	SLOT_INTERFACE_INTERNAL("a800_phoenix",  A800_ROM)  // not really emulated at this stage
	SLOT_INTERFACE_INTERNAL("a800_bbsb",     A800_ROM_BBSB)
	SLOT_INTERFACE_INTERNAL("a800_oss8k",    A800_ROM_OSS8K)
	SLOT_INTERFACE_INTERNAL("a800_oss034m",  A800_ROM_OSS34)
	SLOT_INTERFACE_INTERNAL("a800_oss043m",  A800_ROM_OSS43)
	SLOT_INTERFACE_INTERNAL("a800_ossm091",  A800_ROM_OSS91)
	SLOT_INTERFACE_INTERNAL("a800_williams", A800_ROM_WILLIAMS)
	SLOT_INTERFACE_INTERNAL("a800_diamond",  A800_ROM_EXPRESS)
	SLOT_INTERFACE_INTERNAL("a800_express",  A800_ROM_EXPRESS)
	SLOT_INTERFACE_INTERNAL("a800_sparta",   A800_ROM_SPARTADOS)    // this is a passthru cart with unemulated (atm) subslot
	SLOT_INTERFACE_INTERNAL("a800_blizzard", A800_ROM)
	SLOT_INTERFACE_INTERNAL("a800_turbo64",  A800_ROM_TURBO)
	SLOT_INTERFACE_INTERNAL("a800_turbo128", A800_ROM_TURBO)
	SLOT_INTERFACE_INTERNAL("a800_tlink2",   A800_ROM_TELELINK2)
	SLOT_INTERFACE_INTERNAL("a800_sitsa",    A800_ROM_MICROCALC)
	SLOT_INTERFACE_INTERNAL("a800_corina",   A800_ROM)  // NOT SUPPORTED YET!
	SLOT_INTERFACE_INTERNAL("xegs",          XEGS_ROM)
SLOT_INTERFACE_END

static SLOT_INTERFACE_START(a800_right)
	SLOT_INTERFACE_INTERNAL("a800_8k_right", A800_ROM)
SLOT_INTERFACE_END

static SLOT_INTERFACE_START(xegs_carts)
	SLOT_INTERFACE_INTERNAL("xegs",          XEGS_ROM)
SLOT_INTERFACE_END

static SLOT_INTERFACE_START(a5200_carts)
	SLOT_INTERFACE_INTERNAL("a5200",         A800_ROM)
	SLOT_INTERFACE_INTERNAL("a5200_2chips",  A5200_ROM_2CHIPS)
	SLOT_INTERFACE_INTERNAL("a5200_bbsb",    A5200_ROM_BBSB)
SLOT_INTERFACE_END

#endif