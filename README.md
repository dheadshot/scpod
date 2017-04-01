# scPOD

## About scPOD

scPOD is a simple podcatcher, written in C, for Windows and Linux.

scPOD can be fairly platform independent through the fact that it does not
have a built-in downloader and instead relies on an external utility for
downloading files.  Usually, this is wget or curl.  Windows users are 
advised to get the MSYS version of wget as this supports HTTPS.

## Prerequisites for Building

* The SQLITE3 library.

## Prerequisites for Running

* A non-interactive program for downloading, e.g. wget, curl, or (at a push) 
  lynx with the "-dump" option (though this method does not support HTTPS).

## Licence

scPOD uses a modified version of the MIT Licence.  See the file "LICENSE" for 
details.
