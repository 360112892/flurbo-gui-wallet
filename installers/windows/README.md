# Flurbo GUI Wallet Windows Installer #

Copyright (c) 2014-2018, The Flurbo Project

## Introduction ##

This is a *Inno Setup* script `Flurbo.iss` plus some related files
that allows you to build a standalone Windows installer (.exe) for
the GUI wallet that comes with the Krombopulos Michael release of Flurbo.

This turns the GUI wallet into a more or less standard Windows program,
by default installed into a subdirectory of `C:\Program Files`, a
program group with some icons in the *Start* menu, and automatic
uninstall support. It helps lowering the "barrier to entry"
somewhat, especially for less technically experienced users of
Flurbo.

As the setup script in file [Flurbo.iss](Flurbo.iss) has to list every
single file of the GUI wallet package to install by name,
this version of the script only works with exactly the GUI wallet
for Flurbo release *Krombopulos Michael* that you find on
[the official download page](https://getflurbo.org/downloads/).

But of course it will be easy to modify the script for future
versions of the GUI wallet.

## License ##

See [LICENSE](LICENSE).

## Building ##

You can only build on Windows, and the result is always a
Windows .exe file that can act as a standalone installer for the
Krombopulos Michael GUI wallet.

The build steps in detail:

1. Install *Inno Setup*. You can get it from [here](http://www.jrsoftware.org/isdl.php)
2. Get the Inno Setup script plus related files by cloning the whole [flurbo-core GitHub repository](https://github.com/flurbo-project/flurbo-core); you will only need the files in the installer directory `installers\windows` however
3. The setup script is written to take the GUI wallet files from a subdirectory named `bin`; so create `installers\windows\bin`, get the zip file of the GUI wallet from [here](https://getflurbo.org/downloads/), unpack it somewhere, and copy all the files and subdirectories in the `flurbo-gui-0.11.1.0` directory to this `bin` subdirectory
4. Start Inno Setup, load `Flurbo.iss` and compile it
5. The result i.e. the finished installer will be the file `mysetup.exe` in the `installers\windows\Output` subdirectory 

