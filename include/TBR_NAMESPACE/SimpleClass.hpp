#ifndef TBRU_NAMESPACE_SIMPLECLASS_H
#define TBRU_NAMESPACE_SIMPLECLASS_H

namespace TBR_NAMESPACE {
class SimpleClass {
  int number;

 public:
  SimpleClass();
  void setNumber(int _number);
  int getNumber() const;
};
}  // namespace TBR_NAMESPACE

#endif