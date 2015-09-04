#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	int devfd;
	int num = 0;
	char buf[64];

	devfd = open("/dev/globalmem", O_RDWR);
	if (devfd == -1) {
		printf("can't open /dev/globalmem\n");
		return -1;
	}

	printf("Wait for driver...\n");
  write(devfd, "abcde", 5);
  close(devfd);
  devfd = open("/dev/globalmem", O_RDWR);
	read(devfd, buf, 3);
	printf("read %s\n",buf);
	close(devfd);
	return 0;
}
