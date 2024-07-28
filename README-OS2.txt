===================================================================================================
**** If you like the programs i'm porting and you want to donate to me, see the following URL: ****
**** http://www.bitwiseworks.com/shop/index.php?id_product=38&controller=product& id_lang=1    ****
****             Or send directly to me using PayPal: tellie@elbertpol.nl                      ****
****                All the money you send will go to the QT5 project                          ****
===================================================================================================

Sqlitebrowser v3.13.0   

 CONTENTS OF THIS FILE
 =====================

1. INTRODUCTION

2. REQUIREMENTS

3. INSTALLATION

4. LICENSE, COPYRIGHT, DISCLAIMER

5. CONTACT

6. CREDITS

7. SUPPORT AND DONATIONS

8. HISTORY

9. RESTRICTIONS


1. INTRODUCTION
===============

Welcome to Sqlitebrowser v3.13.0 port for Arcanoae and OS/2.

_DB Browser for SQLite_ (DB4S) is a high quality, visual, open source tool to
create, design, and edit database files compatible with SQLite.

DB4S is for users and developers who want to create, search, and edit
databases.  DB4S uses a familiar spreadsheet-like interface, so complicated SQL commands do not have to be learned.


2. REQUIREMENTS
===============
  The following requirements can be installed by rpm   
 
  RPM Installation (preferred):
  ============================
  klibc
  -----
   1. yum install libc libcx
  
  GCC
  --------
   1. yum install libgcc1
   2. yum install libssp
   3. yum install libstdc++6 libstdc++
   4. yum install libsupc++6 libsupc++
   5. yum install libgcc-fwd

  Qt5 dll
  -------
   1. yum install Qt5Core Qt5Gui Qt5Wdgt Qt5Xml Qt5Prnt Qt5Net

    
  Sqlite 
  ----
   1. yum install sqlite30  

3. INSTALLATION
===============

  Sqlitebrowser
  ---
  1. It's create a directory for Sqlitebrowser.
  2. It's create a WPS object for Sqlitebrowser.exe.
  

4. LICENSE, COPYRIGHT, DISCLAIMER
=================================

(C) 2007-2024 https://sqlitebrowser.org

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


5. CONTACT
==========

if you find a bug, then add a ticket to the trac at http://svn.netlabs.org/qtapps

Only bug reports with a reproducable bug are accepted. :-)



6. CREDITS
==========

The port was done by: Elbert Pol aka TeLLie

Thanks go to:

  * Dmitry A. Kuminov
  * Silvan Scherrer

They either helped me when I had some nasty questions or did some testing for me.


7. SUPPORT AND DONATIONS
========================

Sqlitebrowser is based on volunteer work. If you would like to support further
development, you can do so in one of the following ways:


  * Donate to the Qt5 project: see qt.netlabs.org for more information

  * Contribute to the project: Besides actual development, this also includes
    maintaining the documentation and the project web site as well as help
    for users.


8. HISTORY
==========

Compiled now with Qt5 v5.15.2 GA
