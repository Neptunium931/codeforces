#include <iostream>

int
main(int argc, char *argv[])
{
  int n, k, t;
  std::cin >> n >> k >> t;
  int full = n * t / 100;
  int part = (n * t - 100 * full) * k / 100;
  for (int i = 0; i < full; ++i)
    std::cout << k << " ";
  if (full < n)
  {
    std::cout << part << " ";
    for (int i = 1; i < n - full; ++i)
      std::cout << "0 ";
  }
  return 0;
}
