#include <stdio.h>
#include <fcntl.h>


#include <unistd.h>

int main(int argc, char *argv[]){

    int fd;
    char buf[14];

   /* write to the file */

    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

    if (fd == -1){
        printf("%s","Failed to create and open the file \n");
        exit(1);
    }

    // write function
    write(fd, "Hello World! \n", 14);

    close(fd);

    /* read the file */

    fd = open("myfile.txt", O_RDONLY);

    if(fd == -1){
        printf("Filed to open and read the file. \n");
        exit(1);
    }

    read(fd, buf, 14);
    buf[14] = '\0';

    close(fd);

    return 0;
}
