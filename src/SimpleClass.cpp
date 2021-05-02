#include <TBR_NAMESPACE/SimpleClass.hpp>

using namespace TBR_NAMESPACE;

SimpleClass::SimpleClass()
    : number{0} {}

void SimpleClass::setNumber(int _number) {
  number = _number;
}
int SimpleClass::getNumber() const {
  return number;
}