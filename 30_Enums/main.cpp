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
  // namespace
}
