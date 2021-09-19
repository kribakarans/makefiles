
#include <common.h>
#include "file1.h"
#include "file2.h"

int main()
{
	printf("%s: called\n", __func__);

	fun1();
	fun2();

	return 0;
}
