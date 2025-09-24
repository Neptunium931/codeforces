#include <iostream>

int
main(int argc, char *argv[])
{

  int n;
  std::cin >> n;
  int a{}, b{}, c{}, d{};
  while (n--)
  {
    int k;
    std::cin >> k;
    switch (k)
    {
    case 1:
      a++;
      break;
    case 2:
      b++;
      break;
    case 3:
      c++;
      break;
    case 4:
      d++;
      break;
    }
  }
  int t = d;
  t+= b/2;
  b = b % 2;
  if (a>c)
  {
    t += c;
    a -= c;
    c = 0;
  }
  else
  {
    t+=c;
    a=0;
  }
  if (b)
  {
    t++;
    a -= 2;
  }
  if (a>0)
  {
    t+= a/4;
    t+= (a%4) ? 1 : 0;
  }
  std::cout << t << std::endl;
  return 0;
}
