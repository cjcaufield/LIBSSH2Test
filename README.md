# LIBSSH2Test

Demonstation of link errors with an OSX framework target and the libssh2 CocoaPod.

This is a minimal project with no modifications.  It includes a C++ header and source file with two libssh2 function calls.

Here are the errors:

```
Undefined symbols for architecture x86_64:
  "_EVP_aes_128_ctr", referenced from:
      _libssh2_crypt_method_aes128_ctr in libssh2.a(crypt.o)
     (maybe you meant: __libssh2_EVP_aes_128_ctr)
  "_EVP_aes_192_ctr", referenced from:
      _libssh2_crypt_method_aes192_ctr in libssh2.a(crypt.o)
     (maybe you meant: __libssh2_EVP_aes_192_ctr)
  "_EVP_aes_256_ctr", referenced from:
      _libssh2_crypt_method_aes256_ctr in libssh2.a(crypt.o)
     (maybe you meant: __libssh2_EVP_aes_256_ctr)
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```
