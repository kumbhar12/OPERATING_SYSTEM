#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>


int main()
{
    int fd;
    fd = open("sytest.txt", O_CREAT | O_WRONLY | O_APPEND);

    if(-1==fd)
    {
        perror("Error in open");
        return -1;
    }

    printf("file is created successfully\n");
    write(fd, "thank you parshya\n", sizeof("thank you parshya\n"));
    write(fd, "from aniket\n", sizeof("from aniket\n"));
    close(fd);
    
    
    return 0;
} 