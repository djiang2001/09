#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  open("Test",O_RDONLY);
  read(100,"Test",20);
  close(100);


  return 0;
}
