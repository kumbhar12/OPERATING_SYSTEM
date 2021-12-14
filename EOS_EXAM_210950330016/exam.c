#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[]){

    unsigned char read_buffer[128];
    pid_t id;
    int pfd[2];     //Array of two integers
    pipe(pfd);      //Pipe is created

    id = fork();         //Child process is created using fork
    if(0 == id){
        //Child Process
        read(pfd[0],read_buffer,128);
        printf("In Child: %s\n", read_buffer);
        close(pfd[0]);
    }else{
        //Parent Process
         char *filename = "dictionary.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        write(pfd[1],&ch,15);
        close(pfd[1]);
    }
    return 0;
}