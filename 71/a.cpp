#include <iostream>

int
main(int argc, char *argv[])
{
  int n;
  std::cin >> n;
  std::string s;
  while (n--)
  {
    std::cin >> s;
    if (s.size() < 11)
    {
      std::cout << s << std::endl;
      continue;
    }
    std::cout << s[0] << s.size() - 2 << s[s.size() - 1] << std::endl;
  }

  return 0;
}
