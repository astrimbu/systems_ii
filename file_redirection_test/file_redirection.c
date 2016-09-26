#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
  int fd1;
  int fd2;
  char* file1 = "./file1.txt";
  char* file2 = "./file2.txt";
  fd1 = open(file1, O_RDWR);
  int dup2_result = dup2(fd1, fd2);
  int write_result = write(fd2, "stuff", 5);
  int close1_result = close(fd1);
  int close2_result = close(fd2);
}
