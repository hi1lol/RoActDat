#include <stdio.h>
#include <stdlib.h>

#include <psp2/kernel/processmgr.h>
#include <psp2/ctrl.h>
#include <psp2/io/fcntl.h>
#include <psp2/io/stat.h>
#include <psp2/display.h>

#include <stdarg.h>
#include <string.h>


int main()
{
            //Make TM0 R/O (untill reboot)
            void *buf = malloc(0x100);
            vshIoUmount(0x500, 0, 0, 0);
            _vshIoMount(0x500, 0, 1, buf);
}
