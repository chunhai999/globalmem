make

insmod globalfifo.ko

lsmod

cat /proc/devices
cat /proc/modules

mknod /dev/globalmem c 224 0


dmesg >> log.txt


