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

* A non-interctive program for downloading, e.g. wget, curl, or, at a push, 
  lynx with the "-dump" option (though this method does not support HTTPS).
