functions {
  int integer_rng(int X) {
    int out = categorical_rng(rep_vector(inv(X), X));
    return out;
  }
}
