
#include <botan/botan.h>

void ED25519_FN(ed25519_randombytes_unsafe)(void* p, size_t len)
{
  static Botan::AutoSeeded_RNG rng;
  rng.randomize(static_cast<uint8_t*>(p), len);
}
