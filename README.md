mate-globalmenu
===============

Fork of gnome2-globalmenu, for MATE desktop
Screenshots: http://jas.gemnetworks.com/
--
original project page: http://code.google.com/p/gnome2-globalmenu
--

mate-globalmenu debian (amd64 binary & source) packages:

wget http://jas.gemnetworks.com/jasmineaura.gpg.key -O- | sudo apt-key add -

# /etc/apt/sources.list.d/jas.list
deb http://jas.gemnetworks.com/debian debian main
deb-src http://jas.gemnetworks.com/debian debian main

sudo apt-get install mate-globalmenu

And to enable it on your mate-panel:

mateconftool-2 --set /apps/mate_settings_daemon/gtk-modules/globalmenu-mate-panel --type bool true


This is provided you don't disable the plugin (default enabled):

mateconftool-2 --get-type /apps/mate_settings_daemon/gtk-modules/globalmenu-plugin

  (should output "true")

And as the parent project notes:
"loading and unloading the module on the fly is yet experimental. Random crashes
do occur: Save your work before toggling Global Menu! So please immediately 
restart your gnome sessionafter changing this key"
http://code.google.com/p/gnome2-globalmenu/wiki/BuildFromSource
