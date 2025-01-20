enum Color {
  red,
  green,
  blue,
};

int main() {
  // This section is on unscoped enums. These are handy for sets of values
  Color apple = red;
  Color shirt = green;
  Color cup = blue;

  // The problem with the above is that unscoped enums can pollute the global
  // namespace. In addition, they are not technically type safe, since they
  // convert to integrals. A solution is scoped enums as shown here:
  enum class Fruit {
    banana,
    apple,
  };
  // The scoped enumeration above places its enumerators in the block scope they
  // are defined in as opposed to the global namespace. They also don't
  // inherently convert to integrals. To access the enumerators, use the scope
  // resolution operator
  Fruit fruit = Fruit::apple;
}
