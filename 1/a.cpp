#include <iostream>

int
main(int argc, char *argv[])
{
  long long int n, m, a;
  std::cin >> n >> m >> a;
  long long int x = n / a;
  x += n % a ? 1 : 0;
  x = x ? x : 1;
  long long int y = m / a;
  y += m % a ? 1 : 0;
  y = y ? y : 1;
  std::cout << x * y << std::endl;
  return 0;
}
