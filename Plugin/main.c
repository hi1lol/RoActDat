

#include <psp2kern/kernel/cpu.h>
#include <psp2kern/kernel/modulemgr.h>
#include <psp2kern/kernel/sysmem.h>
#include <psp2kern/io/fcntl.h>

#include <stdio.h>
#include <string.h>

#include <taihen.h>

#define MOUNT_POINT_ID 0x500

void _start() __attribute__ ((weak, alias("module_start")));
int module_start(SceSize args, void *argp) {
    ksceIoUmount(0x500, 0, 0, 0);
    ksceIoMount(0x500,NULL, 1, 0, 0, 0);

	return SCE_KERNEL_START_SUCCESS;
}

int module_stop(SceSize args, void *argp) {
	return SCE_KERNEL_STOP_SUCCESS;
}
