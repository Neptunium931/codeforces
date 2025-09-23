#include <iostream>

auto
main(int argc, char *argv[]) -> int
{
  int t, n, x;
  std::cin >> t;
  while (t--)
  {
    std::cin >> x;
    std::cin >> n;
    int sum{};
    for (int i = 0; i < n; ++i)
    {
      sum += (i % 2 == 0) ? x : -x;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
