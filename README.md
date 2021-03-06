# The Flurbo Project GUI

Flurbo is the first private open-source intergalactic decentralized anonymous free crypto currency based on CryptoNote that is used by more than 84 alien species to easily send money online throughout the galaxy and all dimensions. Wubba Lubba Dub Dub!

- [Bitcointalk](https://bitcointalk.org/index.php?topic=3119326.msg32241480)
- [Our Website](http://flurbo.cc)
- [Our Mining Pool](http://flurbo.cc/pool#)
- [Twitter](https://twitter.com/GetFlurbo)
- [Discord](https://discord.gg/D4RqCw3)
- [Telegram Group](https://t.me/flurbotalk)
- [Telegram Channel](https://t.me/flurbo)

# Mission

Everyone wants to extend the life of **Rick and Morty** for as long as possible, and everyone wants to see new seasons as soon as possible! We have a plan. The first step that we have taken upon ourselves is to create the **Flurbo** currency and send a **1,000,000,000 FLB** donation to **Dan Harmon** and **Justin Roiland**. The second and most important step is entirely up to you. "How can I help?" you ask? Just become a part of the **Flurbo community** and help it grow! Let's make Flurbo great! Rikki-tikki-tavi, bitch! Remember, it's all up to you and that's the waaaayyy the news goes! AIDS!

# How to start use Flurbo?

You can download Linux or Windows binaries of "**Flurbo Wallet**" CLI or GUI from [Flurbo Download Page](http://flurbo.cc/#download) and that's why I always say "Shumshumschilpiddydah!".

## Supporting the project

Flurbo is a 100% community-sponsored endeavor. If you want to join our efforts and help "The Flurbo Project" to grow, the easiest thing you can do is support the project financially. All funds received will go to promote Flurbo, make higher it's exchange rate and to pay all of necessary things, like seed nodes, so if you make decision to send donation please write message to [@iMrPoopybutthole](https://t.me/iMrPoopybutthole) after that and you will be rewarded! You can use next Bitcoin address for donation:

#### `      BTC: 3JxwkWq4uP7CaLXUDqwRwtj1kkKfxcXzF6      `

## Contributing

If you want to help out or maybe became a part of Flurbo developers, write to [@iMrPoopybutthole](https://t.me/iMrPoopybutthole) for a set of guidelines.

## License

See [LICENSE](LICENSE).

## Compiling the Flurbo GUI from source

### On Linux:

(Tested on Ubuntu 16.04 x86, 16.10 x64, Gentoo x64 and Linux Mint 18 "Sarah" - Cinnamon x64)

1. Install Flurbo dependencies

  - For Ubuntu and Mint

	`sudo apt install build-essential cmake libboost-all-dev miniupnpc libunbound-dev graphviz doxygen libunwind8-dev pkg-config libssl-dev libzmq3-dev`

  - For Gentoo

	`sudo emerge app-arch/xz-utils app-doc/doxygen dev-cpp/gtest dev-libs/boost dev-libs/expat dev-libs/openssl dev-util/cmake media-gfx/graphviz net-dns/unbound net-libs/ldns net-libs/miniupnpc net-libs/zeromq sys-libs/libunwind`

2. Grab an up-to-date copy of the flurbo-gui repository

	`git clone https://github.com/iMrPoopybutthole/flurbo-gui-wallet.git`

3. Go into the repository

	`cd flurbo-gui`

4. Install the GUI dependencies

  - For Ubuntu 16.04 x86

	`sudo apt install qtbase5-dev qt5-default qtdeclarative5-dev qml-module-qtquick-controls qml-module-qtquick-xmllistmodel qttools5-dev-tools qml-module-qtquick-dialogs`

  - For Ubuntu 16.04+ x64

    `sudo apt install qtbase5-dev qt5-default qtdeclarative5-dev qml-module-qtquick-controls qml-module-qtquick-xmllistmodel qttools5-dev-tools qml-module-qtquick-dialogs qml-module-qt-labs-settings libqt5qml-graphicaleffects`

  - For Linux Mint 18 "Sarah" - Cinnamon x64

    `sudo apt install qml-module-qt-labs-settings qml-module-qtgraphicaleffects`

  - For Gentoo

    `sudo emerge dev-qt/qtcore:5 dev-qt/qtdeclarative:5 dev-qt/qtquickcontrols:5 dev-qt/qtquickcontrols2:5 dev-qt/qtgraphicaleffects:5`

  - Optional : To build the flag `WITH_SCANNER`

    - For Ubuntu and Mint

      `sudo apt install qtmultimedia5-dev qml-module-qtmultimedia libzbar-dev`

    - For Gentoo

      The *qml* USE flag must be enabled.

      `emerge dev-qt/qtmultimedia:5 media-gfx/zbar`

5. Build the GUI

  - For Ubuntu and Mint

	`./build.sh`

  - For Gentoo

    `QT_SELECT=5 ./build.sh`

The executable can be found in the build/release/bin folder.

### On OS X:

1. Install Xcode from AppStore

2. Install [homebrew](http://brew.sh/)

3. Install [flurbo](https://github.com/flurbo-project/flurbo) dependencies:

  `brew install boost --c++11`

  `brew install openssl` - to install openssl headers

  `brew install pkgconfig`

  `brew install cmake`

  `brew install zeromq`

  *Note*: If cmake can not find zmq.hpp file on OS X, installing `zmq.hpp` from https://github.com/zeromq/cppzmq to `/usr/local/include` should fix that error.

4. Install Qt:

  `brew install qt5`  (or download QT 5.8+ from [qt.io](https://www.qt.io/download-open-source/))

  If you have an older version of Qt installed via homebrew, you can force it to use 5.x like so:
  
  `brew link --force --overwrite qt5`

5. Add the Qt bin directory to your path

    Example: `export PATH=$PATH:$HOME/Qt/5.8/clang_64/bin`

    This is the directory where Qt 5.x is installed on **your** system

6. Grab an up-to-date copy of the flurbo-gui repository

  `git clone https://github.com/iMrPoopybutthole/flurbo-gui-wallet.git`

7. Go into the repository

  `cd flurbo-gui`

8. Start the build

  `./build.sh`

The executable can be found in the `build/release/bin` folder.

**Note:** Workaround for "ERROR: Xcode not set up properly"

Edit `$HOME/Qt/5.8/clang_64/mkspecs/features/mac/default_pre.prf`

replace
`isEmpty($$list($$system("/usr/bin/xcrun -find xcrun 2>/dev/null")))`

with
`isEmpty($$list($$system("/usr/bin/xcrun -find xcodebuild 2>/dev/null")))`

More info: http://stackoverflow.com/a/35098040/1683164


### On Windows:

1. Install [msys2](http://msys2.github.io/), follow the instructions on that page on how to update packages to the latest versions

2. Install Flurbo dependencies as described in [flurbo documentation](https://github.com/flurbo-project/flurbo) into msys2 environment
   **As we only build application for x86, install only dependencies for x86 architecture (i686 in package name)**
   ```
   pacman -S mingw-w64-i686-toolchain make mingw-w64-i686-cmake mingw-w64-i686-boost mingw-w64-i686-openssl mingw-w64-i686-zeromq mingw-w64-i686-libsodium

   ```

3. Install git into msys2 environment

    ```
    pacman -S git
    ```

4. Install Qt5 from [official site](https://www.qt.io/download-open-source/)
   - download unified installer, run and select following options:
       - Qt > Qt 5.7 > MinGW 5.3.0 32 bit
       - Tools > MinGW 5.3.0
   - continue with installation

5. Open ```MinGW-w64 Win32 Shell``` shell

   ```%MSYS_ROOT%\msys2_shell.cmd -mingw32```

   Where ```%MSYS_ROOT%``` will be ```c:\msys32``` if your host OS is x86-based or ```c:\msys64``` if your host OS
   is x64-based

6. Install the latest version of boost, specifically the required static libraries
    ```
    cd
    wget http://sourceforge.net/projects/boost/files/boost/1.63.0/boost_1_63_0.tar.bz2
    tar xjf boost_1_63_0.tar.bz2
    cd boost_1_63_0
    ./bootstrap.sh mingw
    ./b2 --prefix=/mingw32/boost --layout=tagged --without-mpi --without-python toolset=gcc address-model=32 variant=debug,release link=static threading=multi runtime-link=static -j$(nproc) install
    ```

7. Clone repository
    ```
    cd
    git clone https://github.com/iMrPoopybutthole/flurbo-gui-wallet.git
    ```

8. Build the GUI
    ```
    cd flurbo-gui
    export PATH=$(ls -rd /c/Qt/5.[6,7,8]/mingw53_32/bin | head -1):$PATH
    ./build.sh
    cd build
    make deploy
    ```

The executable can be found in the ```.\release\bin``` directory.

~ That's all, bitches! ~
