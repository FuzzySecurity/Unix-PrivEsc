UNIX-PrivEsc
============

This is just an effort to aggregate local UNIX privilege escalation exploits. They are all publicly available but don't allow for a sensible overview + it's always the quirky ones that you can't find when you need them. I am going to progressively push out exploits from a few sources which are listed below for reference. 

Import Complete:

0. http://exploit.linuxnote.org
0. http://www.0xdeadbeef.info/ (Partial, x86 Solaris + AIX)

To Do List:

0. http://web.archive.org/web/20111118031158/http://tarantula.by.ru/localroot/
0. http://www.0xdeadbeef.info/ (Raptor Kit)
0. OSX (Google-fu)
0. Exploit-DB (anything that's missing)

WARNING
-------

Be careful, the compiled exploits in the repo could contain ANYTHING, you may launch them and get root or "rm -rf /" or discover the formula for time travel! They have been added here for the odd sticky situation but I would never recommend running them if an alternative is available and certainly not without manual inspection!

Target List
-----------

```
2.2.27             ==>  elfcd1.c, uselib24.zip,
                        uselib24.c, mremap_pte.zip
2.2.x              ==>  ptrace24.zip, ptrace24.c
2.4.17             ==>  newlocal.zip, kmod.zip,
                        uselib24.zip, uselib24.c
2.4.18             ==>  ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.19             ==>  ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.20             ==>  ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip,
                        brk2.zip, kmod.zip
2.4.21             ==>  ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.22-10          ==>  loginx.zip
2.4.22             ==>  ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.23             ==>  hatorihanzo.c, mremap_pte.zip
2.4.24             ==>  mremap_pte.zip, uselib24.zip,
                        uselib24.c, Linux_kernel_mremap.c
2.4.25             ==>  mremap_pte.zip
2.4.26             ==>  mremap_pte.zip, Linux_kernel_mremap.c
2.4.27             ==>  mremap_pte.zip, uselib24.zip, uselib24.c
2.4.29             ==>  expand_stack.c, uselib24.zip, uselib24.c
2.4.x              ==>  ptrace-kmod.zip, uselib24.zip,
                        uselib24.c, newlocal.zip,
                        kmod2.zip, elflbl.zip
2.4 2.6            ==>  pwned.c
2.6.2              ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, myptrace.zip
2.6.4              ==>  hudo.c
2.6.5              ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, hudo.c, 05.zip, krad.zip,
                        krad2.zip, ong_bak.c
2.6.7              ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip
2.6.8              ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip
2.6.9-34           ==>  h00lyshit.zip, h00lyshit.c, r00t.zip
2.6.9              ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip, 05.zip, 06.zip, 04.zip
2.6.10             ==>  h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip, 05.zip,
                        uselib24.zip, uselib24.c
2.6.11             ==>  k-rad.c, k-rad3.zip, krad2.zip,
                        krad.zip, pwned.zip, pwned.c
2.6.12             ==>  binfmt_elf.c, elfcd2.c
2.6.13             ==>  h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.14             ==>  h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.15             ==>  h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.16             ==>  h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.17             ==>  prct1.zip, prct1.c, prct2.zip,
                        prct2.c, prct3.zip, prct3.c, prct4.zip,
                        prct4.c, prct6.zip, prct6.c, prct5.sh
2.6.18-164         ==>  2.6.18-164.zip
2.6.x              ==>  h00lyshit.zip, h00lyshit.c,
                        cw7.3.zip, elflbl.zip, exp.sh, kmod2.zip,
                        ptrace-kmod.zip, uselib24.zip, x.zip, x2.zip
2.6.17 - 2.6.24.1  ==>  2.6.17.c
2.6.23 - 2.6.24    ==>  vmsplice.c
2.6.31.5           ==>  enlightenment.tgz
2.6.31             ==>  xpl-2.6.31-2010.zip
2.6.3-37           ==>  2.6.37.zip, full-nelson.c, half-nelson.c
FreeBSD 4.4-4.6    ==>  bsd.zip
FreeBSD 4.8        ==>  48local.zip
FreeBSD 5.3        ==>  exploit.zip, exploit.c, freedbs5.3.zip
FreeBSD 8.0        ==>  w00t.sh
RedHat 7.0         ==>  crontab.c, epcs2.c
RedHat 7.1         ==>  rh71sm8.c
RedHat 7.3         ==>  afd-expl.zip, alsaplayer-suid.zip,
                        nslconf.zip, ohMy-another-efs.zip
RedHat 8.0         ==>  0x82-Remote.tannehehe.xpl.c, efs_local.zip,
                        efs_local.c, ifenslave.zip, ifenslave.c
Solaris(x86) 8-9   ==>  raptor_ucbps.sh, raptor_peek.c
Solaris(x86) 10    ==>  raptor_peek.c, raptor_sysinfo.c, raptor_libnspr.sh
                        raptor_libnspr2.sh, raptor_libnspr3.sh
AIX 5.3 & 6.1      ==>  raptor_libC.sh
AIX 6.1 & 7.1      ==>  tmb-vs-ibm-aix-libodm.c
```