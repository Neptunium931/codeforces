#include <iostream>

int
main(int argc, char *argv[])
{
  int n;
  std::cin >> n;
  int a, g, A = 0, G = 0;
  while (n--)
  {
    std::cin >> a >> g;
    if (A + a - G < 500)
    {
      A += a;
      std::cout << "A";
      continue;
    }
    G += g;
    std::cout << "G";
  }

  return 0;
}
