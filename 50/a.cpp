#include <iostream>

int
main(int argc, char *argv[])
{
  int m, n;
  std::cin >> m >> n;
  if (m % 2 == 0)
  {
    std::cout << m / 2 * n << std::endl;
    return 0;
  }
  int r = m / 2 * n;
  r += n / 2;
  std::cout << r << std::endl;
  return 0;
}
