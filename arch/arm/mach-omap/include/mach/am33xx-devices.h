#ifndef __MACH_OMAP3_DEVICES_H
#define __MACH_OMAP3_DEVICES_H

#include <driver.h>
#include <sizes.h>
#include <mach/am33xx-silicon.h>
#include <mach/devices.h>
#include <mach/omap_hsmmc.h>

/* the device numbering is the same as in the TRM memory map (SPRUH73G) */

static inline struct device_d *am33xx_add_uart0(void)
{
	return omap_add_uart(0, AM33XX_UART0_BASE);
}

static inline struct device_d *am33xx_add_uart1(void)
{
	return omap_add_uart(1, AM33XX_UART1_BASE);
}

static inline struct device_d *am33xx_add_uart2(void)
{
	return omap_add_uart(2, AM33XX_UART2_BASE);
}

static inline struct device_d *am33xx_add_mmc0(struct omap_hsmmc_platform_data *pdata)
{
	return add_generic_device("omap3-hsmmc", 0, NULL,
			AM33XX_MMCHS0_BASE, SZ_4K, IORESOURCE_MEM, pdata);
}

#endif /* __MACH_OMAP3_DEVICES_H */