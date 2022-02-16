# AudioExample

This is an example program for the libaudio wrapper library


# Setup

First you'll need to download the required libraries in order to compile. To automate this process, you'll need to download and compile the -> [Dependency Tracker](https://github.com/jmscreation/dependency-tracker)

Once you have the dependency tracker compiled, you need to update the libraries in the current directory. The easiest way to do this is to copy the file into the repository, then run:
`deps -update`

# Build

Make sure you have [MinGW64](https://github.com/brechtsanders/winlibs_mingw/releases/download/11.2.0-9.0.0-msvcrt-r6/winlibs-x86_64-posix-seh-gcc-11.2.0-mingw-w64-9.0.0-r6.7z) installed, and are running the 64bit version (this build script is setup for the 64bit static libraries) 

You'll also need to make sure the MinGW bin path is configured in the windows environment variables. [See here how to configure](https://docs.microsoft.com/en-us/previous-versions/office/developer/sharepoint-2010/ee537574(v=office.14)#to-add-a-path-to-the-path-environment-variable)

Once everything is setup, go ahead and run `build.bat`
