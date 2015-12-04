#include "get_n_edges.h"

#include <iostream>

#include "create_empty_graph.h"

void get_n_edges_test() noexcept
{
  const auto g = create_empty_graph();
  assert(get_n_edges(g) == 0);

  std::cout << __func__ << ": OK" << '\n';
}
