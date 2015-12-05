#include "get_n_vertices_test.h"

#include <iostream>

#include "create_empty_graph.h"
#include "create_k2_graph.h"
#include "get_n_vertices.h"

void get_n_vertices_test() noexcept
{
  {
    const auto g = create_empty_graph();
    assert(get_n_vertices(g) == 0);
  }
  {
    const auto g = create_k2_graph();
    assert(get_n_vertices(g) == 2);
  }

  std::cout << __func__ << ": OK" << '\n';
}
