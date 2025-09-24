#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

auto split_on_slash = [](const std::string &s)
{
  std::vector<std::string> parts;
  std::stringstream ss(s);
  std::string token;
  while (std::getline(ss, token, '/'))
  {
    parts.push_back(token);
  }
  return parts;
};

int
main(int argc, char *argv[])
{
  int n;
  std::cin >> n;
  std::stack<std::string> path{};
  std::string c;
  while (n--)
  {
    std::cin >> c;
    if (c == "pwd")
    {
      auto printPath = [](std::stack<std::string> path)
      {
        std::string pwd{};
        while (!path.empty())
        {
          pwd = path.top() + "/" + pwd;
          path.pop();
        }
        if (pwd[0] != '/')
          pwd = "/" + pwd;
        std::cout << pwd << std::endl;
      };
      printPath(path);
      continue;
    }
    std::cin >> c;
    if (c[0] == '/')
    {
      path = std::stack<std::string>{};
      for (auto const &i : split_on_slash(c))
      {
        if (i == "..")
        {
          path.pop();
          continue;
        }
        path.push(i);
      }
      continue;
    }
    auto parts = split_on_slash(c);
    for (auto const &i : parts)
    {
      if (i == "..")
      {
        path.pop();
        continue;
      }
      path.push(i);
    }
  }
  return 0;
}
