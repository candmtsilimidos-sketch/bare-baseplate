# Architecture Targets

This baseplate ships with zero architecture-specific code.

To build for a target CPU (`x86_64`, `aarch64`, or `riscv64`):
1. Create `arch/<target>/` (for example, `arch/x86_64/`).
2. Add your bootloader entry stub and `linker.ld` inside that folder.
3. Have your boot stub call `bp_arch_early_init()` (optional) and jump to `bp_kmain(context)`.
4. Build with `make ARCH=<target> CROSS_COMPILE=<prefix>-`.
