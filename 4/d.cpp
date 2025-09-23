#include <iostream>
#include <list>
#include <vector>

int
main(int argc, char *argv[])
{
  int n, w, h;
  std::cin >> n >> w >> h;
  std::list<std::pair<int, int>> l;
  std::vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    int x, y;
    std::cin >> x >> y;
    for (auto it = l.begin(); it != l.end(); it++)
    {
      std::cout << "asas" << std::endl;
      auto const &p = *it;
      if (p.first < x && p.second < y)
      {
        l.insert(it, { x, y });
        v.push_back(i);
        break;
      }
      if (it++ == l.end() && x > l.end()->first && y > l.end()->second)
      {
        l.push_back({ x, y });
        v.push_back(i);
        break;
      }
    }
  }
  std::cout << v.size() << std::endl;
  for (auto const &p : v)
  {
    std::cout << p + 1 << std::endl;
  }
  return 0;
}
