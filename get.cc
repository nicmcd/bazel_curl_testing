#include <cstdio>

#include <string>

#include "usecurl.h"


int main(int _argc, char** _argv) {
  if (_argc < 2) {
    printf("usage: get <url>\n");
    return -1;
  }
  printf("requesting from '%s'\n", _argv[1]);
  curl_get(std::string(_argv[1]));
  return 0;
}
