#include <iostream>
#include <sstream>

int
sToI(std::string s)
{
}

int
iToS(int i)
{
  std::string s;
  while (i > 26)
  {
    s += (char)(i % 26 + 'A');
    i -= 26;
  }
}

int
main(int argc, char *argv[])
{
  int n;
  std::string s;
  std::cin >> n;
  int r, x;
  for (int i = 0; i < n; ++i)
  {
    std::cin >> s;
    if (s[0] == 'R' && s[1] >= '0' && s[1] <= '9' &&
        s.find('C') != std::string::npos)
    {
      std::istringstream sstream(s);
      char R, C;
      sstream >> R >> r >> C >> x;
      std::cout << R << " " << r << " " << C << " " << x << std::endl;
    }
    else
    {
      int i;
      for (i = 0; s[i] >= 'A' && s[i] <= 'Z'; ++i)
        ;
      std::istringstream sstream1(s.substr(0, i));
      std::istringstream sstream2(s.substr(i));
      std::string t;
      sstream1 >> t;
      sstream2 >> r;
      std::cout << t << " " << r << std::endl;
    }
  }
  return 0;
}
