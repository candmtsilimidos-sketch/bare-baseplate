#ifndef BASEPLATE_H
#define BASEPLATE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* Opaque boot payload: any architecture can pass its own boot struct */
typedef void* bp_boot_context_t;

/* The single universal entry point for every community kernel */
void bp_kmain(bp_boot_context_t context);

/* Optional hook if a target architecture needs early setup before bp_kmain */
void bp_arch_early_init(void);

#endif
