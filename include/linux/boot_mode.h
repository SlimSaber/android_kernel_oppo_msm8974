/************************************************************ 
** Copyright (C), 2013-2016, OPPO Mobile Comm Corp., Ltd
** All rights reserved. 
** Author: He Wei
************************************************************/
#ifndef _BOOT_MODE_H
#define _BOOT_MODE_H

enum{
	MSM_BOOT_MODE__NORMAL,
	MSM_BOOT_MODE__FASTBOOT,
	MSM_BOOT_MODE__RECOVERY,
	MSM_BOOT_MODE__FACTORY,
	MSM_BOOT_MODE__RF,
	MSM_BOOT_MODE__WLAN,
	MSM_BOOT_MODE__CHARGE,
};

int get_boot_mode(void);

#endif /* _BOOT_MODE_H */
