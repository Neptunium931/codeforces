#include <iostream>
#include <vector>

int
main(int argc, char *argv[])
{
  int n, k;
  std::cin >> n >> k;
  int a, r{};
  std::vector<int> v(n);
  for (int i = 0; i < n; ++i)
    std::cin >> v[i];
  int t = v[k - 1];
  for (auto const &i : v)
    if (i > 0 && i >= t)
      ++r;
  std::cout << r << std::endl;
  return 0;
}
