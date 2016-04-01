UNIX-PrivEsc
============

This library is the first step of a journey that every markup file in a repository goes on before it is rendered on GitHub.com:

0. This library converts the raw markup to HTML. See the list of [supported markup formats](#markups) below.
0. The HTML is sanitized, aggressively removing things that could harm you and your kin—such as `script` tags, inline-styles, and `class` or `id` attributes. See the [sanitization filter](https://github.com/jch/html-pipeline/blob/master/lib/html/pipeline/sanitization_filter.rb) for the full whitelist.
0. Syntax highlighting is performed on code blocks. See [github/linguist](https://github.com/github/linguist#syntax-highlighting) for more information about syntax highlighting.
0. The HTML is passed through other filters in the [html-pipeline](https://github.com/jch/html-pipeline) that add special sauce, such as [emoji](https://github.com/jch/html-pipeline/blob/master/lib/html/pipeline/emoji_filter.rb), [task lists](https://github.com/github/task_list/blob/master/lib/task_list/filter.rb), [named anchors](https://github.com/jch/html-pipeline/blob/master/lib/html/pipeline/toc_filter.rb), [CDN caching for images](https://github.com/jch/html-pipeline/blob/master/lib/html/pipeline/camo_filter.rb), and  [autolinking](https://github.com/jch/html-pipeline/blob/master/lib/html/pipeline/autolink_filter.rb).
0. The resulting HTML is rendered on GitHub.com.

Target List
-----------

```
2.2.27 	           ==> 	elfcd1.c, uselib24.zip,
                        uselib24.c, mremap_pte.zip
2.2.x 	           ==> 	ptrace24.zip, ptrace24.c
2.4.17 	           ==> 	newlocal.zip, kmod.zip,
                        uselib24.zip, uselib24.c
2.4.18 	           ==> 	ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.19 	           ==> 	ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.20 	           ==> 	ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip,
                        brk2.zip, kmod.zip
2.4.21 	           ==> 	ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.22-10          ==> 	loginx.zip
2.4.22 	           ==> 	ptrace.zip, ptrace.c,
                        ptrace-kmod.zip, brk.zip, brk2.zip
2.4.23 	           ==> 	hatorihanzo.c, mremap_pte.zip
2.4.24 	           ==> 	mremap_pte.zip, uselib24.zip,
                        uselib24.c, Linux_kernel_mremap.c
2.4.25 	           ==> 	mremap_pte.zip
2.4.26 	           ==> 	mremap_pte.zip, Linux_kernel_mremap.c
2.4.27 	           ==> 	mremap_pte.zip, uselib24.zip, uselib24.c
2.4.29 	           ==> 	expand_stack.c, uselib24.zip, uselib24.c
2.4.x 	           ==> 	ptrace-kmod.zip, uselib24.zip,
                        uselib24.c, newlocal.zip,
                        kmod2.zip, elflbl.zip
2.4 2.6            ==> 	pwned.c
2.6.2 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, myptrace.zip
2.6.4 	           ==> 	hudo.c
2.6.5 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, hudo.c, 05.zip, krad.zip,
                        krad2.zip, ong_bak.c
2.6.7 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip
2.6.8 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip
2.6.9-34           ==> 	h00lyshit.zip, h00lyshit.c, r00t.zip
2.6.9 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip, 05.zip, 06.zip, 04.zip
2.6.10 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        krad.zip, krad2.zip, 05.zip,
                        uselib24.zip, uselib24.c
2.6.11 	           ==> 	k-rad.c, k-rad3.zip, krad2.zip,
                        krad.zip, pwned.zip, pwned.c
2.6.12 	           ==> 	binfmt_elf.c, elfcd2.c
2.6.13 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.14 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.15 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.16 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        prct1.zip, prct2.zip, prct3.zip,
                        prct4.zip, prct6.zip, raptor.zip
2.6.17 	           ==> 	prct1.zip, prct1.c, prct2.zip,
                        prct2.c, prct3.zip, prct3.c, prct4.zip,
                        prct4.c, prct6.zip, prct6.c, prct5.sh
2.6.18-164         ==> 	2.6.18-164.zip
2.6.x 	           ==> 	h00lyshit.zip, h00lyshit.c,
                        cw7.3.zip, elflbl.zip, exp.sh, kmod2.zip,
                        ptrace-kmod.zip, uselib24.zip, x.zip, x2.zip
2.6.17 - 2.6.24.1  ==> 	2.6.17.c
2.6.23 - 2.6.24    ==> 	vmsplice.c
2.6.31.5 	       ==> 	enlightenment.tgz
2.6.31 	           ==> 	xpl-2.6.31-2010.zip
2.6.3-37 	       ==> 	2.6.37.zip
FreeBSD 8.0 	   ==> 	w00t.sh
FreeBSD 4.4-4.6    ==> 	bsd.zip
FreeBSD 4.8 	   ==> 	48local.zip
FreeBSD 5.3 	   ==> 	exploit.zip, exploit.c, freedbs5.3.zip
Mac OS X 	       ==> 	macosX.zip
RedHat 7.3 	       ==> 	afd-expl.zip, alsaplayer-suid.zip,
                        nslconf.zip, ohMy-another-efs.zip
RedHat 8.0 	       ==> 	0x82-Remote.tannehehe.xpl.c, efs_local.zip,
                        efs_local.c, ifenslave.zip, ifenslave.c
RedHat 7.0 	       ==> 	crontab.c, epcs2.c
RedHat 7.1 	       ==> 	rh71sm8.c

```