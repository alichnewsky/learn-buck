#include <iostream>
#include <vector>
#include <range/v3/all.hpp>

#if 1
#include <spdlog/spdlog.h>

void hello_log_world(){
  auto console = spdlog::stdout_color_mt("console");
  console->info("Hello, world to spdlog!");
}
#endif
int main() {
  std::cout << "Hello, world. " << std::endl;
  hello_log_world();
  
  auto const xs = std::vector<int>({ 1, 2, 3, 4, 5 });
  auto const ys = xs
    | ranges::view::transform([](auto x) { return x * x; })
    | ranges::to_vector;
  for (auto const& i : ys) {
    std::cout << i << std::endl;
  }
  return 0;
}

