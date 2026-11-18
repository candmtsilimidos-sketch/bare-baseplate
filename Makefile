ARCH ?= generic
CROSS_COMPILE ?=

CC := $(CROSS_COMPILE)gcc
LD := $(CROSS_COMPILE)ld

CFLAGS := -std=c11 -ffreestanding -fno-stack-protector -fno-pic -Wall -Wextra -Iinclude

KERNEL_SRCS := $(wildcard kernel/*.c)
ARCH_SRCS   := $(wildcard arch/$(ARCH)/*.c)
OBJS        := $(KERNEL_SRCS:.c=.o) $(ARCH_SRCS:.c=.o)

all: kernel.o

kernel.o: $(OBJS)
	$(LD) -r $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) kernel.o
