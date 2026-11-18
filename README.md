# Bare Baseplate Kernel

A zero-architecture, unopinionated kernel baseplate for building custom operating systems from scratch.

## Quick Start
1. Click **Use this template** on GitHub to create your own kernel repository.
2. Add your target hardware boot stub and linker script inside `arch/<target>/`.
3. Write your custom kernel starting inside `bp_kmain()` in `kernel/kmain.c`.
4. Compile with `make ARCH=<target> CROSS_COMPILE=<prefix>-`.
