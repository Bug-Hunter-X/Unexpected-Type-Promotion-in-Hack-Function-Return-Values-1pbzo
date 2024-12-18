function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function main(): void {
  echo bar(5);
}

Alternatively, you can explicitly specify the return type of foo:

function foo(x: float): float {
  return x + 1.0;
}

function bar(x: float): float {
  return foo(x) * 2.0;
}

function main(): void {
  echo bar(5.0);
}

This ensures type safety and consistent behavior.