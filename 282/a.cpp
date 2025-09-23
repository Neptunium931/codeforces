#include <iostream>

auto
main(int argc, char *argv[]) -> int
{
  int n;
  std::cin >> n;

  int x = 0;
  while (n--)
  {
    char c[10];
    std::cin >> c;
    if (c[1] == '-')
      x--;
    else
      x++;
  }
  std::cout << x << std::endl;

  return 0;
}
