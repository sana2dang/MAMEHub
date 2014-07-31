	/**********************************************************************

**********************************************************************/

#include "neogeo_carts.h"

SLOT_INTERFACE_START(neogeo_cart)
	/* Standard cart with banking */
	SLOT_INTERFACE_INTERNAL("rom",  NEOGEO_ROM)

	/* Custom MslugX protection*/
	SLOT_INTERFACE_INTERNAL("rom_mslugx",  NEOGEO_MSLUGX_CART)
	/* Custom Fatal Fury 2 protection */
	SLOT_INTERFACE_INTERNAL("rom_fatfur2",  NEOGEO_FATFURY2_CART)
	/* Custom KOF98 protection */
	SLOT_INTERFACE_INTERNAL("rom_kof98",  NEOGEO_KOF98_CART)

	/* These use SMA for prg + CMC42 for gfx */
	SLOT_INTERFACE_INTERNAL("rom_sma",  NEOGEO_SMA_CART)
	SLOT_INTERFACE_INTERNAL("rom_sma_kof99",  NEOGEO_SMA_KOF99_CART)
	SLOT_INTERFACE_INTERNAL("rom_sma_garou",  NEOGEO_SMA_GAROU_CART)
	SLOT_INTERFACE_INTERNAL("rom_sma_garouh",  NEOGEO_SMA_GAROUH_CART)
	SLOT_INTERFACE_INTERNAL("rom_sma_mslug3",  NEOGEO_SMA_MSLUG3_CART)
	/* These use SMA for prg + CMC50 for gfx (& audiocpu) */
	SLOT_INTERFACE_INTERNAL("rom_sma_kof2000",  NEOGEO_SMA_KOF2000_CART)
	/* only CMC42 for gfx */
	SLOT_INTERFACE_INTERNAL("rom_cmc_zupapa",  NEOGEO_CMC_ZUPAPA_CART)
	SLOT_INTERFACE_INTERNAL("rom_cmc_mslug3h",  NEOGEO_CMC_MSLUG3H_CART)
	SLOT_INTERFACE_INTERNAL("rom_cmc_ganryu",  NEOGEO_CMC_GANRYU_CART)
	SLOT_INTERFACE_INTERNAL("rom_cmc_s1945p",  NEOGEO_CMC_S1945P_CART)
	SLOT_INTERFACE_INTERNAL("r_cmc_preisle2",  NEOGEO_CMC_PREISLE2_CART)
	SLOT_INTERFACE_INTERNAL("r_cmc_bangbead",  NEOGEO_CMC_BANGBEAD_CART)
	SLOT_INTERFACE_INTERNAL("rom_cmc_nitd",  NEOGEO_CMC_NITD_CART)
	SLOT_INTERFACE_INTERNAL("r_cmc_sengoku3",  NEOGEO_CMC_SENGOKU3_CART)
	SLOT_INTERFACE_INTERNAL("r_cmc_kof99k",  NEOGEO_CMC_KOF99K_CART)
	/* only CMC50 for gfx (& audiocpu)  */
	SLOT_INTERFACE_INTERNAL("r_cmc_kof2001",  NEOGEO_CMC_KOF2001_CART)
	SLOT_INTERFACE_INTERNAL("r_cmc_kof2000n",  NEOGEO_CMC_KOF2000N_CART)
	/* CMC50 for gfx (& audiocpu) + NEOPCM2 for YM scramble  */
	SLOT_INTERFACE_INTERNAL("r_pc2_mslug4",  NEOGEO_PCM2_MSLUG4_CART)
	SLOT_INTERFACE_INTERNAL("r_pc2_rotd",  NEOGEO_PCM2_ROTD_CART)
	SLOT_INTERFACE_INTERNAL("r_pc2_pnyaa",  NEOGEO_PCM2_PNYAA_CART)
	SLOT_INTERFACE_INTERNAL("r_ms4plus",  NEOGEO_PCM2_MS4PLUS_CART) // regular encryption but external S1 rom

	/* CMC50 for gfx (& audiocpu) + NEOPCM2 for YM scramble + additonal prg scramble  */
	SLOT_INTERFACE_INTERNAL("r_k2_kof2002",  NEOGEO_KOF2002_KOF2002_CART)
	SLOT_INTERFACE_INTERNAL("r_k2_matrim",  NEOGEO_KOF2002_MATRIM_CART)
	SLOT_INTERFACE_INTERNAL("r_k2_samsh5",  NEOGEO_KOF2002_SAMSHO5_CART)
	SLOT_INTERFACE_INTERNAL("r_k2_sams5s",  NEOGEO_KOF2002_SAMSHO5SP_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k2pls",  NEOGEO_KOF2002_KF2K2PLS_CART) // regular encryption but external S1 rom

	/* CMC50 for gfx (& audiocpu) + NEOPCM2 for YM scramble + PVC protection/encryption */
	SLOT_INTERFACE_INTERNAL("r_pv_mslug5",  NEOGEO_PVC_MSLUG5_CART)
	SLOT_INTERFACE_INTERNAL("r_pv_svc",  NEOGEO_PVC_SVC_CART)
	SLOT_INTERFACE_INTERNAL("r_pv_kf2k3",  NEOGEO_PVC_KOF2003_CART)
	SLOT_INTERFACE_INTERNAL("r_pv_kf2k3h",  NEOGEO_PVC_KOF2003H_CART)

	/* 100% bootleg logic */
	SLOT_INTERFACE_INTERNAL("r_garoubl",  NEOGEO_BOOTLEG_GAROUBL_CART)
	SLOT_INTERFACE_INTERNAL("r_cthd2003",  NEOGEO_BOOTLEG_CTHD2003_CART)
	SLOT_INTERFACE_INTERNAL("r_cthd2003sp",  NEOGEO_BOOTLEG_CT2K3SP_CART)
	SLOT_INTERFACE_INTERNAL("r_cthd2003sa",  NEOGEO_BOOTLEG_CT2K3SA_CART)
	SLOT_INTERFACE_INTERNAL("r_kf10thep",  NEOGEO_BOOTLEG_KF10THEP_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k5uni",  NEOGEO_BOOTLEG_KF2K5UNI_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k4se",  NEOGEO_BOOTLEG_KF2K4SE_CART)
	SLOT_INTERFACE_INTERNAL("r_svcplus",  NEOGEO_BOOTLEG_SVCPLUS_CART)
	SLOT_INTERFACE_INTERNAL("r_svcplusa",  NEOGEO_BOOTLEG_SVCPLUSA_CART)
	SLOT_INTERFACE_INTERNAL("r_samsho5b",  NEOGEO_BOOTLEG_SAMSHO5B_CART)
	SLOT_INTERFACE_INTERNAL("r_kof97oro",  NEOGEO_BOOTLEG_KOF97ORO_CART) // missing from softlist?
	SLOT_INTERFACE_INTERNAL("r_lans2004",  NEOGEO_BOOTLEG_LANS2004_CART)
	SLOT_INTERFACE_INTERNAL("r_kof10th",  NEOGEO_BOOTLEG_KOF10TH_CART)
	SLOT_INTERFACE_INTERNAL("r_kog",  NEOGEO_BOOTLEG_KOG_CART)

	/* mixed original and bootleg logic */
	SLOT_INTERFACE_INTERNAL("r_mslug3b6",  NEOGEO_BOOTLEG_HYBRID_MSLUG3B6_CART)
	SLOT_INTERFACE_INTERNAL("r_kof2002b",  NEOGEO_BOOTLEG_HYBRID_KOF2002B_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k2mp",  NEOGEO_BOOTLEG_HYBRID_KF2K2MP_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k2mp2",  NEOGEO_BOOTLEG_HYBRID_KF2K2MP2_CART)

	SLOT_INTERFACE_INTERNAL("r_matrimbl",  NEOGEO_BOOTLEG_HYBRID_MATRIMBL_CART)
	SLOT_INTERFACE_INTERNAL("r_ms5plus",  NEOGEO_BOOTLEG_HYBRID_MS5PLUS_CART)
	SLOT_INTERFACE_INTERNAL("r_svcboot",  NEOGEO_BOOTLEG_HYBRID_SVCBOOT_CART)
	SLOT_INTERFACE_INTERNAL("r_svcsplus",  NEOGEO_BOOTLEG_HYBRID_SVCSPLUS_CART)

	SLOT_INTERFACE_INTERNAL("r_kf2k3bl",  NEOGEO_BOOTLEG_HYBRID_KF2K3BL_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k3pl",  NEOGEO_BOOTLEG_HYBRID_KF2K3PL_CART)
	SLOT_INTERFACE_INTERNAL("r_kf2k3upl",  NEOGEO_BOOTLEG_HYBRID_KF2K3UPL_CART)







SLOT_INTERFACE_END