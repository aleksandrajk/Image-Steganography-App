#include <iostream>
#include "Image.h"


int main(int argc, char** argv) {
  // Image test("/Users/alexandra/Downloads/2122_PJC_pl_s24228/images/lake.jpg");
  test.encodeMessage("This is my secret messages to hide");
  test.write("Secret_lake.jpg");

  char buffer[256] = {0};
  size_t len = 0;
  
  // test.decodeMessage(buffer, &len);

    return 0;
}
