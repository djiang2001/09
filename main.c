#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int fd1 = open("Test",O_RDONLY);
  read(fd1,0,20);

  
  close(100);


  return 0;
}
