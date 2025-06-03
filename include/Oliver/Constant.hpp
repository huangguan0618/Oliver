#pragma once

namespace Oliver{

template <auto v>
struct C{
    static constexpr auto value = v;
};

} //namespace Oliver