#include <mruby.h>

struct A {
  int x;
};


void
mrb_dummy_c99gem_gem_init(mrb_state* mrb)
{
  struct A a = (struct A) { .x = 0 };
  a.x += 1;
}

void
mrb_dummy_c99gem_gem_final(mrb_state* mrb)
{
}
