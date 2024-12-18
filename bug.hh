function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function main(): void {
  echo bar(5);
}

This code will produce the output 12, as expected. However, if the type of x in foo is changed to float, then the output becomes 12.0, which might be unexpected depending on the context. This is because Hack will automatically promote the return type of foo to float when x is a float, even if the rest of the function is integer arithmetic.