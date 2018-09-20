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

## Progress

### Working Commands

Command | Checked | Tested (~=still checking, ^=ostensibly works but needs testing)
--------+---------+--------
test parser | * | *
test download_parser | * | *
test database | * | *
test downloader | * | *
subscribe download none | * |  	^
subscribe download latest |   |   	~~? see notes in parser.h:parsenewchannel
subscribe download all | * |   ^
configure set (setting) = (value) | * | * 
configure set (setting) (value) | * | *
configure view | * | *
configure view (setting) | * | *
list channels |   |   		~
list channel (chanid) |   |   	~
list items in channel (chanid) |   |   	~
list item (itemid) in channel (chanid) |   |   	~
download channel (chanid) none | * | * 
download channel (chanid) latest |   |   		~
download channel (chanid) all |   |   		^ (Actually downloads all that haven't yet been downloaded
download channel (chanid) item (itemid) |   |   ^
help | * | *
help test | * | *
help test parser | * | *
help test download_parser | * | *
help test database | * | *
help test downloader  | * | *
help configure | * | *
help configure set | * | *
help configure set (setting) | * | *
help configure view | * | *
help configure view (setting) | * | *
help subscribe | * | *
help subscribe download | * | *
help subscribe download none | * | *
help subscribe download latest | * | *
help subscribe download all | * | *
help list | * | *
help list channels | * | *
help list channel | * | *
help list items | * | *
help list item | * | *
help download | * | *
help download channel | * | *
help download channel none | * | *
help download channel latest | * | *
help download channel all | * | *
help download channel item | * | *
help help | * | *




### Planned Commands:

* update channel (chanid) download none
* update channel (chanid) download latest
* update channel (chanid) download new
* update channel (chanid) download all
* play channel (chanid) none
* play channel (chanid) latest
* play channel (chanid) all
* play channel (chanid) item (itemid)
* help update
* help update channel
* help update channel download
* help update channel download none
* help update channel download latest
* help update channel download new
* help update channel download all
* help update channel download item
* help play
* help play channel
* help play channel none
* help play channel latest
* help play channel all
* help play channel item

