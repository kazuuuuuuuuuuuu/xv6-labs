#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char const *argv[])
{
	// 参数必须为2 第一个参数是程序名称 第二个是需要睡眠的时间
	if(argc!=2)
	{
		// 2 代表标准出错
		fprintf(2, "usage: sleep <time>\n");
		exit(1);
	}	

	int num = atoi(argv[1]);

	sleep(num);

	exit(0);
}