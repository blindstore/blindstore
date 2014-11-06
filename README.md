## Introduction to Blindstore

[Blindstore](https://blindstore.github.io/) is a private information retrieval data store.
It provides an online lookup service which returns the correct answer without ever knowing what the question was. 

**Currently this repo is a stub**.

* For the core cryptography implementation, see [libshe](https://github.com/blindstore/libshe).
* For a working proof of concept of the Blindstore concept, please see the [blindstore-old-scarab repository](https://github.com/blindstore/blindstore-old-scarab). The implementation there is based on another encryption scheme.

This repo will contain an implementation of Blindstore in C++ based on the V-DGHV scheme of somewhat homomorphic encryption ([libshe](https://github.com/blindstore/libshe)) presented in [1].

## Disclaimer

The library presented here is beta software and should not be used for any mission critical applications. No warranty expressed or implied is given.

## References

[1] Yi, Xun; Kaosar, Mohammed Golam; Paulet, Russell; Bertino, Elisa, ["Single-Database Private Information Retrieval from Fully Homomorphic Encryption"](http://dx.doi.org/10.1109/TKDE.2012.90), Knowledge and Data Engineering, IEEE Transactions on , vol.25, no.5, pp.1125,1134, May 2013
