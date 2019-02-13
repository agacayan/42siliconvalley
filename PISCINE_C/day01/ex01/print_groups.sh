#!/bin/sh

FT_USER=agacayan

groups $FT_USER | tr ' ' ',' | tr -d '\n'
