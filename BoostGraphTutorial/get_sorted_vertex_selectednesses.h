#ifndef GET_SORTED_VERTEX_SELECTEDNESSES_H
#define GET_SORTED_VERTEX_SELECTEDNESSES_H

#include <algorithm>
#include "get_vertex_selectednesses.h"

///Collect all the vertex selectednesses from a graph
///and sort these before returning
///TODO: generalize the return type
template <typename graph>
std::vector<bool> get_sorted_vertex_selectednesses(
  const graph& g
) noexcept
{
  auto v = get_vertex_selectednesses(g);
  std::sort(std::begin(v),std::end(v));
  return v;
}

#endif // GET_SORTED_VERTEX_SELECTEDNESSES_H