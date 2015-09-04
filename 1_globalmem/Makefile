obj-m := globalmem.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
CC = gcc

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
#	$(CC) -o test test.c


clean:
	rm -rf *.ko *.o *.mod.* *.symvers test1 test testm testt  *.c~ .mod* .cdata* .test* .tmp* *.order *.markers
