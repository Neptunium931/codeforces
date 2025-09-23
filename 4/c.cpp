#include <iostream>
#include <map>
#include <string>

int
main(int argc, char *argv[])
{
  int n;
  std::cin >> n;
  std::map<std::string, int> m{};
  std::string s;
  for (int i = 0; i < n; i++)
  {
    std::cin >> s;
    m[s]++;
    if (m[s] == 1)
    {
      std::cout << "OK" << std::endl;
      continue;
    }
    int x = m[s];
    std::cout << s << --x << std::endl;
  }
  return 0;
}
