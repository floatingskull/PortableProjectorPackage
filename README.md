PortableProjectorPackage
========================

Crestron code for the portable projector package server.  These files will need to be edited in SIMPL Windows, and run on Crestron hardware.  It's currently set for a CP2E, but it should be adaptable to any 2 or 3 series processor with a network port.  You will need the modules in this repository, as well as the DateDiffLib repository, to make this work.


Setup
=====

Setup is fairly straightforward.  Once the code is running on an appropriate processor, make sure it has a statically assigned address, and load the code from the Transponder_Code repository to some Arduinos with DB-9 shields.  