[![Built with po-util](https://rawgit.com/nrobinson2000/po-util/master/images/built-with-po-util.svg)](https://po-util.com)

# git-test

A Particle project named git-test

This is a proof of concept created in response to: <https://community.particle.io/t/accessing-git-meta-data-in-using-c-preprocessor-directives-and-or-makefile/47415?u=nrobinson2000>

The `generate` script creates a `metadata.h` header file in `src/` that contains defines repository information so that it can be included into the `git-test.ino` application code.

To test this project you can do the following:

```
git clone https://github.com/nrobinson2000/git-test
cd git-test
./generate
po photon build-beta
```
