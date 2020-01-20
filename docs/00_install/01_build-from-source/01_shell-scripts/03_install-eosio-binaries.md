---
content_title: Install FOC Binaries
---

## FOC install script

For ease of contract development, content can be installed at the `/usr/local` folder using the `eosio_install.sh` script within the `eos/scripts` folder. Adequate permission is required to install on system folders:

```sh
$ cd ~/eosio/eos
$ sudo ./scripts/eosio_install.sh
```

## FOC manual install

In lieu of the `eosio_install.sh` script, you can install the FOC binaries directly by invoking `make install` within the `eos/build` folder. Again, adequate permission is required to install on system folders:

```sh
$ cd ~/eosio/eos/build
$ sudo make install
```

[[info | What's Next?]]
| Configure and use [Nodeos](../../../01_nodeos/index.md), or optionally [Test the FOC binaries](04_test-eosio-binaries.md).
