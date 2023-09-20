// 7. From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValidIPAddress(const char *ipAddress)
{
  char parts[4][4];
  int numParts = sscanf(ipAddress, "%3[^.].%3[^.].%3[^.].%3[^.]", parts[0], parts[1], parts[2], parts[3]);

  if (numParts != 4)
  {
    return false;
  }

  for (int i = 0; i < 4; i++)
  {
    int num = atoi(parts[i]);
    if (num < 0 || num > 255)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  const char *ipAddresses[] = {
      "192.168.0.1",
      "127.0.0.1",
      "10.0.0.256",
      "172.16.0.0",
      "8.8.8.8",
      "256.0.0.0",
      "abc.def.ghi.jkl"};

  int numAddresses = sizeof(ipAddresses) / sizeof(ipAddresses[0]);

  // Check the validity of each IP address
  for (int i = 0; i < numAddresses; i++)
  {
    const char *ipAddress = ipAddresses[i];
    bool isValid = isValidIPAddress(ipAddress);
    printf("%s is %svalid.\n", ipAddress, isValid ? "" : "in");
  }

  return 0;
}
