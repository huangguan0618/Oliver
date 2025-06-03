#pragma once

template <auto v>
struct C{
    using type = C;
    using value_type = decltype(v);

    static constexpr auto value = v;
}