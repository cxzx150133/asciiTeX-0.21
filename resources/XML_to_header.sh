#!/bin/bash
# This script generates a headerfile of the xml document describing the gui
# First escape the commentsigns 

awk '{gsub("\"", "\\\"", $0); print}' gui.xml > guixml.txt
echo "/* DO NOT EDIT THIS FILE!                                             *"
echo " * This file is automatically generated by the XML_to_header script.  *"
echo " * To change the gui edit gui.glade, convert to xml using             *"
echo " * gtk-builder-convert gui.glade gui.xml                              *"
echo " * Then run this script to get the header                             *"
echo " * DO NOT EDIT THIS FILE!                                             */"
echo 
echo "char *GUI = {"
awk '{if (NR == 1) {printf "\t\"%s\\n\"", $0 } else { printf "\n\t\"%s\\n\"", $0 } } END { print "" }' guixml.txt
echo "};"
rm guixml.txt