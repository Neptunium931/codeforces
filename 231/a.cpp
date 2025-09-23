#include <iostream>

auto
main(int argc, char *argv[]) -> int
{
  int t;
  std::cin >> t;

  int r = 0;
  while (t--)
  {
    int a, b, c;
    std::cin >> a >> b >> c;
    r += (a + b + c) >= 2 ? 1 : 0;
  }
  std::cout << r << std::endl;

  return 0;
}
