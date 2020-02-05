# Bios Boot Tutorial

The `bios-boot-tutorial.py` script simulates the FOC bios boot sequence.

``Prerequisites``:

1. Python 3.x
2. CMake
3. git
4. g++
5. build-essentials
6. pip3
7. openssl
8. curl
9. jq
10. psmisc


``Steps``:

1. Install eosio binaries by following the steps outlined in below tutorial
[Install eosio binaries](https://github.com/eosio/fishochain/tree/release/2.0.x#mac-os-x-brew-install).

2. Install eosio.cdt version 1.6.3 binaries by following the steps outlined in below tutorial
[Install eosio.cdt binaries](https://github.com/eosio/eosio.cdt/tree/release/1.6.x#binary-releases).

3. Compile `foc.contracts` version 1.8.x.

```bash
$ cd ~
$ git clone https://github.com/fisho-park/eosio.contracts.git eosio.contracts-1.8.x
$ cd ./eosio.contracts-1.8.x/
$ git checkout release/1.8.x
$ ./build.sh
$ cd ./build/contracts/
$ pwd

```

4. Make note of the directory where the contracts were compiled. 
The last command in the previous step printed on the bash console the contracts' directory, make note of it, we'll reference it from now on as `FOC_OLD_CONTRACTS_DIRECTORY`.

5. Install eosio.cdt version 1.7.0 binaries by following the steps outlined in below tutorial, make sure you uninstall the previous one first.
[Install eosio.cdt binaries](https://github.com/eosio/eosio.cdt/tree/release/1.7.x#binary-releases)

6. Compile `foc.contracts` sources version 1.9.0

```bash
$ cd ~
$ git clone https://github.com/fisho-park/foc.contracts.git
$ cd ./foc.contracts/
$ git checkout release/1.9.x
$ ./build.sh
$ cd ./build/contracts/
$ pwd

```

7. Make note of the directory where the contracts were compiled
The last command in the previous step printed on the bash console the contracts' directory, make note of it, we'll reference it from now on as `FOC_CONTRACTS_DIRECTORY`


8. Launch the `bios-boot-tutorial.py` script. 
The command line to launch the script, make sure you replace `FOC_OLD_CONTRACTS_DIRECTORY` and `FOC_CONTRACTS_DIRECTORY` with actual directory paths.

```bash
$ cd ~
$ git clone https://github.com/fisho-park/fishochain.git
$ cd ./eos/tutorials/bios-boot-tutorial/
$ python3 bios-boot-tutorial.py --clfoc="clfoc --wallet-url http://127.0.0.1:6666 " --nodefoc=nodefoc --kfocd=kfocd --contracts-dir="FOC_CONTRACTS_DIRECTORY" --old-contracts-dir="FOC_OLD_CONTRACTS_DIRECTORY" -w -a
```

6. At this point, when the script has finished running without error, you have a functional FOC based blockchain running locally with an latest version of `foc.system` contract, 31 block producers out of which 3 active, `foc` account resigned, 200k+ accounts with staked tokens, and votes allocated to each block producer. Enjoy exploring your freshly booted blockchain.
