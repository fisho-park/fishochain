---
content_title: Uninstall FOC
---

If you have previously built FOC from source and now wish to install the prebuilt binaries, or to build from source again, it is recommended to run the `eosio_uninstall.sh` script within the `eos/scripts` folder:

```sh
$ cd ~/eosio/eos
$ sudo ./scripts/eosio_uninstall.sh
```

[[info | Uninstall Dependencies]]
| The uninstall script will also prompt the user to uninstall FOC dependencies. This is recommended if installing prebuilt FOC binaries or building FOC for the first time.
