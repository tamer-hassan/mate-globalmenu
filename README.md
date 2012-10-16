mate-globalmenu
===============

Fork of [gnome2-globalmenu](http://code.google.com/p/gnome2-globalmenu), for [MATE desktop](http://mate-desktop.org/)

Screenshots: http://jas.gemnetworks.com/

Notes
--
vala has been disabled in configure script, because regardless of what I tried,
valac always failed at some point in the build. I concluded it is not worth the
effort trying to get vala to work with MATE (v1.4 at the time of writing).

This is ok when working with a (upstream) release tarball, but not when building
code checked out from svn (in which case vala is a must) [1]

Basing off upstream v0.7.10, the last release in the 0.7.x series (Nov 2010), 
which is the latest as of date of writing (Oct 2012).

The new 0.9.x branch is based on GNOME 3.

debian (amd64 binary and source) packages:
--

1. Get the key:

    <pre>
    wget http://jas.gemnetworks.com/jasmineaura.gpg.key -O- | sudo apt-key add -
    </pre>

2. Add to your apt sources (ex. /etc/apt/sources.list.d/mate.list)

    <pre>
    deb http://jas.gemnetworks.com/debian debian main
    deb-src http://jas.gemnetworks.com/debian debian main
    </pre>

3. Install

    <pre>
    sudo apt-get install mate-globalmenu
    </pre>

  or get the source, build deb, and install:

  <pre>
  apt-get source mate-globalmenu
  cd mate-globalmenu
  debuild
  dpkg -i ../mate-globalmenu*.deb
  </pre>

4. Enable globalmenu on your mate-panel:

    <pre>
    mateconftool-2 --set /apps/mate_settings_daemon/gtk-modules/globalmenu-mate-panel --type bool true
    </pre>

* This is provided you don't disable the plugin (default enabled):

    <pre>
    mateconftool-2 --get /apps/mate_settings_daemon/gtk-modules/globalmenu-plugin
    </pre>
    (should output "true")


* And as the parent project notes: [1]

    "loading and unloading the module on the fly is yet experimental. Random crashes
do occur: Save your work before toggling Global Menu! So please immediately 
restart your gnome sessionafter changing this key"

  [1]: http://code.google.com/p/gnome2-globalmenu/wiki/BuildFromSource
<<<<<<< HEAD

=======
>>>>>>> 1f4dbf8ffff9c0dec8159dd22d733111e22358bd
