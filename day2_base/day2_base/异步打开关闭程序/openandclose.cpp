#include "stdlib.h"
#include <stdio.h>

int main()
{


	printf("\"C:\\Program Files\\NVIDIA Corporation\\OpenCL\"");
	//遇到文件命中带空格的  可以使用上面这种方式处理，比较好
	system("open.bat");
	system("taskkill /f /im BaiduNetdisk.exe");
}