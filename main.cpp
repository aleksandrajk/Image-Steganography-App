#include <iostream>
#include "Image.h"


int main(int argc, char** argv) {

  test.encodeMessage("This is my secret messages to hide");
  test.write("Secret_lake.jpg");

  char buffer[256] = {0};
  size_t len = 0;
  
  // test.decodeMessage(buffer, &len);

    return 0;
}
