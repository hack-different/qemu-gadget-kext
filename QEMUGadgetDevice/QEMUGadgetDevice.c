//
//  QEMUGadgetDevice.c
//  QEMUGadgetDevice
//
//  Created by Rick Mark on 3/3/22.
//

#include <mach/mach_types.h>

kern_return_t QEMUGadgetDevice_start(kmod_info_t * ki, void *d);
kern_return_t QEMUGadgetDevice_stop(kmod_info_t *ki, void *d);

kern_return_t QEMUGadgetDevice_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t QEMUGadgetDevice_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
