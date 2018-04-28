#!/bin/bash
./scpod configure set DOWNLOADER '=' $(echo $(which wget) '--no-check-certificate -O"!P/!F" !U')
