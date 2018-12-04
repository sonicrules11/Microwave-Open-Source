# Microwave-Open-Source

Macintosh hack for Counter-Strike: Global Offensive. Open source.

### Setup

Requirements:

* cmake
* Shared library injector 
* [Homebrew](https://brew.sh)
* [Library injector](https://github.com/scen/osxinj) (I'm suggesting this not saying only this will work I will not explain how to build it)

To generate the project files:

* **Mac OS**: `cmake .`

To build:

* **Mac OS**: `make`

Note: You can generate the project files with `cmake -G Xcode .`

Injection can be done by injecting it with your favorite shared library injector.
* **Example**: `sudo ./osxinj csgo_osx64 libMicrowave.dylib`

### Credit

* ViKiNG (Making Microwave)
* Akalisch (NetVarManager/PatternScanner)
