#include "Oliver/Constant.hpp"

#include <boost/ut.hpp>
using namespace arietta;
using namespace boost::ut;

namespace {

suite<"Constant"> _ = [] {
  "Sub"_test = [] {
    expect(1 == 1);
    expect(2 == 2);
    C<5> c;
    expect(c.value == 5);
  };
};

} // namespace