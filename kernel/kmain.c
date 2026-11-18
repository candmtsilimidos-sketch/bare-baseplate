#include "../include/baseplate.h"

/* Weak default: overridden automatically if an arch/ folder provides one */
__attribute__((weak)) void bp_arch_early_init(void) {
    /* Intentionally blank */
}

/* Builders write their entire kernel starting here */
void bp_kmain(bp_boot_context_t context) {
    (void)context;

    /* Pure freestanding infinite loop */
    while (true) {
        /* Custom kernel logic goes here */
    }
}
