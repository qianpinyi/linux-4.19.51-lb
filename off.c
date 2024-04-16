#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main()
{
        int rc = syscall(345,0);
        if (rc == -1)
        	printf("failed, errno=%d\n",errno);
        else printf("succeess!\n");
        return 0;
}
