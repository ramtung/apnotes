	.file	"measure.cpp"
# GNU C++17 (Ubuntu 11.3.0-1ubuntu1~22.04) version 11.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 11.3.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mtune=generic -march=x86-64 -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection
	.text
	.section	.text._ZSt17__size_to_integerm,"axG",@progbits,_ZSt17__size_to_integerm,comdat
	.weak	_ZSt17__size_to_integerm
	.type	_ZSt17__size_to_integerm, @function
_ZSt17__size_to_integerm:
.LFB538:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_algobase.h:1010:   __size_to_integer(unsigned long __n) { return __n; }
	movq	-8(%rbp), %rax	# __n, _2
# /usr/include/c++/11/bits/stl_algobase.h:1010:   __size_to_integer(unsigned long __n) { return __n; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE538:
	.size	_ZSt17__size_to_integerm, .-_ZSt17__size_to_integerm
	.section	.text._ZnwmPv,"axG",@progbits,_ZnwmPv,comdat
	.weak	_ZnwmPv
	.type	_ZnwmPv, @function
_ZnwmPv:
.LFB1007:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.24354, D.24354
	movq	%rsi, -16(%rbp)	# __p, __p
# /usr/include/c++/11/new:175: { return __p; }
	movq	-16(%rbp), %rax	# __p, _2
# /usr/include/c++/11/new:175: { return __p; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1007:
	.size	_ZnwmPv, .-_ZnwmPv
	.section	.text._ZStanSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStanSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStanSt13_Ios_FmtflagsS_
	.type	_ZStanSt13_Ios_FmtflagsS_, @function
_ZStanSt13_Ios_FmtflagsS_:
.LFB1923:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# __a, __a
	movl	%esi, -8(%rbp)	# __b, __b
# /usr/include/c++/11/bits/ios_base.h:84:   { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }
	movl	-4(%rbp), %eax	# __a, tmp84
	andl	-8(%rbp), %eax	# __b, _3
# /usr/include/c++/11/bits/ios_base.h:84:   { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1923:
	.size	_ZStanSt13_Ios_FmtflagsS_, .-_ZStanSt13_Ios_FmtflagsS_
	.section	.text._ZStorSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStorSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStorSt13_Ios_FmtflagsS_
	.type	_ZStorSt13_Ios_FmtflagsS_, @function
_ZStorSt13_Ios_FmtflagsS_:
.LFB1924:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# __a, __a
	movl	%esi, -8(%rbp)	# __b, __b
# /usr/include/c++/11/bits/ios_base.h:88:   { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }
	movl	-4(%rbp), %eax	# __a, tmp84
	orl	-8(%rbp), %eax	# __b, _3
# /usr/include/c++/11/bits/ios_base.h:88:   { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1924:
	.size	_ZStorSt13_Ios_FmtflagsS_, .-_ZStorSt13_Ios_FmtflagsS_
	.section	.text._ZStcoSt13_Ios_Fmtflags,"axG",@progbits,_ZStcoSt13_Ios_Fmtflags,comdat
	.weak	_ZStcoSt13_Ios_Fmtflags
	.type	_ZStcoSt13_Ios_Fmtflags, @function
_ZStcoSt13_Ios_Fmtflags:
.LFB1926:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# __a, __a
# /usr/include/c++/11/bits/ios_base.h:96:   { return _Ios_Fmtflags(~static_cast<int>(__a)); }
	movl	-4(%rbp), %eax	# __a, tmp84
	notl	%eax	# _2
# /usr/include/c++/11/bits/ios_base.h:96:   { return _Ios_Fmtflags(~static_cast<int>(__a)); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1926:
	.size	_ZStcoSt13_Ios_Fmtflags, .-_ZStcoSt13_Ios_Fmtflags
	.section	.text._ZStoRRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStoRRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStoRRSt13_Ios_FmtflagsS_
	.type	_ZStoRRSt13_Ios_FmtflagsS_, @function
_ZStoRRSt13_Ios_FmtflagsS_:
.LFB1927:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __a, __a
	movl	%esi, -12(%rbp)	# __b, __b
# /usr/include/c++/11/bits/ios_base.h:100:   { return __a = __a | __b; }
	movq	-8(%rbp), %rax	# __a, tmp86
	movl	(%rax), %eax	# *__a_4(D), _1
	movl	-12(%rbp), %edx	# __b, tmp87
	movl	%edx, %esi	# tmp87,
	movl	%eax, %edi	# _1,
	call	_ZStorSt13_Ios_FmtflagsS_	#
# /usr/include/c++/11/bits/ios_base.h:100:   { return __a = __a | __b; }
	movq	-8(%rbp), %rdx	# __a, tmp88
	movl	%eax, (%rdx)	# _2, *__a_4(D)
# /usr/include/c++/11/bits/ios_base.h:100:   { return __a = __a | __b; }
	movq	-8(%rbp), %rax	# __a, _8
# /usr/include/c++/11/bits/ios_base.h:100:   { return __a = __a | __b; }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1927:
	.size	_ZStoRRSt13_Ios_FmtflagsS_, .-_ZStoRRSt13_Ios_FmtflagsS_
	.section	.text._ZStaNRSt13_Ios_FmtflagsS_,"axG",@progbits,_ZStaNRSt13_Ios_FmtflagsS_,comdat
	.weak	_ZStaNRSt13_Ios_FmtflagsS_
	.type	_ZStaNRSt13_Ios_FmtflagsS_, @function
_ZStaNRSt13_Ios_FmtflagsS_:
.LFB1928:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __a, __a
	movl	%esi, -12(%rbp)	# __b, __b
# /usr/include/c++/11/bits/ios_base.h:104:   { return __a = __a & __b; }
	movq	-8(%rbp), %rax	# __a, tmp86
	movl	(%rax), %eax	# *__a_4(D), _1
	movl	-12(%rbp), %edx	# __b, tmp87
	movl	%edx, %esi	# tmp87,
	movl	%eax, %edi	# _1,
	call	_ZStanSt13_Ios_FmtflagsS_	#
# /usr/include/c++/11/bits/ios_base.h:104:   { return __a = __a & __b; }
	movq	-8(%rbp), %rdx	# __a, tmp88
	movl	%eax, (%rdx)	# _2, *__a_4(D)
# /usr/include/c++/11/bits/ios_base.h:104:   { return __a = __a & __b; }
	movq	-8(%rbp), %rax	# __a, _8
# /usr/include/c++/11/bits/ios_base.h:104:   { return __a = __a & __b; }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1928:
	.size	_ZStaNRSt13_Ios_FmtflagsS_, .-_ZStaNRSt13_Ios_FmtflagsS_
	.section	.text._ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,"axG",@progbits,_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_,comdat
	.align 2
	.weak	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.type	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_, @function
_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_:
.LFB1957:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
	movl	%esi, -28(%rbp)	# __fmtfl, __fmtfl
	movl	%edx, -32(%rbp)	# __mask, __mask
# /usr/include/c++/11/bits/ios_base.h:695:       fmtflags __old = _M_flags;
	movq	-24(%rbp), %rax	# this, tmp88
	movl	24(%rax), %eax	# this_6(D)->_M_flags, tmp89
	movl	%eax, -4(%rbp)	# tmp89, __old
# /usr/include/c++/11/bits/ios_base.h:696:       _M_flags &= ~__mask;
	movl	-32(%rbp), %eax	# __mask, tmp90
	movl	%eax, %edi	# tmp90,
	call	_ZStcoSt13_Ios_Fmtflags	#
	movl	%eax, %edx	#, _1
# /usr/include/c++/11/bits/ios_base.h:696:       _M_flags &= ~__mask;
	movq	-24(%rbp), %rax	# this, tmp91
	addq	$24, %rax	#, _2
# /usr/include/c++/11/bits/ios_base.h:696:       _M_flags &= ~__mask;
	movl	%edx, %esi	# _1,
	movq	%rax, %rdi	# _2,
	call	_ZStaNRSt13_Ios_FmtflagsS_	#
# /usr/include/c++/11/bits/ios_base.h:697:       _M_flags |= (__fmtfl & __mask);
	movl	-32(%rbp), %edx	# __mask, tmp92
	movl	-28(%rbp), %eax	# __fmtfl, tmp93
	movl	%edx, %esi	# tmp92,
	movl	%eax, %edi	# tmp93,
	call	_ZStanSt13_Ios_FmtflagsS_	#
	movl	%eax, %edx	#, _3
# /usr/include/c++/11/bits/ios_base.h:697:       _M_flags |= (__fmtfl & __mask);
	movq	-24(%rbp), %rax	# this, tmp94
	addq	$24, %rax	#, _4
# /usr/include/c++/11/bits/ios_base.h:697:       _M_flags |= (__fmtfl & __mask);
	movl	%edx, %esi	# _3,
	movq	%rax, %rdi	# _4,
	call	_ZStoRRSt13_Ios_FmtflagsS_	#
# /usr/include/c++/11/bits/ios_base.h:698:       return __old;
	movl	-4(%rbp), %eax	# __old, _14
# /usr/include/c++/11/bits/ios_base.h:699:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1957:
	.size	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_, .-_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_
	.section	.text._ZSt5fixedRSt8ios_base,"axG",@progbits,_ZSt5fixedRSt8ios_base,comdat
	.weak	_ZSt5fixedRSt8ios_base
	.type	_ZSt5fixedRSt8ios_base, @function
_ZSt5fixedRSt8ios_base:
.LFB1987:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __base, __base
# /usr/include/c++/11/bits/ios_base.h:1073:     __base.setf(ios_base::fixed, ios_base::floatfield);
	movq	-8(%rbp), %rax	# __base, tmp84
	movl	$260, %edx	#,
	movl	$4, %esi	#,
	movq	%rax, %rdi	# tmp84,
	call	_ZNSt8ios_base4setfESt13_Ios_FmtflagsS0_	#
# /usr/include/c++/11/bits/ios_base.h:1074:     return __base;
	movq	-8(%rbp), %rax	# __base, _4
# /usr/include/c++/11/bits/ios_base.h:1075:   }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1987:
	.size	_ZSt5fixedRSt8ios_base, .-_ZSt5fixedRSt8ios_base
	.section	.text._ZSt3minImERKT_S2_S2_,"axG",@progbits,_ZSt3minImERKT_S2_S2_,comdat
	.weak	_ZSt3minImERKT_S2_S2_
	.type	_ZSt3minImERKT_S2_S2_, @function
_ZSt3minImERKT_S2_S2_:
.LFB3255:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __a, __a
	movq	%rsi, -16(%rbp)	# __b, __b
# /usr/include/c++/11/bits/stl_algobase.h:235:       if (__b < __a)
	movq	-16(%rbp), %rax	# __b, tmp86
	movq	(%rax), %rdx	# *__b_5(D), _1
	movq	-8(%rbp), %rax	# __a, tmp87
	movq	(%rax), %rax	# *__a_6(D), _2
# /usr/include/c++/11/bits/stl_algobase.h:235:       if (__b < __a)
	cmpq	%rax, %rdx	# _2, _1
	jnb	.L20	#,
# /usr/include/c++/11/bits/stl_algobase.h:236: 	return __b;
	movq	-16(%rbp), %rax	# __b, _3
	jmp	.L21	#
.L20:
# /usr/include/c++/11/bits/stl_algobase.h:237:       return __a;
	movq	-8(%rbp), %rax	# __a, _3
.L21:
# /usr/include/c++/11/bits/stl_algobase.h:238:     }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE3255:
	.size	_ZSt3minImERKT_S2_S2_, .-_ZSt3minImERKT_S2_S2_
	.section	.rodata
	.type	_ZN6__pstl9execution2v1L3seqE, @object
	.size	_ZN6__pstl9execution2v1L3seqE, 1
_ZN6__pstl9execution2v1L3seqE:
	.zero	1
	.type	_ZN6__pstl9execution2v1L3parE, @object
	.size	_ZN6__pstl9execution2v1L3parE, 1
_ZN6__pstl9execution2v1L3parE:
	.zero	1
	.type	_ZN6__pstl9execution2v1L9par_unseqE, @object
	.size	_ZN6__pstl9execution2v1L9par_unseqE, 1
_ZN6__pstl9execution2v1L9par_unseqE:
	.zero	1
	.type	_ZN6__pstl9execution2v1L5unseqE, @object
	.size	_ZN6__pstl9execution2v1L5unseqE, 1
_ZN6__pstl9execution2v1L5unseqE:
	.zero	1
	.section	.text._ZSt12setprecisioni,"axG",@progbits,_ZSt12setprecisioni,comdat
	.weak	_ZSt12setprecisioni
	.type	_ZSt12setprecisioni, @function
_ZSt12setprecisioni:
.LFB4799:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)	# __n, __n
# /usr/include/c++/11/iomanip:196:   { return { __n }; }
	movl	-4(%rbp), %eax	# __n, D.231927
# /usr/include/c++/11/iomanip:196:   { return { __n }; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE4799:
	.size	_ZSt12setprecisioni, .-_ZSt12setprecisioni
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.align 4
	.type	_ZN9__gnu_cxxL21__default_lock_policyE, @object
	.size	_ZN9__gnu_cxxL21__default_lock_policyE, 4
_ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
	.section	.text._ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv,"axG",@progbits,_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv,comdat
	.align 2
	.weak	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	.type	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv, @function
_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv:
.LFB6990:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/chrono:538: 	{ return __r; }
	movq	-8(%rbp), %rax	# this, tmp84
	movq	(%rax), %rax	# this_2(D)->__r, _3
# /usr/include/c++/11/chrono:538: 	{ return __r; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE6990:
	.size	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv, .-_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	.section	.text._ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_,"axG",@progbits,_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_,comdat
	.align 2
	.weak	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	.type	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_, @function
_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_:
.LFB6995:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __rep, __rep
# /usr/include/c++/11/chrono:522: 	  : __r(static_cast<rep>(__rep)) { }
	movq	-16(%rbp), %rax	# __rep, tmp83
	movq	(%rax), %rdx	# *__rep_5(D), _1
# /usr/include/c++/11/chrono:522: 	  : __r(static_cast<rep>(__rep)) { }
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rdx, (%rax)	# _1, this_3(D)->__r
# /usr/include/c++/11/chrono:522: 	  : __r(static_cast<rep>(__rep)) { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE6995:
	.size	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_, .-_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	.section	.rodata
	.align 4
	.type	_ZNSt15regex_constantsL13error_collateE, @object
	.size	_ZNSt15regex_constantsL13error_collateE, 4
_ZNSt15regex_constantsL13error_collateE:
	.zero	4
	.align 4
	.type	_ZNSt15regex_constantsL11error_ctypeE, @object
	.size	_ZNSt15regex_constantsL11error_ctypeE, 4
_ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
	.type	_ZNSt15regex_constantsL12error_escapeE, @object
	.size	_ZNSt15regex_constantsL12error_escapeE, 4
_ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
	.type	_ZNSt15regex_constantsL13error_backrefE, @object
	.size	_ZNSt15regex_constantsL13error_backrefE, 4
_ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
	.type	_ZNSt15regex_constantsL11error_brackE, @object
	.size	_ZNSt15regex_constantsL11error_brackE, 4
_ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
	.type	_ZNSt15regex_constantsL11error_parenE, @object
	.size	_ZNSt15regex_constantsL11error_parenE, 4
_ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
	.type	_ZNSt15regex_constantsL11error_braceE, @object
	.size	_ZNSt15regex_constantsL11error_braceE, 4
_ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
	.type	_ZNSt15regex_constantsL14error_badbraceE, @object
	.size	_ZNSt15regex_constantsL14error_badbraceE, 4
_ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
	.type	_ZNSt15regex_constantsL11error_rangeE, @object
	.size	_ZNSt15regex_constantsL11error_rangeE, 4
_ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
	.type	_ZNSt15regex_constantsL11error_spaceE, @object
	.size	_ZNSt15regex_constantsL11error_spaceE, 4
_ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
	.type	_ZNSt15regex_constantsL15error_badrepeatE, @object
	.size	_ZNSt15regex_constantsL15error_badrepeatE, 4
_ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
	.type	_ZNSt15regex_constantsL16error_complexityE, @object
	.size	_ZNSt15regex_constantsL16error_complexityE, 4
_ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
	.type	_ZNSt15regex_constantsL11error_stackE, @object
	.size	_ZNSt15regex_constantsL11error_stackE, 4
_ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 8
	.type	_ZNSt8__detailL19_S_invalid_state_idE, @object
	.size	_ZNSt8__detailL19_S_invalid_state_idE, 8
_ZNSt8__detailL19_S_invalid_state_idE:
	.quad	-1
	.text
	.globl	_Z13bubble_sort_1RSt6vectorIiSaIiEE
	.type	_Z13bubble_sort_1RSt6vectorIiSaIiEE, @function
_Z13bubble_sort_1RSt6vectorIiSaIiEE:
.LFB9703:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)	# v, v
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	movl	$0, -24(%rbp)	#, i
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	jmp	.L28	#
.L32:
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	movl	$0, -20(%rbp)	#, j
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	jmp	.L29	#
.L31:
# measure.cpp:11:             if (v[j] > v[j+1])
	movl	-20(%rbp), %eax	# j, tmp105
	movslq	%eax, %rdx	# tmp105, _1
	movq	-40(%rbp), %rax	# v, tmp106
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp106,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:11:             if (v[j] > v[j+1])
	movl	(%rax), %ebx	# *_2, _3
# measure.cpp:11:             if (v[j] > v[j+1])
	movl	-20(%rbp), %eax	# j, tmp107
	addl	$1, %eax	#, _4
# measure.cpp:11:             if (v[j] > v[j+1])
	movslq	%eax, %rdx	# _4, _5
	movq	-40(%rbp), %rax	# v, tmp108
	movq	%rdx, %rsi	# _5,
	movq	%rax, %rdi	# tmp108,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:11:             if (v[j] > v[j+1])
	movl	(%rax), %eax	# *_6, _7
	cmpl	%eax, %ebx	# _7, _3
	setg	%al	#, retval.0_37
# measure.cpp:11:             if (v[j] > v[j+1])
	testb	%al, %al	# retval.0_37
	je	.L30	#,
# measure.cpp:12:                 swap(v[j], v[j+1]);
	movl	-20(%rbp), %eax	# j, tmp109
	addl	$1, %eax	#, _8
# measure.cpp:12:                 swap(v[j], v[j+1]);
	movslq	%eax, %rdx	# _8, _9
	movq	-40(%rbp), %rax	# v, tmp110
	movq	%rdx, %rsi	# _9,
	movq	%rax, %rdi	# tmp110,
	call	_ZNSt6vectorIiSaIiEEixEm	#
	movq	%rax, %rbx	#, _10
# measure.cpp:12:                 swap(v[j], v[j+1]);
	movl	-20(%rbp), %eax	# j, tmp111
	movslq	%eax, %rdx	# tmp111, _11
	movq	-40(%rbp), %rax	# v, tmp112
	movq	%rdx, %rsi	# _11,
	movq	%rax, %rdi	# tmp112,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:12:                 swap(v[j], v[j+1]);
	movq	%rbx, %rsi	# _10,
	movq	%rax, %rdi	# _12,
	call	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_	#
.L30:
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	addl	$1, -20(%rbp)	#, j
.L29:
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	movl	-20(%rbp), %eax	# j, tmp113
	movslq	%eax, %rbx	# tmp113, _13
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	movq	-40(%rbp), %rax	# v, tmp114
	movq	%rax, %rdi	# tmp114,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	movl	-24(%rbp), %edx	# i, tmp115
	movslq	%edx, %rdx	# tmp115, _15
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	subq	%rdx, %rax	# _15, _16
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	subq	$1, %rax	#, _17
# measure.cpp:10:         for (int j = 0; j < v.size()-i-1; j++)
	cmpq	%rax, %rbx	# _17, _13
	setb	%al	#, retval.1_33
	testb	%al, %al	# retval.1_33
	jne	.L31	#,
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	addl	$1, -24(%rbp)	#, i
.L28:
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	movl	-24(%rbp), %eax	# i, tmp116
	movslq	%eax, %rbx	# tmp116, _18
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	movq	-40(%rbp), %rax	# v, tmp117
	movq	%rax, %rdi	# tmp117,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	subq	$1, %rax	#, _20
# measure.cpp:9:     for (int i = 0; i < v.size()-1; i++)
	cmpq	%rax, %rbx	# _20, _18
	setb	%al	#, retval.2_30
	testb	%al, %al	# retval.2_30
	jne	.L32	#,
# measure.cpp:13: }
	nop	
	nop	
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9703:
	.size	_Z13bubble_sort_1RSt6vectorIiSaIiEE, .-_Z13bubble_sort_1RSt6vectorIiSaIiEE
	.globl	_Z13bubble_sort_2RSt6vectorIiSaIiEE
	.type	_Z13bubble_sort_2RSt6vectorIiSaIiEE, @function
_Z13bubble_sort_2RSt6vectorIiSaIiEE:
.LFB9705:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9705
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$72, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)	# v, v
# measure.cpp:15: void bubble_sort_2(vector<int>& v) {
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp126
	movq	%rax, -24(%rbp)	# tmp126, D.232053
	xorl	%eax, %eax	# tmp126
# measure.cpp:16:     vector<int> w = v;
	movq	-72(%rbp), %rdx	# v, tmp106
	leaq	-48(%rbp), %rax	#, tmp107
	movq	%rdx, %rsi	# tmp106,
	movq	%rax, %rdi	# tmp107,
.LEHB0:
	call	_ZNSt6vectorIiSaIiEEC1ERKS1_	#
.LEHE0:
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	movl	$0, -56(%rbp)	#, i
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	jmp	.L34	#
.L38:
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	movl	$0, -52(%rbp)	#, j
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	jmp	.L35	#
.L37:
# measure.cpp:19:             if (w[j] > w[j+1])
	movl	-52(%rbp), %eax	# j, tmp108
	movslq	%eax, %rdx	# tmp108, _1
	leaq	-48(%rbp), %rax	#, tmp109
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp109,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:19:             if (w[j] > w[j+1])
	movl	(%rax), %ebx	# *_2, _3
# measure.cpp:19:             if (w[j] > w[j+1])
	movl	-52(%rbp), %eax	# j, tmp110
	addl	$1, %eax	#, _4
# measure.cpp:19:             if (w[j] > w[j+1])
	movslq	%eax, %rdx	# _4, _5
	leaq	-48(%rbp), %rax	#, tmp111
	movq	%rdx, %rsi	# _5,
	movq	%rax, %rdi	# tmp111,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:19:             if (w[j] > w[j+1])
	movl	(%rax), %eax	# *_6, _7
	cmpl	%eax, %ebx	# _7, _3
	setg	%al	#, retval.3_43
# measure.cpp:19:             if (w[j] > w[j+1])
	testb	%al, %al	# retval.3_43
	je	.L36	#,
# measure.cpp:20:                 swap(w[j], w[j+1]);
	movl	-52(%rbp), %eax	# j, tmp112
	addl	$1, %eax	#, _8
# measure.cpp:20:                 swap(w[j], w[j+1]);
	movslq	%eax, %rdx	# _8, _9
	leaq	-48(%rbp), %rax	#, tmp113
	movq	%rdx, %rsi	# _9,
	movq	%rax, %rdi	# tmp113,
	call	_ZNSt6vectorIiSaIiEEixEm	#
	movq	%rax, %rbx	#, _10
# measure.cpp:20:                 swap(w[j], w[j+1]);
	movl	-52(%rbp), %eax	# j, tmp114
	movslq	%eax, %rdx	# tmp114, _11
	leaq	-48(%rbp), %rax	#, tmp115
	movq	%rdx, %rsi	# _11,
	movq	%rax, %rdi	# tmp115,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:20:                 swap(w[j], w[j+1]);
	movq	%rbx, %rsi	# _10,
	movq	%rax, %rdi	# _12,
	call	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_	#
.L36:
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	addl	$1, -52(%rbp)	#, j
.L35:
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	movl	-52(%rbp), %eax	# j, tmp116
	movslq	%eax, %rbx	# tmp116, _13
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	leaq	-48(%rbp), %rax	#, tmp117
	movq	%rax, %rdi	# tmp117,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	movl	-56(%rbp), %edx	# i, tmp118
	movslq	%edx, %rdx	# tmp118, _15
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	subq	%rdx, %rax	# _15, _16
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	subq	$1, %rax	#, _17
# measure.cpp:18:         for (int j = 0; j < w.size()-i-1; j++)
	cmpq	%rax, %rbx	# _17, _13
	setb	%al	#, retval.4_39
	testb	%al, %al	# retval.4_39
	jne	.L37	#,
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	addl	$1, -56(%rbp)	#, i
.L34:
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	movl	-56(%rbp), %eax	# i, tmp119
	movslq	%eax, %rbx	# tmp119, _18
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	leaq	-48(%rbp), %rax	#, tmp120
	movq	%rax, %rdi	# tmp120,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	subq	$1, %rax	#, _20
# measure.cpp:17:     for (int i = 0; i < w.size()-1; i++)
	cmpq	%rax, %rbx	# _20, _18
	setb	%al	#, retval.5_32
	testb	%al, %al	# retval.5_32
	jne	.L38	#,
# measure.cpp:21:     v = w;
	leaq	-48(%rbp), %rdx	#, tmp121
	movq	-72(%rbp), %rax	# v, tmp122
	movq	%rdx, %rsi	# tmp121,
	movq	%rax, %rdi	# tmp122,
.LEHB1:
	call	_ZNSt6vectorIiSaIiEEaSERKS1_	#
.LEHE1:
# measure.cpp:22: }
	leaq	-48(%rbp), %rax	#, tmp123
	movq	%rax, %rdi	# tmp123,
	call	_ZNSt6vectorIiSaIiEED1Ev	#
	movq	-24(%rbp), %rax	# D.232053, tmp127
	subq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp127
	je	.L40	#,
	jmp	.L42	#
.L41:
	endbr64	
	movq	%rax, %rbx	#, tmp125
	leaq	-48(%rbp), %rax	#, tmp124
	movq	%rax, %rdi	# tmp124,
	call	_ZNSt6vectorIiSaIiEED1Ev	#
	movq	%rbx, %rax	# tmp125, D.232052
	movq	%rax, %rdi	# D.232052,
.LEHB2:
	call	_Unwind_Resume@PLT	#
.LEHE2:
.L42:
	call	__stack_chk_fail@PLT	#
.L40:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9705:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA9705:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9705-.LLSDACSB9705
.LLSDACSB9705:
	.uleb128 .LEHB0-.LFB9705
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB9705
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L41-.LFB9705
	.uleb128 0
	.uleb128 .LEHB2-.LFB9705
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE9705:
	.text
	.size	_Z13bubble_sort_2RSt6vectorIiSaIiEE, .-_Z13bubble_sort_2RSt6vectorIiSaIiEE
	.globl	_Z13bubble_sort_3RSt6vectorIiSaIiEE
	.type	_Z13bubble_sort_3RSt6vectorIiSaIiEE, @function
_Z13bubble_sort_3RSt6vectorIiSaIiEE:
.LFB9706:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$56, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)	# v, v
# measure.cpp:25:     int* w = new int[v.size()];
	movq	-56(%rbp), %rax	# v, tmp129
	movq	%rax, %rdi	# tmp129,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:25:     int* w = new int[v.size()];
	movabsq	$2305843009213693950, %rdx	#, tmp130
	cmpq	%rdx, %rax	# tmp130, _54
	ja	.L44	#,
# measure.cpp:25:     int* w = new int[v.size()];
	salq	$2, %rax	#, iftmp.18_56
	movq	%rax, %rdi	# iftmp.18_56,
	call	_Znam@PLT	#
	movq	%rax, -24(%rbp)	# _58, w
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movl	$0, -40(%rbp)	#, i
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	jmp	.L46	#
.L44:
# measure.cpp:25:     int* w = new int[v.size()];
	call	__cxa_throw_bad_array_new_length@PLT	#
.L47:
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movl	-40(%rbp), %eax	# i, tmp132
	movslq	%eax, %rdx	# tmp132, _1
	movq	-56(%rbp), %rax	# v, tmp133
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp133,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movl	-40(%rbp), %edx	# i, tmp134
	movslq	%edx, %rdx	# tmp134, _3
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	leaq	0(,%rdx,4), %rcx	#, _4
	movq	-24(%rbp), %rdx	# w, tmp135
	addq	%rcx, %rdx	# _4, _5
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movl	(%rax), %eax	# *_2, _6
	movl	%eax, (%rdx)	# _6, *_5
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	addl	$1, -40(%rbp)	#, i
.L46:
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movl	-40(%rbp), %eax	# i, tmp136
	movslq	%eax, %rbx	# tmp136, _7
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	movq	-56(%rbp), %rax	# v, tmp137
	movq	%rax, %rdi	# tmp137,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:26:     for (int i = 0; i < v.size(); i++) w[i] = v[i];
	cmpq	%rax, %rbx	# _8, _7
	setb	%al	#, retval.19_62
	testb	%al, %al	# retval.19_62
	jne	.L47	#,
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	movl	$0, -36(%rbp)	#, i
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	jmp	.L48	#
.L52:
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	movl	$0, -32(%rbp)	#, j
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	jmp	.L49	#
.L51:
# measure.cpp:30:             if (w[j] > w[j+1])
	movl	-32(%rbp), %eax	# j, tmp138
	cltq
# measure.cpp:30:             if (w[j] > w[j+1])
	leaq	0(,%rax,4), %rdx	#, _10
	movq	-24(%rbp), %rax	# w, tmp139
	addq	%rdx, %rax	# _10, _11
	movl	(%rax), %edx	# *_11, _12
# measure.cpp:30:             if (w[j] > w[j+1])
	movl	-32(%rbp), %eax	# j, tmp140
	cltq
	addq	$1, %rax	#, _14
	leaq	0(,%rax,4), %rcx	#, _15
	movq	-24(%rbp), %rax	# w, tmp141
	addq	%rcx, %rax	# _15, _16
	movl	(%rax), %eax	# *_16, _17
# measure.cpp:30:             if (w[j] > w[j+1])
	cmpl	%eax, %edx	# _17, _12
	jle	.L50	#,
# measure.cpp:31:                 swap(w[j], w[j+1]);
	movl	-32(%rbp), %eax	# j, tmp142
	cltq
	addq	$1, %rax	#, _19
	leaq	0(,%rax,4), %rdx	#, _20
	movq	-24(%rbp), %rax	# w, tmp143
	addq	%rax, %rdx	# tmp143, _21
# measure.cpp:31:                 swap(w[j], w[j+1]);
	movl	-32(%rbp), %eax	# j, tmp144
	cltq
# measure.cpp:31:                 swap(w[j], w[j+1]);
	leaq	0(,%rax,4), %rcx	#, _23
	movq	-24(%rbp), %rax	# w, tmp145
	addq	%rcx, %rax	# _23, _24
# measure.cpp:31:                 swap(w[j], w[j+1]);
	movq	%rdx, %rsi	# _21,
	movq	%rax, %rdi	# _24,
	call	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_	#
.L50:
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	addl	$1, -32(%rbp)	#, j
.L49:
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	movl	-32(%rbp), %eax	# j, tmp146
	movslq	%eax, %rbx	# tmp146, _25
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	movq	-56(%rbp), %rax	# v, tmp147
	movq	%rax, %rdi	# tmp147,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	movl	-36(%rbp), %edx	# i, tmp148
	movslq	%edx, %rdx	# tmp148, _27
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	subq	%rdx, %rax	# _27, _28
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	subq	$1, %rax	#, _29
# measure.cpp:29:         for (int j = 0; j < v.size()-i-1; j++)
	cmpq	%rax, %rbx	# _29, _25
	setb	%al	#, retval.20_75
	testb	%al, %al	# retval.20_75
	jne	.L51	#,
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	addl	$1, -36(%rbp)	#, i
.L48:
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	movl	-36(%rbp), %eax	# i, tmp149
	movslq	%eax, %rbx	# tmp149, _30
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	movq	-56(%rbp), %rax	# v, tmp150
	movq	%rax, %rdi	# tmp150,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	subq	$1, %rax	#, _32
# measure.cpp:28:     for (int i = 0; i < v.size()-1; i++)
	cmpq	%rax, %rbx	# _32, _30
	setb	%al	#, retval.21_65
	testb	%al, %al	# retval.21_65
	jne	.L52	#,
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movl	$0, -28(%rbp)	#, i
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	jmp	.L53	#
.L54:
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movl	-28(%rbp), %eax	# i, tmp151
	cltq
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	leaq	0(,%rax,4), %rdx	#, _34
	movq	-24(%rbp), %rax	# w, tmp152
	addq	%rdx, %rax	# _34, _35
	movl	(%rax), %ebx	# *_35, _36
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movl	-28(%rbp), %eax	# i, tmp153
	movslq	%eax, %rdx	# tmp153, _37
	movq	-56(%rbp), %rax	# v, tmp154
	movq	%rdx, %rsi	# _37,
	movq	%rax, %rdi	# tmp154,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movl	%ebx, (%rax)	# _36, *_38
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	addl	$1, -28(%rbp)	#, i
.L53:
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movl	-28(%rbp), %eax	# i, tmp155
	movslq	%eax, %rbx	# tmp155, _39
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	movq	-56(%rbp), %rax	# v, tmp156
	movq	%rax, %rdi	# tmp156,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:33: 	for (int i = 0; i < v.size(); i++) v[i] = w[i];
	cmpq	%rax, %rbx	# _40, _39
	setb	%al	#, retval.22_68
	testb	%al, %al	# retval.22_68
	jne	.L54	#,
# measure.cpp:34: 	delete[] w;
	cmpq	$0, -24(%rbp)	#, w
	je	.L56	#,
# measure.cpp:34: 	delete[] w;
	movq	-24(%rbp), %rax	# w, tmp157
	movq	%rax, %rdi	# tmp157,
	call	_ZdaPv@PLT	#
.L56:
# measure.cpp:35: }
	nop	
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9706:
	.size	_Z13bubble_sort_3RSt6vectorIiSaIiEE, .-_Z13bubble_sort_3RSt6vectorIiSaIiEE
	.section	.text._ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE,"axG",@progbits,_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE,comdat
	.weak	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	.type	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE, @function
_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE:
.LFB9708:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __d, __d
# /usr/include/c++/11/chrono:276: 	return __dc::__cast(__d);
	movq	-8(%rbp), %rax	# __d, tmp84
	movq	%rax, %rdi	# tmp84,
	call	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE	#
# /usr/include/c++/11/chrono:277:       }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9708:
	.size	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE, .-_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	.section	.text._ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE,"axG",@progbits,_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE,comdat
	.weak	_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	.type	_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE, @function
_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE:
.LFB9709:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -40(%rbp)	# __lhs, __lhs
	movq	%rsi, -48(%rbp)	# __rhs, __rhs
# /usr/include/c++/11/chrono:1042:       operator-(const time_point<_Clock, _Dur1>& __lhs,
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp93
	movq	%rax, -8(%rbp)	# tmp93, D.232055
	xorl	%eax, %eax	# tmp93
# /usr/include/c++/11/chrono:1044:       { return __lhs.time_since_epoch() - __rhs.time_since_epoch(); }
	movq	-48(%rbp), %rax	# __rhs, tmp84
	movq	%rax, %rdi	# tmp84,
	call	_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv	#
	movq	%rax, -16(%rbp)	# tmp86, D.211367
# /usr/include/c++/11/chrono:1044:       { return __lhs.time_since_epoch() - __rhs.time_since_epoch(); }
	movq	-40(%rbp), %rax	# __lhs, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv	#
	movq	%rax, -24(%rbp)	# tmp89, D.211366
# /usr/include/c++/11/chrono:1044:       { return __lhs.time_since_epoch() - __rhs.time_since_epoch(); }
	leaq	-16(%rbp), %rdx	#, tmp90
	leaq	-24(%rbp), %rax	#, tmp91
	movq	%rdx, %rsi	# tmp90,
	movq	%rax, %rdi	# tmp91,
	call	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_	#
# /usr/include/c++/11/chrono:1044:       { return __lhs.time_since_epoch() - __rhs.time_since_epoch(); }
	movq	-8(%rbp), %rdx	# D.232055, tmp94
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp94
	je	.L61	#,
	call	__stack_chk_fail@PLT	#
.L61:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9709:
	.size	_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE, .-_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	.section	.text._ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_,"axG",@progbits,_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_,comdat
	.weak	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_
	.type	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_, @function
_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_:
.LFB9710:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$72, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)	# __lhs, __lhs
	movq	%rsi, -80(%rbp)	# __rhs, __rhs
# /usr/include/c++/11/chrono:660:       operator-(const duration<_Rep1, _Period1>& __lhs,
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp96
	movq	%rax, -24(%rbp)	# tmp96, D.232056
	xorl	%eax, %eax	# tmp96
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	movq	-72(%rbp), %rax	# __lhs, tmp87
	movq	(%rax), %rax	# *__lhs_5(D), tmp88
	movq	%rax, -56(%rbp)	# tmp88, D.211384
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	leaq	-56(%rbp), %rax	#, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv	#
	movq	%rax, %rbx	#, _1
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	movq	-80(%rbp), %rax	# __rhs, tmp90
	movq	(%rax), %rax	# *__rhs_8(D), tmp91
	movq	%rax, -48(%rbp)	# tmp91, D.211385
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	leaq	-48(%rbp), %rax	#, tmp92
	movq	%rax, %rdi	# tmp92,
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv	#
	movq	%rax, %rdx	#, _2
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	movq	%rbx, %rax	# _1, _1
	subq	%rdx, %rax	# _2, _1
	movq	%rax, -40(%rbp)	# _3, D.211386
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	leaq	-40(%rbp), %rdx	#, tmp93
	leaq	-32(%rbp), %rax	#, tmp94
	movq	%rdx, %rsi	# tmp93,
	movq	%rax, %rdi	# tmp94,
	call	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_	#
# /usr/include/c++/11/chrono:666: 	return __cd(__cd(__lhs).count() - __cd(__rhs).count());
	movq	-32(%rbp), %rax	# D.211387, D.231913
# /usr/include/c++/11/chrono:667:       }
	movq	-24(%rbp), %rdx	# D.232056, tmp97
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp97
	je	.L64	#,
	call	__stack_chk_fail@PLT	#
.L64:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9710:
	.size	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_, .-_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_
	.section	.text._ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv,"axG",@progbits,_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv,comdat
	.align 2
	.weak	_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	.type	_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv, @function
_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv:
.LFB9711:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/chrono:899: 	{ return __d; }
	movq	-8(%rbp), %rax	# this, tmp84
	movq	(%rax), %rax	# this_2(D)->__d, D.231911
# /usr/include/c++/11/chrono:899: 	{ return __d; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9711:
	.size	_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv, .-_ZNKSt6chrono10time_pointINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	.section	.rodata
.LC1:
	.string	"Time taken by program is : "
.LC2:
	.string	" sec"
	.text
	.globl	main
	.type	main, @function
main:
.LFB9707:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9707
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$88, %rsp	#,
	.cfi_offset 3, -24
# measure.cpp:38: {
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp146
	movq	%rax, -24(%rbp)	# tmp146, D.232060
	xorl	%eax, %eax	# tmp146
# measure.cpp:39: 	int seed = time(0);
	movl	$0, %edi	#,
	call	time@PLT	#
# measure.cpp:39: 	int seed = time(0);
	movl	%eax, -92(%rbp)	# _1, seed
# measure.cpp:40: 	srand(seed);
	movl	-92(%rbp), %eax	# seed, seed.23_2
	movl	%eax, %edi	# seed.23_2,
	call	srand@PLT	#
# measure.cpp:41: 	vector<int> v(200000);
	leaq	-64(%rbp), %rax	#, tmp101
	movq	%rax, %rdi	# tmp101,
	call	_ZNSaIiEC1Ev	#
	leaq	-64(%rbp), %rdx	#, tmp102
	leaq	-48(%rbp), %rax	#, tmp103
	movl	$200000, %esi	#,
	movq	%rax, %rdi	# tmp103,
.LEHB3:
	call	_ZNSt6vectorIiSaIiEEC1EmRKS0_	#
.LEHE3:
	leaq	-64(%rbp), %rax	#, tmp104
	movq	%rax, %rdi	# tmp104,
	call	_ZNSaIiED1Ev	#
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	movl	$0, -96(%rbp)	#, i
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	jmp	.L68	#
.L69:
# measure.cpp:43: 		v[i] = rand() % 200000;
	call	rand@PLT	#
# measure.cpp:43: 		v[i] = rand() % 200000;
	movslq	%eax, %rdx	# _3, tmp105
	imulq	$351843721, %rdx, %rdx	#, tmp105, tmp106
	shrq	$32, %rdx	#, tmp107
	sarl	$14, %edx	#, tmp108
	movl	%eax, %ecx	# _3, tmp109
	sarl	$31, %ecx	#, tmp109
	movl	%edx, %ebx	# tmp108, tmp108
	subl	%ecx, %ebx	# tmp109, tmp108
	imull	$200000, %ebx, %edx	#, _4, tmp110
	subl	%edx, %eax	# tmp110, _3
	movl	%eax, %ebx	# _3, _4
# measure.cpp:43: 		v[i] = rand() % 200000;
	movl	-96(%rbp), %eax	# i, tmp111
	movslq	%eax, %rdx	# tmp111, _5
	leaq	-48(%rbp), %rax	#, tmp112
	movq	%rdx, %rsi	# _5,
	movq	%rax, %rdi	# tmp112,
	call	_ZNSt6vectorIiSaIiEEixEm	#
# measure.cpp:43: 		v[i] = rand() % 200000;
	movl	%ebx, (%rax)	# _4, *_6
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	addl	$1, -96(%rbp)	#, i
.L68:
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	movl	-96(%rbp), %eax	# i, tmp113
	movslq	%eax, %rbx	# tmp113, _7
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	leaq	-48(%rbp), %rax	#, tmp114
	movq	%rax, %rdi	# tmp114,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# measure.cpp:42: 	for (int i = 0; i < v.size(); i++) {
	cmpq	%rax, %rbx	# _8, _7
	setb	%al	#, retval.24_28
	testb	%al, %al	# retval.24_28
	jne	.L69	#,
# measure.cpp:46: 	auto start = chrono::high_resolution_clock::now();
	call	_ZNSt6chrono3_V212system_clock3nowEv@PLT	#
	movq	%rax, -88(%rbp)	# tmp116, start
# measure.cpp:51: 	bubble_sort_3(v);
	leaq	-48(%rbp), %rax	#, tmp117
	movq	%rax, %rdi	# tmp117,
.LEHB4:
	call	_Z13bubble_sort_3RSt6vectorIiSaIiEE	#
# measure.cpp:53: 	auto end = chrono::high_resolution_clock::now();
	call	_ZNSt6chrono3_V212system_clock3nowEv@PLT	#
	movq	%rax, -80(%rbp)	# tmp119, end
# measure.cpp:57: 	chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	leaq	-88(%rbp), %rdx	#, tmp120
	leaq	-80(%rbp), %rax	#, tmp121
	movq	%rdx, %rsi	# tmp120,
	movq	%rax, %rdi	# tmp121,
	call	_ZNSt6chronomiINS_3_V212system_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE	#
	movq	%rax, -72(%rbp)	# tmp123, D.211271
# measure.cpp:57: 	chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	leaq	-72(%rbp), %rax	#, tmp124
	movq	%rax, %rdi	# tmp124,
	call	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE	#
	movq	%rax, -64(%rbp)	# tmp126, MEM[(struct duration *)_55]
# measure.cpp:57: 	chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	leaq	-64(%rbp), %rax	#, tmp127
	movq	%rax, %rdi	# tmp127,
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv	#
# measure.cpp:57: 	chrono::duration_cast<chrono::nanoseconds>(end - start).count();
	pxor	%xmm0, %xmm0	# tmp128
	cvtsi2sdq	%rax, %xmm0	# _9, tmp128
	movsd	%xmm0, -56(%rbp)	# tmp128, time_taken
# measure.cpp:59: 	time_taken *= 1e-9;
	movsd	-56(%rbp), %xmm1	# time_taken, tmp130
	movsd	.LC0(%rip), %xmm0	#, tmp131
	mulsd	%xmm1, %xmm0	# tmp130, tmp129
	movsd	%xmm0, -56(%rbp)	# tmp129, time_taken
# measure.cpp:61: 	cout << "Time taken by program is : " << fixed
	leaq	.LC1(%rip), %rax	#, tmp132
	movq	%rax, %rsi	# tmp132,
	leaq	_ZSt4cout(%rip), %rax	#, tmp133
	movq	%rax, %rdi	# tmp133,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
	movq	%rax, %rdx	#, _10
# measure.cpp:61: 	cout << "Time taken by program is : " << fixed
	leaq	_ZSt5fixedRSt8ios_base(%rip), %rax	#, tmp134
	movq	%rax, %rsi	# tmp134,
	movq	%rdx, %rdi	# _10,
	call	_ZNSolsEPFRSt8ios_baseS0_E@PLT	#
# measure.cpp:61: 	cout << "Time taken by program is : " << fixed
	movq	%rax, %rdx	#, _11
# measure.cpp:62: 		<< time_taken << setprecision(9);
	movq	-56(%rbp), %rax	# time_taken, tmp135
	movq	%rax, %xmm0	# tmp135,
	movq	%rdx, %rdi	# _11,
	call	_ZNSolsEd@PLT	#
# measure.cpp:62: 		<< time_taken << setprecision(9);
	movq	%rax, %rbx	#, _12
# measure.cpp:62: 		<< time_taken << setprecision(9);
	movl	$9, %edi	#,
	call	_ZSt12setprecisioni	#
	movl	%eax, %esi	# D.231832,
	movq	%rbx, %rdi	# _12,
	call	_ZStlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_St13_Setprecision@PLT	#
# measure.cpp:63: 	cout << " sec" << endl;
	leaq	.LC2(%rip), %rax	#, tmp136
	movq	%rax, %rsi	# tmp136,
	leaq	_ZSt4cout(%rip), %rax	#, tmp137
	movq	%rax, %rdi	# tmp137,
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT	#
# measure.cpp:63: 	cout << " sec" << endl;
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx	#, tmp139
	movq	%rdx, %rsi	# tmp138,
	movq	%rax, %rdi	# _13,
	call	_ZNSolsEPFRSoS_E@PLT	#
.LEHE4:
# measure.cpp:64: 	return 0;
	movl	$0, %ebx	#, _50
# measure.cpp:65: }
	leaq	-48(%rbp), %rax	#, tmp140
	movq	%rax, %rdi	# tmp140,
	call	_ZNSt6vectorIiSaIiEED1Ev	#
	movl	%ebx, %eax	# _50, <retval>
	movq	-24(%rbp), %rdx	# D.232060, tmp147
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp147
	je	.L73	#,
	jmp	.L76	#
.L74:
	endbr64	
	movq	%rax, %rbx	#, tmp143
	leaq	-64(%rbp), %rax	#, tmp142
	movq	%rax, %rdi	# tmp142,
	call	_ZNSaIiED1Ev	#
	movq	%rbx, %rax	# tmp143, D.232057
	movq	%rax, %rdi	# D.232057,
.LEHB5:
	call	_Unwind_Resume@PLT	#
.L75:
	endbr64	
	movq	%rax, %rbx	#, tmp145
	leaq	-48(%rbp), %rax	#, tmp144
	movq	%rax, %rdi	# tmp144,
	call	_ZNSt6vectorIiSaIiEED1Ev	#
	movq	%rbx, %rax	# tmp145, D.232058
	movq	%rax, %rdi	# D.232058,
	call	_Unwind_Resume@PLT	#
.LEHE5:
.L76:
	call	__stack_chk_fail@PLT	#
.L73:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE9707:
	.section	.gcc_except_table
.LLSDA9707:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9707-.LLSDACSB9707
.LLSDACSB9707:
	.uleb128 .LEHB3-.LFB9707
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L74-.LFB9707
	.uleb128 0
	.uleb128 .LEHB4-.LFB9707
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L75-.LFB9707
	.uleb128 0
	.uleb128 .LEHB5-.LFB9707
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE9707:
	.text
	.size	main, .-main
	.section	.text._ZNKSt6vectorIiSaIiEE4sizeEv,"axG",@progbits,_ZNKSt6vectorIiSaIiEE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorIiSaIiEE4sizeEv
	.type	_ZNKSt6vectorIiSaIiEE4sizeEv, @function
_ZNKSt6vectorIiSaIiEE4sizeEv:
.LFB10401:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:919:       { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }
	movq	-8(%rbp), %rax	# this, tmp88
	movq	8(%rax), %rdx	# this_6(D)->D.180948._M_impl.D.180294._M_finish, _1
# /usr/include/c++/11/bits/stl_vector.h:919:       { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }
	movq	-8(%rbp), %rax	# this, tmp89
	movq	(%rax), %rcx	# this_6(D)->D.180948._M_impl.D.180294._M_start, _2
# /usr/include/c++/11/bits/stl_vector.h:919:       { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }
	movq	%rdx, %rax	# _1, _1
	subq	%rcx, %rax	# _2, _1
	sarq	$2, %rax	#, tmp90
# /usr/include/c++/11/bits/stl_vector.h:919:       { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10401:
	.size	_ZNKSt6vectorIiSaIiEE4sizeEv, .-_ZNKSt6vectorIiSaIiEE4sizeEv
	.section	.text._ZNSt6vectorIiSaIiEEixEm,"axG",@progbits,_ZNSt6vectorIiSaIiEEixEm,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEEixEm
	.type	_ZNSt6vectorIiSaIiEEixEm, @function
_ZNSt6vectorIiSaIiEEixEm:
.LFB10402:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_vector.h:1046: 	return *(this->_M_impl._M_start + __n);
	movq	-8(%rbp), %rax	# this, tmp86
	movq	(%rax), %rdx	# this_4(D)->D.180948._M_impl.D.180294._M_start, _1
# /usr/include/c++/11/bits/stl_vector.h:1046: 	return *(this->_M_impl._M_start + __n);
	movq	-16(%rbp), %rax	# __n, tmp87
	salq	$2, %rax	#, _2
# /usr/include/c++/11/bits/stl_vector.h:1046: 	return *(this->_M_impl._M_start + __n);
	addq	%rdx, %rax	# _1, _6
# /usr/include/c++/11/bits/stl_vector.h:1047:       }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10402:
	.size	_ZNSt6vectorIiSaIiEEixEm, .-_ZNSt6vectorIiSaIiEEixEm
	.section	.text._ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_,"axG",@progbits,_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_,comdat
	.weak	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_
	.type	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_, @function
_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_:
.LFB10404:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __t, __t
# /usr/include/c++/11/bits/move.h:105:     { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
	movq	-8(%rbp), %rax	# __t, _2
# /usr/include/c++/11/bits/move.h:105:     { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10404:
	.size	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_, .-_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_
	.section	.text._ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_,"axG",@progbits,_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_,comdat
	.weak	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_
	.type	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_, @function
_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_:
.LFB10403:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# __a, __a
	movq	%rsi, -32(%rbp)	# __b, __b
# /usr/include/c++/11/bits/move.h:196:     swap(_Tp& __a, _Tp& __b)
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp93
	movq	%rax, -8(%rbp)	# tmp93, D.232063
	xorl	%eax, %eax	# tmp93
# /usr/include/c++/11/bits/move.h:204:       _Tp __tmp = _GLIBCXX_MOVE(__a);
	movq	-24(%rbp), %rax	# __a, tmp88
	movq	%rax, %rdi	# tmp88,
	call	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_	#
# /usr/include/c++/11/bits/move.h:204:       _Tp __tmp = _GLIBCXX_MOVE(__a);
	movl	(%rax), %eax	# *_1, _2
	movl	%eax, -12(%rbp)	# _2, __tmp
# /usr/include/c++/11/bits/move.h:205:       __a = _GLIBCXX_MOVE(__b);
	movq	-32(%rbp), %rax	# __b, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_	#
# /usr/include/c++/11/bits/move.h:205:       __a = _GLIBCXX_MOVE(__b);
	movl	(%rax), %edx	# *_3, _4
	movq	-24(%rbp), %rax	# __a, tmp90
	movl	%edx, (%rax)	# _4, *__a_8(D)
# /usr/include/c++/11/bits/move.h:206:       __b = _GLIBCXX_MOVE(__tmp);
	leaq	-12(%rbp), %rax	#, tmp91
	movq	%rax, %rdi	# tmp91,
	call	_ZSt4moveIRiEONSt16remove_referenceIT_E4typeEOS2_	#
# /usr/include/c++/11/bits/move.h:206:       __b = _GLIBCXX_MOVE(__tmp);
	movl	(%rax), %edx	# *_5, _6
	movq	-32(%rbp), %rax	# __b, tmp92
	movl	%edx, (%rax)	# _6, *__b_11(D)
# /usr/include/c++/11/bits/move.h:207:     }
	nop	
	movq	-8(%rbp), %rax	# D.232063, tmp94
	subq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp94
	je	.L84	#,
	call	__stack_chk_fail@PLT	#
.L84:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10403:
	.size	_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_, .-_ZSt4swapIiENSt9enable_ifIXsrSt6__and_IJSt6__not_ISt15__is_tuple_likeIT_EESt21is_move_constructibleIS4_ESt18is_move_assignableIS4_EEE5valueEvE4typeERS4_SE_
	.section	.text._ZNSt6vectorIiSaIiEEC2ERKS1_,"axG",@progbits,_ZNSt6vectorIiSaIiEEC5ERKS1_,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEEC2ERKS1_
	.type	_ZNSt6vectorIiSaIiEEC2ERKS1_, @function
_ZNSt6vectorIiSaIiEEC2ERKS1_:
.LFB10406:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10406
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r13	#
	pushq	%r12	#
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 13, -24
	.cfi_offset 12, -32
	.cfi_offset 3, -40
	movq	%rdi, -56(%rbp)	# this, this
	movq	%rsi, -64(%rbp)	# __x, __x
# /usr/include/c++/11/bits/stl_vector.h:553:       vector(const vector& __x)
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp106
	movq	%rax, -40(%rbp)	# tmp106, D.232066
	xorl	%eax, %eax	# tmp106
# /usr/include/c++/11/bits/stl_vector.h:555: 	_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
	movq	-56(%rbp), %rbx	# this, _1
# /usr/include/c++/11/bits/stl_vector.h:555: 	_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
	movq	-64(%rbp), %rax	# __x, _2
	movq	%rax, %rdi	# _2,
	call	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rdx	#, _3
# /usr/include/c++/11/bits/stl_vector.h:555: 	_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
	leaq	-41(%rbp), %rax	#, tmp95
	movq	%rdx, %rsi	# _3,
	movq	%rax, %rdi	# tmp95,
.LEHB6:
	call	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_	#
.LEHE6:
	movq	-64(%rbp), %rax	# __x, tmp96
	movq	%rax, %rdi	# tmp96,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
	movq	%rax, %rcx	#, _4
	leaq	-41(%rbp), %rax	#, tmp97
	movq	%rax, %rdx	# tmp97,
	movq	%rcx, %rsi	# _4,
	movq	%rbx, %rdi	# _1,
.LEHB7:
	call	_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_	#
.LEHE7:
# /usr/include/c++/11/bits/stl_vector.h:555: 	_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
	leaq	-41(%rbp), %rax	#, tmp98
	movq	%rax, %rdi	# tmp98,
	call	_ZNSaIiED1Ev	#
# /usr/include/c++/11/bits/stl_vector.h:560: 				      _M_get_Tp_allocator());
	movq	-56(%rbp), %rax	# this, _5
	movq	%rax, %rdi	# _5,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %r13	#, _6
# /usr/include/c++/11/bits/stl_vector.h:558: 	  std::__uninitialized_copy_a(__x.begin(), __x.end(),
	movq	-56(%rbp), %rax	# this, tmp99
	movq	(%rax), %rbx	# this_11(D)->D.180948._M_impl.D.180294._M_start, _7
	movq	-64(%rbp), %rax	# __x, tmp100
	movq	%rax, %rdi	# tmp100,
	call	_ZNKSt6vectorIiSaIiEE3endEv	#
	movq	%rax, %r12	#, D.231631
	movq	-64(%rbp), %rax	# __x, tmp101
	movq	%rax, %rdi	# tmp101,
	call	_ZNKSt6vectorIiSaIiEE5beginEv	#
	movq	%r13, %rcx	# _6,
	movq	%rbx, %rdx	# _7,
	movq	%r12, %rsi	# D.231631,
	movq	%rax, %rdi	# D.231632,
.LEHB8:
	call	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E	#
.LEHE8:
# /usr/include/c++/11/bits/stl_vector.h:557: 	this->_M_impl._M_finish =
	movq	-56(%rbp), %rdx	# this, tmp102
	movq	%rax, 8(%rdx)	# _8, this_11(D)->D.180948._M_impl.D.180294._M_finish
# /usr/include/c++/11/bits/stl_vector.h:561:       }
	nop	
	movq	-40(%rbp), %rax	# D.232066, tmp107
	subq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp107
	je	.L88	#,
	jmp	.L91	#
.L89:
	endbr64	
# /usr/include/c++/11/bits/stl_vector.h:555: 	_Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
	movq	%rax, %rbx	#, tmp104
	leaq	-41(%rbp), %rax	#, tmp103
	movq	%rax, %rdi	# tmp103,
	call	_ZNSaIiED1Ev	#
	movq	%rbx, %rax	# tmp104, D.232064
	movq	%rax, %rdi	# D.232064,
.LEHB9:
	call	_Unwind_Resume@PLT	#
.L90:
	endbr64	
# /usr/include/c++/11/bits/stl_vector.h:561:       }
	movq	%rax, %rbx	#, tmp105
	movq	-56(%rbp), %rax	# this, _9
	movq	%rax, %rdi	# _9,
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev	#
	movq	%rbx, %rax	# tmp105, D.232065
	movq	%rax, %rdi	# D.232065,
	call	_Unwind_Resume@PLT	#
.LEHE9:
.L91:
	call	__stack_chk_fail@PLT	#
.L88:
	addq	$40, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%r13	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10406:
	.section	.gcc_except_table
.LLSDA10406:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE10406-.LLSDACSB10406
.LLSDACSB10406:
	.uleb128 .LEHB6-.LFB10406
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB10406
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L89-.LFB10406
	.uleb128 0
	.uleb128 .LEHB8-.LFB10406
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L90-.LFB10406
	.uleb128 0
	.uleb128 .LEHB9-.LFB10406
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
.LLSDACSE10406:
	.section	.text._ZNSt6vectorIiSaIiEEC2ERKS1_,"axG",@progbits,_ZNSt6vectorIiSaIiEEC5ERKS1_,comdat
	.size	_ZNSt6vectorIiSaIiEEC2ERKS1_, .-_ZNSt6vectorIiSaIiEEC2ERKS1_
	.weak	_ZNSt6vectorIiSaIiEEC1ERKS1_
	.set	_ZNSt6vectorIiSaIiEEC1ERKS1_,_ZNSt6vectorIiSaIiEEC2ERKS1_
	.section	.text._ZNSt6vectorIiSaIiEED2Ev,"axG",@progbits,_ZNSt6vectorIiSaIiEED5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEED2Ev
	.type	_ZNSt6vectorIiSaIiEED2Ev, @function
_ZNSt6vectorIiSaIiEED2Ev:
.LFB10409:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10409
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:681: 		      _M_get_Tp_allocator());
	movq	-8(%rbp), %rax	# this, _1
	movq	%rax, %rdi	# _1,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rdx	#, _2
# /usr/include/c++/11/bits/stl_vector.h:680: 	std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
	movq	-8(%rbp), %rax	# this, tmp87
	movq	8(%rax), %rcx	# this_6(D)->D.180948._M_impl.D.180294._M_finish, _3
	movq	-8(%rbp), %rax	# this, tmp88
	movq	(%rax), %rax	# this_6(D)->D.180948._M_impl.D.180294._M_start, _4
	movq	%rcx, %rsi	# _3,
	movq	%rax, %rdi	# _4,
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E	#
# /usr/include/c++/11/bits/stl_vector.h:683:       }
	movq	-8(%rbp), %rax	# this, _5
	movq	%rax, %rdi	# _5,
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev	#
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10409:
	.section	.gcc_except_table
.LLSDA10409:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE10409-.LLSDACSB10409
.LLSDACSB10409:
.LLSDACSE10409:
	.section	.text._ZNSt6vectorIiSaIiEED2Ev,"axG",@progbits,_ZNSt6vectorIiSaIiEED5Ev,comdat
	.size	_ZNSt6vectorIiSaIiEED2Ev, .-_ZNSt6vectorIiSaIiEED2Ev
	.weak	_ZNSt6vectorIiSaIiEED1Ev
	.set	_ZNSt6vectorIiSaIiEED1Ev,_ZNSt6vectorIiSaIiEED2Ev
	.section	.text._ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv,"axG",@progbits,_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv,comdat
	.weak	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
	.type	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv, @function
_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv:
.LFB10412:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
# /usr/include/c++/11/ext/alloc_traits.h:104:     { return _Base_type::propagate_on_container_copy_assignment::value; }
	movl	$0, %eax	#, _1
# /usr/include/c++/11/ext/alloc_traits.h:104:     { return _Base_type::propagate_on_container_copy_assignment::value; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10412:
	.size	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv, .-_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv
	.section	.text._ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv,"axG",@progbits,_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv,comdat
	.weak	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
	.type	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv, @function
_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv:
.LFB10413:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
# /usr/include/c++/11/ext/alloc_traits.h:113:     { return _Base_type::is_always_equal::value; }
	movl	$1, %eax	#, _1
# /usr/include/c++/11/ext/alloc_traits.h:113:     { return _Base_type::is_always_equal::value; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10413:
	.size	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv, .-_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv
	.section	.text._ZNSt6vectorIiSaIiEEaSERKS1_,"axG",@progbits,_ZNSt6vectorIiSaIiEEaSERKS1_,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEEaSERKS1_
	.type	_ZNSt6vectorIiSaIiEEaSERKS1_, @function
_ZNSt6vectorIiSaIiEEaSERKS1_:
.LFB10411:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r14	#
	pushq	%r13	#
	pushq	%r12	#
	pushq	%rbx	#
	subq	$32, %rsp	#,
	.cfi_offset 14, -24
	.cfi_offset 13, -32
	.cfi_offset 12, -40
	.cfi_offset 3, -48
	movq	%rdi, -56(%rbp)	# this, this
	movq	%rsi, -64(%rbp)	# __x, __x
# /usr/include/c++/11/bits/vector.tcc:201:       if (&__x != this)
	movq	-64(%rbp), %rax	# __x, tmp149
	cmpq	-56(%rbp), %rax	# this, tmp149
	je	.L98	#,
# /usr/include/c++/11/bits/vector.tcc:205: 	  if (_Alloc_traits::_S_propagate_on_copy_assign())
	call	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE27_S_propagate_on_copy_assignEv	#
# /usr/include/c++/11/bits/vector.tcc:205: 	  if (_Alloc_traits::_S_propagate_on_copy_assign())
	testb	%al, %al	# retval.11_65
	je	.L99	#,
# /usr/include/c++/11/bits/vector.tcc:207: 	      if (!_Alloc_traits::_S_always_equal()
	call	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE15_S_always_equalEv	#
	xorl	$1, %eax	#, _2
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	testb	%al, %al	# _2
	je	.L100	#,
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	movq	-64(%rbp), %rax	# __x, _3
	movq	%rax, %rdi	# _3,
	call	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rbx	#, _4
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	movq	-56(%rbp), %rax	# this, _5
	movq	%rax, %rdi	# _5,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	movq	%rbx, %rsi	# _4,
	movq	%rax, %rdi	# _6,
	call	_ZStneRKSaIiES1_	#
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	testb	%al, %al	# _7
	je	.L100	#,
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	movl	$1, %eax	#, iftmp.13_54
	jmp	.L101	#
.L100:
# /usr/include/c++/11/bits/vector.tcc:208: 	          && _M_get_Tp_allocator() != __x._M_get_Tp_allocator())
	movl	$0, %eax	#, iftmp.13_54
.L101:
# /usr/include/c++/11/bits/vector.tcc:207: 	      if (!_Alloc_traits::_S_always_equal()
	testb	%al, %al	# iftmp.13_54
	je	.L102	#,
# /usr/include/c++/11/bits/vector.tcc:211: 		  this->clear();
	movq	-56(%rbp), %rax	# this, tmp150
	movq	%rax, %rdi	# tmp150,
	call	_ZNSt6vectorIiSaIiEE5clearEv	#
# /usr/include/c++/11/bits/vector.tcc:212: 		  _M_deallocate(this->_M_impl._M_start,
	movq	-56(%rbp), %rax	# this, _8
# /usr/include/c++/11/bits/vector.tcc:213: 				this->_M_impl._M_end_of_storage
	movq	-56(%rbp), %rdx	# this, tmp151
	movq	16(%rdx), %rcx	# this_62(D)->D.180948._M_impl.D.180294._M_end_of_storage, _9
# /usr/include/c++/11/bits/vector.tcc:214: 				- this->_M_impl._M_start);
	movq	-56(%rbp), %rdx	# this, tmp152
	movq	(%rdx), %rsi	# this_62(D)->D.180948._M_impl.D.180294._M_start, _10
# /usr/include/c++/11/bits/vector.tcc:214: 				- this->_M_impl._M_start);
	subq	%rsi, %rcx	# _10, _9
	movq	%rcx, %rdx	# _9, _11
	sarq	$2, %rdx	#, tmp153
# /usr/include/c++/11/bits/vector.tcc:212: 		  _M_deallocate(this->_M_impl._M_start,
	movq	%rdx, %rsi	# _12, _13
	movq	-56(%rbp), %rdx	# this, tmp154
	movq	(%rdx), %rcx	# this_62(D)->D.180948._M_impl.D.180294._M_start, _14
	movq	%rsi, %rdx	# _13,
	movq	%rcx, %rsi	# _14,
	movq	%rax, %rdi	# _8,
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim	#
# /usr/include/c++/11/bits/vector.tcc:215: 		  this->_M_impl._M_start = nullptr;
	movq	-56(%rbp), %rax	# this, tmp155
	movq	$0, (%rax)	#, this_62(D)->D.180948._M_impl.D.180294._M_start
# /usr/include/c++/11/bits/vector.tcc:216: 		  this->_M_impl._M_finish = nullptr;
	movq	-56(%rbp), %rax	# this, tmp156
	movq	$0, 8(%rax)	#, this_62(D)->D.180948._M_impl.D.180294._M_finish
# /usr/include/c++/11/bits/vector.tcc:217: 		  this->_M_impl._M_end_of_storage = nullptr;
	movq	-56(%rbp), %rax	# this, tmp157
	movq	$0, 16(%rax)	#, this_62(D)->D.180948._M_impl.D.180294._M_end_of_storage
.L102:
# /usr/include/c++/11/bits/vector.tcc:220: 				   __x._M_get_Tp_allocator());
	movq	-64(%rbp), %rax	# __x, _15
	movq	%rax, %rdi	# _15,
	call	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rbx	#, _16
# /usr/include/c++/11/bits/vector.tcc:219: 	      std::__alloc_on_copy(_M_get_Tp_allocator(),
	movq	-56(%rbp), %rax	# this, _17
	movq	%rax, %rdi	# _17,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
# /usr/include/c++/11/bits/vector.tcc:219: 	      std::__alloc_on_copy(_M_get_Tp_allocator(),
	movq	%rbx, %rsi	# _16,
	movq	%rax, %rdi	# _18,
	call	_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_	#
.L99:
# /usr/include/c++/11/bits/vector.tcc:223: 	  const size_type __xlen = __x.size();
	movq	-64(%rbp), %rax	# __x, tmp158
	movq	%rax, %rdi	# tmp158,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
	movq	%rax, -48(%rbp)	# tmp159, __xlen
# /usr/include/c++/11/bits/vector.tcc:224: 	  if (__xlen > capacity())
	movq	-56(%rbp), %rax	# this, tmp160
	movq	%rax, %rdi	# tmp160,
	call	_ZNKSt6vectorIiSaIiEE8capacityEv	#
# /usr/include/c++/11/bits/vector.tcc:224: 	  if (__xlen > capacity())
	cmpq	%rax, -48(%rbp)	# _19, __xlen
	seta	%al	#, retval.14_84
# /usr/include/c++/11/bits/vector.tcc:224: 	  if (__xlen > capacity())
	testb	%al, %al	# retval.14_84
	je	.L103	#,
# /usr/include/c++/11/bits/vector.tcc:226: 	      pointer __tmp = _M_allocate_and_copy(__xlen, __x.begin(),
	movq	-64(%rbp), %rax	# __x, tmp161
	movq	%rax, %rdi	# tmp161,
	call	_ZNKSt6vectorIiSaIiEE3endEv	#
	movq	%rax, %rbx	#, D.231737
	movq	-64(%rbp), %rax	# __x, tmp162
	movq	%rax, %rdi	# tmp162,
	call	_ZNKSt6vectorIiSaIiEE5beginEv	#
	movq	%rax, %rdx	#, D.231738
	movq	-48(%rbp), %rsi	# __xlen, tmp163
	movq	-56(%rbp), %rax	# this, tmp164
	movq	%rbx, %rcx	# D.231737,
	movq	%rax, %rdi	# tmp164,
	call	_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_	#
	movq	%rax, -40(%rbp)	# _102, __tmp
# /usr/include/c++/11/bits/vector.tcc:229: 			    _M_get_Tp_allocator());
	movq	-56(%rbp), %rax	# this, _20
	movq	%rax, %rdi	# _20,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rdx	#, _21
# /usr/include/c++/11/bits/vector.tcc:228: 	      std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
	movq	-56(%rbp), %rax	# this, tmp165
	movq	8(%rax), %rcx	# this_62(D)->D.180948._M_impl.D.180294._M_finish, _22
	movq	-56(%rbp), %rax	# this, tmp166
	movq	(%rax), %rax	# this_62(D)->D.180948._M_impl.D.180294._M_start, _23
	movq	%rcx, %rsi	# _22,
	movq	%rax, %rdi	# _23,
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E	#
# /usr/include/c++/11/bits/vector.tcc:230: 	      _M_deallocate(this->_M_impl._M_start,
	movq	-56(%rbp), %rax	# this, _24
# /usr/include/c++/11/bits/vector.tcc:231: 			    this->_M_impl._M_end_of_storage
	movq	-56(%rbp), %rdx	# this, tmp167
	movq	16(%rdx), %rcx	# this_62(D)->D.180948._M_impl.D.180294._M_end_of_storage, _25
# /usr/include/c++/11/bits/vector.tcc:232: 			    - this->_M_impl._M_start);
	movq	-56(%rbp), %rdx	# this, tmp168
	movq	(%rdx), %rsi	# this_62(D)->D.180948._M_impl.D.180294._M_start, _26
# /usr/include/c++/11/bits/vector.tcc:232: 			    - this->_M_impl._M_start);
	subq	%rsi, %rcx	# _26, _25
	movq	%rcx, %rdx	# _25, _27
	sarq	$2, %rdx	#, tmp169
# /usr/include/c++/11/bits/vector.tcc:230: 	      _M_deallocate(this->_M_impl._M_start,
	movq	%rdx, %rsi	# _28, _29
	movq	-56(%rbp), %rdx	# this, tmp170
	movq	(%rdx), %rcx	# this_62(D)->D.180948._M_impl.D.180294._M_start, _30
	movq	%rsi, %rdx	# _29,
	movq	%rcx, %rsi	# _30,
	movq	%rax, %rdi	# _24,
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim	#
# /usr/include/c++/11/bits/vector.tcc:233: 	      this->_M_impl._M_start = __tmp;
	movq	-56(%rbp), %rax	# this, tmp171
	movq	-40(%rbp), %rdx	# __tmp, tmp172
	movq	%rdx, (%rax)	# tmp172, this_62(D)->D.180948._M_impl.D.180294._M_start
# /usr/include/c++/11/bits/vector.tcc:234: 	      this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
	movq	-56(%rbp), %rax	# this, tmp173
	movq	(%rax), %rdx	# this_62(D)->D.180948._M_impl.D.180294._M_start, _31
# /usr/include/c++/11/bits/vector.tcc:234: 	      this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
	movq	-48(%rbp), %rax	# __xlen, tmp174
	salq	$2, %rax	#, _32
	addq	%rax, %rdx	# _32, _33
# /usr/include/c++/11/bits/vector.tcc:234: 	      this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
	movq	-56(%rbp), %rax	# this, tmp175
	movq	%rdx, 16(%rax)	# _33, this_62(D)->D.180948._M_impl.D.180294._M_end_of_storage
	jmp	.L104	#
.L103:
# /usr/include/c++/11/bits/vector.tcc:236: 	  else if (size() >= __xlen)
	movq	-56(%rbp), %rax	# this, tmp176
	movq	%rax, %rdi	# tmp176,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# /usr/include/c++/11/bits/vector.tcc:236: 	  else if (size() >= __xlen)
	cmpq	%rax, -48(%rbp)	# _34, __xlen
	setbe	%al	#, retval.15_86
# /usr/include/c++/11/bits/vector.tcc:236: 	  else if (size() >= __xlen)
	testb	%al, %al	# retval.15_86
	je	.L105	#,
# /usr/include/c++/11/bits/vector.tcc:239: 			    end(), _M_get_Tp_allocator());
	movq	-56(%rbp), %rax	# this, _35
	movq	%rax, %rdi	# _35,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %r12	#, _36
# /usr/include/c++/11/bits/vector.tcc:238: 	      std::_Destroy(std::copy(__x.begin(), __x.end(), begin()),
	movq	-56(%rbp), %rax	# this, tmp177
	movq	%rax, %rdi	# tmp177,
	call	_ZNSt6vectorIiSaIiEE3endEv	#
	movq	%rax, %rbx	#, D.231743
	movq	-56(%rbp), %rax	# this, tmp178
	movq	%rax, %rdi	# tmp178,
	call	_ZNSt6vectorIiSaIiEE5beginEv	#
	movq	%rax, %r14	#, D.231744
	movq	-64(%rbp), %rax	# __x, tmp179
	movq	%rax, %rdi	# tmp179,
	call	_ZNKSt6vectorIiSaIiEE3endEv	#
	movq	%rax, %r13	#, D.231745
	movq	-64(%rbp), %rax	# __x, tmp180
	movq	%rax, %rdi	# tmp180,
	call	_ZNKSt6vectorIiSaIiEE5beginEv	#
	movq	%r14, %rdx	# D.231744,
	movq	%r13, %rsi	# D.231745,
	movq	%rax, %rdi	# D.231746,
	call	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_	#
	movq	%r12, %rdx	# _36,
	movq	%rbx, %rsi	# D.231743,
	movq	%rax, %rdi	# D.231747,
	call	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E	#
	jmp	.L104	#
.L105:
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	movq	-56(%rbp), %rax	# this, tmp181
	movq	(%rax), %rbx	# this_62(D)->D.180948._M_impl.D.180294._M_start, _37
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	movq	-64(%rbp), %rax	# __x, tmp182
	movq	(%rax), %r12	# __x_61(D)->D.180948._M_impl.D.180294._M_start, _38
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	movq	-56(%rbp), %rax	# this, tmp183
	movq	%rax, %rdi	# tmp183,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	salq	$2, %rax	#, _40
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	leaq	(%r12,%rax), %rcx	#, _41
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	movq	-64(%rbp), %rax	# __x, tmp184
	movq	(%rax), %rax	# __x_61(D)->D.180948._M_impl.D.180294._M_start, _42
# /usr/include/c++/11/bits/vector.tcc:243: 	      std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
	movq	%rbx, %rdx	# _37,
	movq	%rcx, %rsi	# _41,
	movq	%rax, %rdi	# _42,
	call	_ZSt4copyIPiS0_ET0_T_S2_S1_	#
# /usr/include/c++/11/bits/vector.tcc:248: 					  _M_get_Tp_allocator());
	movq	-56(%rbp), %rax	# this, _43
	movq	%rax, %rdi	# _43,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %r13	#, _44
# /usr/include/c++/11/bits/vector.tcc:245: 	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
	movq	-56(%rbp), %rax	# this, tmp185
	movq	8(%rax), %r12	# this_62(D)->D.180948._M_impl.D.180294._M_finish, _45
# /usr/include/c++/11/bits/vector.tcc:246: 					  __x._M_impl._M_finish,
	movq	-64(%rbp), %rax	# __x, tmp186
	movq	8(%rax), %rbx	# __x_61(D)->D.180948._M_impl.D.180294._M_finish, _46
# /usr/include/c++/11/bits/vector.tcc:245: 	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
	movq	-64(%rbp), %rax	# __x, tmp187
	movq	(%rax), %r14	# __x_61(D)->D.180948._M_impl.D.180294._M_start, _47
# /usr/include/c++/11/bits/vector.tcc:245: 	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
	movq	-56(%rbp), %rax	# this, tmp188
	movq	%rax, %rdi	# tmp188,
	call	_ZNKSt6vectorIiSaIiEE4sizeEv	#
# /usr/include/c++/11/bits/vector.tcc:245: 	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
	salq	$2, %rax	#, _49
# /usr/include/c++/11/bits/vector.tcc:245: 	      std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
	addq	%r14, %rax	# _47, _50
	movq	%r13, %rcx	# _44,
	movq	%r12, %rdx	# _45,
	movq	%rbx, %rsi	# _46,
	movq	%rax, %rdi	# _50,
	call	_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E	#
.L104:
# /usr/include/c++/11/bits/vector.tcc:250: 	  this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
	movq	-56(%rbp), %rax	# this, tmp189
	movq	(%rax), %rdx	# this_62(D)->D.180948._M_impl.D.180294._M_start, _51
# /usr/include/c++/11/bits/vector.tcc:250: 	  this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
	movq	-48(%rbp), %rax	# __xlen, tmp190
	salq	$2, %rax	#, _52
	addq	%rax, %rdx	# _52, _53
# /usr/include/c++/11/bits/vector.tcc:250: 	  this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
	movq	-56(%rbp), %rax	# this, tmp191
	movq	%rdx, 8(%rax)	# _53, this_62(D)->D.180948._M_impl.D.180294._M_finish
.L98:
# /usr/include/c++/11/bits/vector.tcc:252:       return *this;
	movq	-56(%rbp), %rax	# this, _110
# /usr/include/c++/11/bits/vector.tcc:253:     }
	addq	$32, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%r13	#
	popq	%r14	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10411:
	.size	_ZNSt6vectorIiSaIiEEaSERKS1_, .-_ZNSt6vectorIiSaIiEEaSERKS1_
	.section	.text._ZNSaIiEC2Ev,"axG",@progbits,_ZNSaIiEC5Ev,comdat
	.align 2
	.weak	_ZNSaIiEC2Ev
	.type	_ZNSaIiEC2Ev, @function
_ZNSaIiEC2Ev:
.LFB10415:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/allocator.h:156:       allocator() _GLIBCXX_NOTHROW { }
	movq	-8(%rbp), %rax	# this, tmp82
	movq	%rax, %rdi	# tmp82,
	call	_ZN9__gnu_cxx13new_allocatorIiEC2Ev	#
# /usr/include/c++/11/bits/allocator.h:156:       allocator() _GLIBCXX_NOTHROW { }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10415:
	.size	_ZNSaIiEC2Ev, .-_ZNSaIiEC2Ev
	.weak	_ZNSaIiEC1Ev
	.set	_ZNSaIiEC1Ev,_ZNSaIiEC2Ev
	.section	.text._ZNSaIiED2Ev,"axG",@progbits,_ZNSaIiED5Ev,comdat
	.align 2
	.weak	_ZNSaIiED2Ev
	.type	_ZNSaIiED2Ev, @function
_ZNSaIiED2Ev:
.LFB10418:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/allocator.h:174:       ~allocator() _GLIBCXX_NOTHROW { }
	movq	-8(%rbp), %rax	# this, tmp82
	movq	%rax, %rdi	# tmp82,
	call	_ZN9__gnu_cxx13new_allocatorIiED2Ev	#
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10418:
	.size	_ZNSaIiED2Ev, .-_ZNSaIiED2Ev
	.weak	_ZNSaIiED1Ev
	.set	_ZNSaIiED1Ev,_ZNSaIiED2Ev
	.section	.text._ZNSt6vectorIiSaIiEEC2EmRKS0_,"axG",@progbits,_ZNSt6vectorIiSaIiEEC5EmRKS0_,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEEC2EmRKS0_
	.type	_ZNSt6vectorIiSaIiEEC2EmRKS0_, @function
_ZNSt6vectorIiSaIiEEC2EmRKS0_:
.LFB10421:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10421
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)	# this, this
	movq	%rsi, -32(%rbp)	# __n, __n
	movq	%rdx, -40(%rbp)	# __a, __a
# /usr/include/c++/11/bits/stl_vector.h:511:       : _Base(_S_check_init_len(__n, __a), __a)
	movq	-24(%rbp), %rbx	# this, _1
	movq	-40(%rbp), %rdx	# __a, tmp86
	movq	-32(%rbp), %rax	# __n, tmp87
	movq	%rdx, %rsi	# tmp86,
	movq	%rax, %rdi	# tmp87,
.LEHB10:
	call	_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_	#
	movq	%rax, %rcx	#, _2
	movq	-40(%rbp), %rax	# __a, tmp88
	movq	%rax, %rdx	# tmp88,
	movq	%rcx, %rsi	# _2,
	movq	%rbx, %rdi	# _1,
	call	_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_	#
.LEHE10:
# /usr/include/c++/11/bits/stl_vector.h:512:       { _M_default_initialize(__n); }
	movq	-32(%rbp), %rdx	# __n, tmp89
	movq	-24(%rbp), %rax	# this, tmp90
	movq	%rdx, %rsi	# tmp89,
	movq	%rax, %rdi	# tmp90,
.LEHB11:
	call	_ZNSt6vectorIiSaIiEE21_M_default_initializeEm	#
.LEHE11:
# /usr/include/c++/11/bits/stl_vector.h:512:       { _M_default_initialize(__n); }
	jmp	.L112	#
.L111:
	endbr64	
	movq	%rax, %rbx	#, tmp91
	movq	-24(%rbp), %rax	# this, _3
	movq	%rax, %rdi	# _3,
	call	_ZNSt12_Vector_baseIiSaIiEED2Ev	#
	movq	%rbx, %rax	# tmp91, D.232068
	movq	%rax, %rdi	# D.232068,
.LEHB12:
	call	_Unwind_Resume@PLT	#
.LEHE12:
.L112:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10421:
	.section	.gcc_except_table
.LLSDA10421:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE10421-.LLSDACSB10421
.LLSDACSB10421:
	.uleb128 .LEHB10-.LFB10421
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB11-.LFB10421
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L111-.LFB10421
	.uleb128 0
	.uleb128 .LEHB12-.LFB10421
	.uleb128 .LEHE12-.LEHB12
	.uleb128 0
	.uleb128 0
.LLSDACSE10421:
	.section	.text._ZNSt6vectorIiSaIiEEC2EmRKS0_,"axG",@progbits,_ZNSt6vectorIiSaIiEEC5EmRKS0_,comdat
	.size	_ZNSt6vectorIiSaIiEEC2EmRKS0_, .-_ZNSt6vectorIiSaIiEEC2EmRKS0_
	.weak	_ZNSt6vectorIiSaIiEEC1EmRKS0_
	.set	_ZNSt6vectorIiSaIiEEC1EmRKS0_,_ZNSt6vectorIiSaIiEEC2EmRKS0_
	.section	.text._ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE,"axG",@progbits,_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE,comdat
	.weak	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE
	.type	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE, @function
_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE:
.LFB10423:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -40(%rbp)	# __d, __d
# /usr/include/c++/11/chrono:211: 	  __cast(const duration<_Rep, _Period>& __d)
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp89
	movq	%rax, -8(%rbp)	# tmp89, D.232069
	xorl	%eax, %eax	# tmp89
# /usr/include/c++/11/chrono:214: 	    return _ToDur(static_cast<__to_rep>(__d.count()));
	movq	-40(%rbp), %rax	# __d, tmp85
	movq	%rax, %rdi	# tmp85,
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv	#
# /usr/include/c++/11/chrono:214: 	    return _ToDur(static_cast<__to_rep>(__d.count()));
	movq	%rax, -24(%rbp)	# _1, D.219439
# /usr/include/c++/11/chrono:214: 	    return _ToDur(static_cast<__to_rep>(__d.count()));
	leaq	-24(%rbp), %rdx	#, tmp86
	leaq	-16(%rbp), %rax	#, tmp87
	movq	%rdx, %rsi	# tmp86,
	movq	%rax, %rdi	# tmp87,
	call	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_	#
# /usr/include/c++/11/chrono:214: 	    return _ToDur(static_cast<__to_rep>(__d.count()));
	movq	-16(%rbp), %rax	# D.219440, D.231921
# /usr/include/c++/11/chrono:215: 	  }
	movq	-8(%rbp), %rdx	# D.232069, tmp90
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp90
	je	.L115	#,
	call	__stack_chk_fail@PLT	#
.L115:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10423:
	.size	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE, .-_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE
	.section	.text._ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_,"axG",@progbits,_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_,comdat
	.weak	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
	.type	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_, @function
_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_:
.LFB10825:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# .result_ptr, .result_ptr
	movq	%rsi, -32(%rbp)	# __a, __a
# /usr/include/c++/11/ext/alloc_traits.h:97:     static constexpr _Alloc _S_select_on_copy(const _Alloc& __a)
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp84
	movq	%rax, -8(%rbp)	# tmp84, D.232070
	xorl	%eax, %eax	# tmp84
# /usr/include/c++/11/ext/alloc_traits.h:98:     { return _Base_type::select_on_container_copy_construction(__a); }
	movq	-24(%rbp), %rax	# <retval>, tmp82
	movq	-32(%rbp), %rdx	# __a, tmp83
	movq	%rdx, %rsi	# tmp83,
	movq	%rax, %rdi	# tmp82,
	call	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_	#
# /usr/include/c++/11/ext/alloc_traits.h:98:     { return _Base_type::select_on_container_copy_construction(__a); }
	movq	-8(%rbp), %rax	# D.232070, tmp85
	subq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp85
	je	.L118	#,
	call	__stack_chk_fail@PLT	#
.L118:
	movq	-24(%rbp), %rax	# <retval>,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10825:
	.size	_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_, .-_ZN9__gnu_cxx14__alloc_traitsISaIiEiE17_S_select_on_copyERKS1_
	.section	.text._ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.type	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, @function
_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv:
.LFB10826:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:281:       { return this->_M_impl; }
	movq	-8(%rbp), %rax	# this, _2
# /usr/include/c++/11/bits/stl_vector.h:281:       { return this->_M_impl; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10826:
	.size	_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, .-_ZNKSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.section	.text._ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
	.type	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev, @function
_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev:
.LFB10829:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:128:       struct _Vector_impl
	movq	-8(%rbp), %rax	# this, tmp82
	movq	%rax, %rdi	# tmp82,
	call	_ZNSaIiED2Ev	#
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10829:
	.size	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev, .-_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
	.weak	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev
	.set	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev,_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD2Ev
	.section	.text._ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEEC5EmRKS0_,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
	.type	_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_, @function
_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_:
.LFB10831:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10831
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)	# this, this
	movq	%rsi, -32(%rbp)	# __n, __n
	movq	%rdx, -40(%rbp)	# __a, __a
# /usr/include/c++/11/bits/stl_vector.h:304:       : _M_impl(__a)
	movq	-24(%rbp), %rax	# this, _1
	movq	-40(%rbp), %rdx	# __a, tmp85
	movq	%rdx, %rsi	# tmp85,
	movq	%rax, %rdi	# _1,
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_	#
# /usr/include/c++/11/bits/stl_vector.h:305:       { _M_create_storage(__n); }
	movq	-32(%rbp), %rdx	# __n, tmp86
	movq	-24(%rbp), %rax	# this, tmp87
	movq	%rdx, %rsi	# tmp86,
	movq	%rax, %rdi	# tmp87,
.LEHB13:
	call	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm	#
.LEHE13:
# /usr/include/c++/11/bits/stl_vector.h:305:       { _M_create_storage(__n); }
	jmp	.L125	#
.L124:
	endbr64	
	movq	%rax, %rbx	#, tmp88
	movq	-24(%rbp), %rax	# this, _2
	movq	%rax, %rdi	# _2,
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev	#
	movq	%rbx, %rax	# tmp88, D.232073
	movq	%rax, %rdi	# D.232073,
.LEHB14:
	call	_Unwind_Resume@PLT	#
.LEHE14:
.L125:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10831:
	.section	.gcc_except_table
.LLSDA10831:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE10831-.LLSDACSB10831
.LLSDACSB10831:
	.uleb128 .LEHB13-.LFB10831
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L124-.LFB10831
	.uleb128 0
	.uleb128 .LEHB14-.LFB10831
	.uleb128 .LEHE14-.LEHB14
	.uleb128 0
	.uleb128 0
.LLSDACSE10831:
	.section	.text._ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEEC5EmRKS0_,comdat
	.size	_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_, .-_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
	.weak	_ZNSt12_Vector_baseIiSaIiEEC1EmRKS0_
	.set	_ZNSt12_Vector_baseIiSaIiEEC1EmRKS0_,_ZNSt12_Vector_baseIiSaIiEEC2EmRKS0_
	.section	.text._ZNSt12_Vector_baseIiSaIiEED2Ev,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEED5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEED2Ev
	.type	_ZNSt12_Vector_baseIiSaIiEED2Ev, @function
_ZNSt12_Vector_baseIiSaIiEED2Ev:
.LFB10834:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10834
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:336: 		      _M_impl._M_end_of_storage - _M_impl._M_start);
	movq	-8(%rbp), %rax	# this, tmp89
	movq	16(%rax), %rdx	# this_9(D)->_M_impl.D.180294._M_end_of_storage, _1
# /usr/include/c++/11/bits/stl_vector.h:336: 		      _M_impl._M_end_of_storage - _M_impl._M_start);
	movq	-8(%rbp), %rax	# this, tmp90
	movq	(%rax), %rcx	# this_9(D)->_M_impl.D.180294._M_start, _2
# /usr/include/c++/11/bits/stl_vector.h:336: 		      _M_impl._M_end_of_storage - _M_impl._M_start);
	movq	%rdx, %rax	# _1, _1
	subq	%rcx, %rax	# _2, _1
	sarq	$2, %rax	#, tmp91
# /usr/include/c++/11/bits/stl_vector.h:335: 	_M_deallocate(_M_impl._M_start,
	movq	%rax, %rdx	# _4, _5
	movq	-8(%rbp), %rax	# this, tmp92
	movq	(%rax), %rcx	# this_9(D)->_M_impl.D.180294._M_start, _6
	movq	-8(%rbp), %rax	# this, tmp93
	movq	%rcx, %rsi	# _6,
	movq	%rax, %rdi	# tmp93,
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim	#
# /usr/include/c++/11/bits/stl_vector.h:337:       }
	movq	-8(%rbp), %rax	# this, _7
	movq	%rax, %rdi	# _7,
	call	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implD1Ev	#
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10834:
	.section	.gcc_except_table
.LLSDA10834:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE10834-.LLSDACSB10834
.LLSDACSB10834:
.LLSDACSE10834:
	.section	.text._ZNSt12_Vector_baseIiSaIiEED2Ev,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEED5Ev,comdat
	.size	_ZNSt12_Vector_baseIiSaIiEED2Ev, .-_ZNSt12_Vector_baseIiSaIiEED2Ev
	.weak	_ZNSt12_Vector_baseIiSaIiEED1Ev
	.set	_ZNSt12_Vector_baseIiSaIiEED1Ev,_ZNSt12_Vector_baseIiSaIiEED2Ev
	.section	.text._ZNKSt6vectorIiSaIiEE5beginEv,"axG",@progbits,_ZNKSt6vectorIiSaIiEE5beginEv,comdat
	.align 2
	.weak	_ZNKSt6vectorIiSaIiEE5beginEv
	.type	_ZNKSt6vectorIiSaIiEE5beginEv, @function
_ZNKSt6vectorIiSaIiEE5beginEv:
.LFB10836:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:820:       begin() const _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp87
	movq	%rax, -8(%rbp)	# tmp87, D.232074
	xorl	%eax, %eax	# tmp87
# /usr/include/c++/11/bits/stl_vector.h:821:       { return const_iterator(this->_M_impl._M_start); }
	movq	-24(%rbp), %rdx	# this, _1
# /usr/include/c++/11/bits/stl_vector.h:821:       { return const_iterator(this->_M_impl._M_start); }
	leaq	-16(%rbp), %rax	#, tmp85
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp85,
	call	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_	#
# /usr/include/c++/11/bits/stl_vector.h:821:       { return const_iterator(this->_M_impl._M_start); }
	movq	-16(%rbp), %rax	# D.224092, D.231673
# /usr/include/c++/11/bits/stl_vector.h:821:       { return const_iterator(this->_M_impl._M_start); }
	movq	-8(%rbp), %rdx	# D.232074, tmp88
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp88
	je	.L129	#,
	call	__stack_chk_fail@PLT	#
.L129:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10836:
	.size	_ZNKSt6vectorIiSaIiEE5beginEv, .-_ZNKSt6vectorIiSaIiEE5beginEv
	.section	.text._ZNKSt6vectorIiSaIiEE3endEv,"axG",@progbits,_ZNKSt6vectorIiSaIiEE3endEv,comdat
	.align 2
	.weak	_ZNKSt6vectorIiSaIiEE3endEv
	.type	_ZNKSt6vectorIiSaIiEE3endEv, @function
_ZNKSt6vectorIiSaIiEE3endEv:
.LFB10837:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:838:       end() const _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp88
	movq	%rax, -8(%rbp)	# tmp88, D.232075
	xorl	%eax, %eax	# tmp88
# /usr/include/c++/11/bits/stl_vector.h:839:       { return const_iterator(this->_M_impl._M_finish); }
	movq	-24(%rbp), %rax	# this, tmp85
	leaq	8(%rax), %rdx	#, _1
# /usr/include/c++/11/bits/stl_vector.h:839:       { return const_iterator(this->_M_impl._M_finish); }
	leaq	-16(%rbp), %rax	#, tmp86
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp86,
	call	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_	#
# /usr/include/c++/11/bits/stl_vector.h:839:       { return const_iterator(this->_M_impl._M_finish); }
	movq	-16(%rbp), %rax	# D.224094, D.231670
# /usr/include/c++/11/bits/stl_vector.h:839:       { return const_iterator(this->_M_impl._M_finish); }
	movq	-8(%rbp), %rdx	# D.232075, tmp89
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp89
	je	.L132	#,
	call	__stack_chk_fail@PLT	#
.L132:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10837:
	.size	_ZNKSt6vectorIiSaIiEE3endEv, .-_ZNKSt6vectorIiSaIiEE3endEv
	.section	.text._ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.type	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, @function
_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv:
.LFB10838:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:277:       { return this->_M_impl; }
	movq	-8(%rbp), %rax	# this, _2
# /usr/include/c++/11/bits/stl_vector.h:277:       { return this->_M_impl; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10838:
	.size	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv, .-_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv
	.section	.text._ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E:
.LFB10839:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
	movq	%rcx, -32(%rbp)	# D.224099, D.224099
# /usr/include/c++/11/bits/stl_uninitialized.h:333:     { return std::uninitialized_copy(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:333:     { return std::uninitialized_copy(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10839:
	.size	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E, .-_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E
	.section	.text._ZSt8_DestroyIPiiEvT_S1_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
	.type	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E, @function
_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E:
.LFB10840:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# D.224120, D.224120
# /usr/include/c++/11/bits/alloc_traits.h:848:       _Destroy(__first, __last);
	movq	-16(%rbp), %rdx	# __last, tmp82
	movq	-8(%rbp), %rax	# __first, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZSt8_DestroyIPiEvT_S1_	#
# /usr/include/c++/11/bits/alloc_traits.h:849:     }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10840:
	.size	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E, .-_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E
	.section	.text._ZStneRKSaIiES1_,"axG",@progbits,_ZStneRKSaIiES1_,comdat
	.weak	_ZStneRKSaIiES1_
	.type	_ZStneRKSaIiES1_, @function
_ZStneRKSaIiES1_:
.LFB10841:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.224125, D.224125
	movq	%rsi, -16(%rbp)	# D.224126, D.224126
# /usr/include/c++/11/bits/allocator.h:210:       { return false; }
	movl	$0, %eax	#, _1
# /usr/include/c++/11/bits/allocator.h:210:       { return false; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10841:
	.size	_ZStneRKSaIiES1_, .-_ZStneRKSaIiES1_
	.section	.text._ZNSt6vectorIiSaIiEE5clearEv,"axG",@progbits,_ZNSt6vectorIiSaIiEE5clearEv,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE5clearEv
	.type	_ZNSt6vectorIiSaIiEE5clearEv, @function
_ZNSt6vectorIiSaIiEE5clearEv:
.LFB10842:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:1499:       { _M_erase_at_end(this->_M_impl._M_start); }
	movq	-8(%rbp), %rax	# this, tmp83
	movq	(%rax), %rdx	# this_3(D)->D.180948._M_impl.D.180294._M_start, _1
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp84,
	call	_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi	#
# /usr/include/c++/11/bits/stl_vector.h:1499:       { _M_erase_at_end(this->_M_impl._M_start); }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10842:
	.size	_ZNSt6vectorIiSaIiEE5clearEv, .-_ZNSt6vectorIiSaIiEE5clearEv
	.section	.text._ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
	.type	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim, @function
_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim:
.LFB10843:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __p, __p
	movq	%rdx, -24(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_vector.h:353: 	if (__p)
	cmpq	$0, -16(%rbp)	#, __p
	je	.L143	#,
# /usr/include/c++/11/bits/stl_vector.h:354: 	  _Tr::deallocate(_M_impl, __p, __n);
	movq	-8(%rbp), %rax	# this, _1
# /usr/include/c++/11/bits/stl_vector.h:354: 	  _Tr::deallocate(_M_impl, __p, __n);
	movq	-24(%rbp), %rdx	# __n, tmp83
	movq	-16(%rbp), %rcx	# __p, tmp84
	movq	%rcx, %rsi	# tmp84,
	movq	%rax, %rdi	# _1,
	call	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim	#
.L143:
# /usr/include/c++/11/bits/stl_vector.h:355:       }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10843:
	.size	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim, .-_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim
	.section	.text._ZSt15__alloc_on_copyISaIiEEvRT_RKS1_,"axG",@progbits,_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_,comdat
	.weak	_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
	.type	_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_, @function
_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_:
.LFB10844:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __one, __one
	movq	%rsi, -16(%rbp)	# __two, __two
# /usr/include/c++/11/bits/alloc_traits.h:688:     }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10844:
	.size	_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_, .-_ZSt15__alloc_on_copyISaIiEEvRT_RKS1_
	.section	.text._ZNKSt6vectorIiSaIiEE8capacityEv,"axG",@progbits,_ZNKSt6vectorIiSaIiEE8capacityEv,comdat
	.align 2
	.weak	_ZNKSt6vectorIiSaIiEE8capacityEv
	.type	_ZNKSt6vectorIiSaIiEE8capacityEv, @function
_ZNKSt6vectorIiSaIiEE8capacityEv:
.LFB10845:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:999:       { return size_type(this->_M_impl._M_end_of_storage
	movq	-8(%rbp), %rax	# this, tmp88
	movq	16(%rax), %rdx	# this_6(D)->D.180948._M_impl.D.180294._M_end_of_storage, _1
# /usr/include/c++/11/bits/stl_vector.h:1000: 			 - this->_M_impl._M_start); }
	movq	-8(%rbp), %rax	# this, tmp89
	movq	(%rax), %rcx	# this_6(D)->D.180948._M_impl.D.180294._M_start, _2
# /usr/include/c++/11/bits/stl_vector.h:1000: 			 - this->_M_impl._M_start); }
	movq	%rdx, %rax	# _1, _1
	subq	%rcx, %rax	# _2, _1
	sarq	$2, %rax	#, tmp90
# /usr/include/c++/11/bits/stl_vector.h:1000: 			 - this->_M_impl._M_start); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10845:
	.size	_ZNKSt6vectorIiSaIiEE8capacityEv, .-_ZNKSt6vectorIiSaIiEE8capacityEv
	.section	.text._ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_,"axG",@progbits,_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
	.type	_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_, @function
_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_:
.LFB10846:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA10846
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$56, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)	# this, this
	movq	%rsi, -48(%rbp)	# __n, __n
	movq	%rdx, -56(%rbp)	# __first, __first
	movq	%rcx, -64(%rbp)	# __last, __last
# /usr/include/c++/11/bits/stl_vector.h:1511: 	  pointer __result = this->_M_allocate(__n);
	movq	-40(%rbp), %rax	# this, _1
	movq	-48(%rbp), %rdx	# __n, tmp91
	movq	%rdx, %rsi	# tmp91,
	movq	%rax, %rdi	# _1,
.LEHB15:
	call	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm	#
.LEHE15:
	movq	%rax, -24(%rbp)	# _11, __result
# /usr/include/c++/11/bits/stl_vector.h:1515: 					  _M_get_Tp_allocator());
	movq	-40(%rbp), %rax	# this, _2
	movq	%rax, %rdi	# _2,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rcx	#, _3
# /usr/include/c++/11/bits/stl_vector.h:1514: 	      std::__uninitialized_copy_a(__first, __last, __result,
	movq	-24(%rbp), %rdx	# __result, tmp92
	movq	-64(%rbp), %rsi	# __last, tmp93
	movq	-56(%rbp), %rax	# __first, tmp94
	movq	%rax, %rdi	# tmp94,
.LEHB16:
	call	_ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiiET0_T_SA_S9_RSaIT1_E	#
.LEHE16:
# /usr/include/c++/11/bits/stl_vector.h:1516: 	      return __result;
	movq	-24(%rbp), %rax	# __result, _15
	jmp	.L153	#
.L151:
	endbr64	
# /usr/include/c++/11/bits/stl_vector.h:1518: 	  __catch(...)
	movq	%rax, %rdi	# _4,
	call	__cxa_begin_catch@PLT	#
# /usr/include/c++/11/bits/stl_vector.h:1520: 	      _M_deallocate(__result, __n);
	movq	-40(%rbp), %rax	# this, _5
	movq	-48(%rbp), %rdx	# __n, tmp97
	movq	-24(%rbp), %rcx	# __result, tmp98
	movq	%rcx, %rsi	# tmp98,
	movq	%rax, %rdi	# _5,
.LEHB17:
	call	_ZNSt12_Vector_baseIiSaIiEE13_M_deallocateEPim	#
# /usr/include/c++/11/bits/stl_vector.h:1521: 	      __throw_exception_again;
	call	__cxa_rethrow@PLT	#
.LEHE17:
.L152:
	endbr64	
# /usr/include/c++/11/bits/stl_vector.h:1518: 	  __catch(...)
	movq	%rax, %rbx	#, tmp99
	call	__cxa_end_catch@PLT	#
	movq	%rbx, %rax	# tmp99, D.232076
	movq	%rax, %rdi	# D.232076,
.LEHB18:
	call	_Unwind_Resume@PLT	#
.LEHE18:
.L153:
# /usr/include/c++/11/bits/stl_vector.h:1523: 	}
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10846:
	.section	.gcc_except_table
	.align 4
.LLSDA10846:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT10846-.LLSDATTD10846
.LLSDATTD10846:
	.byte	0x1
	.uleb128 .LLSDACSE10846-.LLSDACSB10846
.LLSDACSB10846:
	.uleb128 .LEHB15-.LFB10846
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB16-.LFB10846
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L151-.LFB10846
	.uleb128 0x1
	.uleb128 .LEHB17-.LFB10846
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L152-.LFB10846
	.uleb128 0
	.uleb128 .LEHB18-.LFB10846
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE10846:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT10846:
	.section	.text._ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_,"axG",@progbits,_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_,comdat
	.size	_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_, .-_ZNSt6vectorIiSaIiEE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKiS1_EEEEPimT_S9_
	.section	.text._ZNSt6vectorIiSaIiEE5beginEv,"axG",@progbits,_ZNSt6vectorIiSaIiEE5beginEv,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE5beginEv
	.type	_ZNSt6vectorIiSaIiEE5beginEv, @function
_ZNSt6vectorIiSaIiEE5beginEv:
.LFB10847:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:811:       begin() _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp87
	movq	%rax, -8(%rbp)	# tmp87, D.232077
	xorl	%eax, %eax	# tmp87
# /usr/include/c++/11/bits/stl_vector.h:812:       { return iterator(this->_M_impl._M_start); }
	movq	-24(%rbp), %rdx	# this, _1
# /usr/include/c++/11/bits/stl_vector.h:812:       { return iterator(this->_M_impl._M_start); }
	leaq	-16(%rbp), %rax	#, tmp85
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp85,
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_	#
# /usr/include/c++/11/bits/stl_vector.h:812:       { return iterator(this->_M_impl._M_start); }
	movq	-16(%rbp), %rax	# D.224170, D.231773
# /usr/include/c++/11/bits/stl_vector.h:812:       { return iterator(this->_M_impl._M_start); }
	movq	-8(%rbp), %rdx	# D.232077, tmp88
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp88
	je	.L156	#,
	call	__stack_chk_fail@PLT	#
.L156:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10847:
	.size	_ZNSt6vectorIiSaIiEE5beginEv, .-_ZNSt6vectorIiSaIiEE5beginEv
	.section	.text._ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_,"axG",@progbits,_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_,comdat
	.weak	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
	.type	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_, @function
_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_:
.LFB10848:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:620: 	     (std::__miter_base(__first), std::__miter_base(__last), __result);
	movq	-32(%rbp), %rax	# __last, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_	#
	movq	%rax, %rbx	#, D.231777
	movq	-24(%rbp), %rax	# __first, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_	#
	movq	%rax, %rcx	#, D.231778
	movq	-40(%rbp), %rax	# __result, tmp88
	movq	%rax, %rdx	# tmp88,
	movq	%rbx, %rsi	# D.231777,
	movq	%rcx, %rdi	# D.231778,
	call	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_	#
# /usr/include/c++/11/bits/stl_algobase.h:621:     }
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10848:
	.size	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_, .-_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET0_T_SB_SA_
	.section	.text._ZNSt6vectorIiSaIiEE3endEv,"axG",@progbits,_ZNSt6vectorIiSaIiEE3endEv,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE3endEv
	.type	_ZNSt6vectorIiSaIiEE3endEv, @function
_ZNSt6vectorIiSaIiEE3endEv:
.LFB10849:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:829:       end() _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp88
	movq	%rax, -8(%rbp)	# tmp88, D.232078
	xorl	%eax, %eax	# tmp88
# /usr/include/c++/11/bits/stl_vector.h:830:       { return iterator(this->_M_impl._M_finish); }
	movq	-24(%rbp), %rax	# this, tmp85
	leaq	8(%rax), %rdx	#, _1
# /usr/include/c++/11/bits/stl_vector.h:830:       { return iterator(this->_M_impl._M_finish); }
	leaq	-16(%rbp), %rax	#, tmp86
	movq	%rdx, %rsi	# _1,
	movq	%rax, %rdi	# tmp86,
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_	#
# /usr/include/c++/11/bits/stl_vector.h:830:       { return iterator(this->_M_impl._M_finish); }
	movq	-16(%rbp), %rax	# D.224216, D.231770
# /usr/include/c++/11/bits/stl_vector.h:830:       { return iterator(this->_M_impl._M_finish); }
	movq	-8(%rbp), %rdx	# D.232078, tmp89
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp89
	je	.L161	#,
	call	__stack_chk_fail@PLT	#
.L161:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10849:
	.size	_ZNSt6vectorIiSaIiEE3endEv, .-_ZNSt6vectorIiSaIiEE3endEv
	.section	.text._ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
	.type	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E, @function
_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E:
.LFB10850:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# D.224219, D.224219
# /usr/include/c++/11/bits/alloc_traits.h:848:       _Destroy(__first, __last);
	movq	-16(%rbp), %rdx	# __last, tmp82
	movq	-8(%rbp), %rax	# __first, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_	#
# /usr/include/c++/11/bits/alloc_traits.h:849:     }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10850:
	.size	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E, .-_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiEvT_S7_RSaIT0_E
	.section	.text._ZSt4copyIPiS0_ET0_T_S2_S1_,"axG",@progbits,_ZSt4copyIPiS0_ET0_T_S2_S1_,comdat
	.weak	_ZSt4copyIPiS0_ET0_T_S2_S1_
	.type	_ZSt4copyIPiS0_ET0_T_S2_S1_, @function
_ZSt4copyIPiS0_ET0_T_S2_S1_:
.LFB10851:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:620: 	     (std::__miter_base(__first), std::__miter_base(__last), __result);
	movq	-32(%rbp), %rax	# __last, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_ZSt12__miter_baseIPiET_S1_	#
	movq	%rax, %rbx	#, _1
	movq	-24(%rbp), %rax	# __first, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZSt12__miter_baseIPiET_S1_	#
	movq	%rax, %rcx	#, _2
	movq	-40(%rbp), %rax	# __result, tmp88
	movq	%rax, %rdx	# tmp88,
	movq	%rbx, %rsi	# _1,
	movq	%rcx, %rdi	# _2,
	call	_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_	#
# /usr/include/c++/11/bits/stl_algobase.h:621:     }
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10851:
	.size	_ZSt4copyIPiS0_ET0_T_S2_S1_, .-_ZSt4copyIPiS0_ET0_T_S2_S1_
	.section	.text._ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E:
.LFB10852:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
	movq	%rcx, -32(%rbp)	# D.224246, D.224246
# /usr/include/c++/11/bits/stl_uninitialized.h:333:     { return std::uninitialized_copy(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:333:     { return std::uninitialized_copy(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10852:
	.size	_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E, .-_ZSt22__uninitialized_copy_aIPiS0_iET0_T_S2_S1_RSaIT1_E
	.section	.text._ZN9__gnu_cxx13new_allocatorIiEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorIiEC5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	.type	_ZN9__gnu_cxx13new_allocatorIiEC2Ev, @function
_ZN9__gnu_cxx13new_allocatorIiEC2Ev:
.LFB10854:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/ext/new_allocator.h:79:       new_allocator() _GLIBCXX_USE_NOEXCEPT { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10854:
	.size	_ZN9__gnu_cxx13new_allocatorIiEC2Ev, .-_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorIiEC1Ev
	.set	_ZN9__gnu_cxx13new_allocatorIiEC1Ev,_ZN9__gnu_cxx13new_allocatorIiEC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorIiED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorIiED5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorIiED2Ev
	.type	_ZN9__gnu_cxx13new_allocatorIiED2Ev, @function
_ZN9__gnu_cxx13new_allocatorIiED2Ev:
.LFB10857:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/ext/new_allocator.h:89:       ~new_allocator() _GLIBCXX_USE_NOEXCEPT { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10857:
	.size	_ZN9__gnu_cxx13new_allocatorIiED2Ev, .-_ZN9__gnu_cxx13new_allocatorIiED2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorIiED1Ev
	.set	_ZN9__gnu_cxx13new_allocatorIiED1Ev,_ZN9__gnu_cxx13new_allocatorIiED2Ev
	.section	.rodata
	.align 8
.LC3:
	.string	"cannot create std::vector larger than max_size()"
	.section	.text._ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_,"axG",@progbits,_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_,comdat
	.weak	_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
	.type	_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_, @function
_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_:
.LFB10859:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)	# __n, __n
	movq	%rsi, -48(%rbp)	# __a, __a
# /usr/include/c++/11/bits/stl_vector.h:1767:       _S_check_init_len(size_type __n, const allocator_type& __a)
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp92
	movq	%rax, -24(%rbp)	# tmp92, D.232079
	xorl	%eax, %eax	# tmp92
# /usr/include/c++/11/bits/stl_vector.h:1769: 	if (__n > _S_max_size(_Tp_alloc_type(__a)))
	movq	-48(%rbp), %rdx	# __a, tmp86
	leaq	-25(%rbp), %rax	#, tmp87
	movq	%rdx, %rsi	# tmp86,
	movq	%rax, %rdi	# tmp87,
	call	_ZNSaIiEC1ERKS_	#
# /usr/include/c++/11/bits/stl_vector.h:1769: 	if (__n > _S_max_size(_Tp_alloc_type(__a)))
	leaq	-25(%rbp), %rax	#, tmp88
	movq	%rax, %rdi	# tmp88,
	call	_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_	#
# /usr/include/c++/11/bits/stl_vector.h:1769: 	if (__n > _S_max_size(_Tp_alloc_type(__a)))
	cmpq	%rax, -40(%rbp)	# _1, __n
	seta	%bl	#, retval.25_7
# /usr/include/c++/11/bits/stl_vector.h:1769: 	if (__n > _S_max_size(_Tp_alloc_type(__a)))
	leaq	-25(%rbp), %rax	#, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZNSaIiED1Ev	#
# /usr/include/c++/11/bits/stl_vector.h:1769: 	if (__n > _S_max_size(_Tp_alloc_type(__a)))
	testb	%bl, %bl	# retval.25_7
	je	.L170	#,
# /usr/include/c++/11/bits/stl_vector.h:1770: 	  __throw_length_error(
	leaq	.LC3(%rip), %rax	#, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZSt20__throw_length_errorPKc@PLT	#
.L170:
# /usr/include/c++/11/bits/stl_vector.h:1772: 	return __n;
	movq	-40(%rbp), %rax	# __n, _10
# /usr/include/c++/11/bits/stl_vector.h:1773:       }
	movq	-24(%rbp), %rdx	# D.232079, tmp93
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp93
	je	.L172	#,
	call	__stack_chk_fail@PLT	#
.L172:
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10859:
	.size	_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_, .-_ZNSt6vectorIiSaIiEE17_S_check_init_lenEmRKS0_
	.section	.text._ZNSt6vectorIiSaIiEE21_M_default_initializeEm,"axG",@progbits,_ZNSt6vectorIiSaIiEE21_M_default_initializeEm,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE21_M_default_initializeEm
	.type	_ZNSt6vectorIiSaIiEE21_M_default_initializeEm, @function
_ZNSt6vectorIiSaIiEE21_M_default_initializeEm:
.LFB10860:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_vector.h:1607: 					   _M_get_Tp_allocator());
	movq	-8(%rbp), %rax	# this, _1
	movq	%rax, %rdi	# _1,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rdx	#, _2
# /usr/include/c++/11/bits/stl_vector.h:1606: 	  std::__uninitialized_default_n_a(this->_M_impl._M_start, __n,
	movq	-8(%rbp), %rax	# this, tmp86
	movq	(%rax), %rax	# this_5(D)->D.180948._M_impl.D.180294._M_start, _3
	movq	-16(%rbp), %rcx	# __n, tmp87
	movq	%rcx, %rsi	# tmp87,
	movq	%rax, %rdi	# _3,
	call	_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E	#
# /usr/include/c++/11/bits/stl_vector.h:1605: 	this->_M_impl._M_finish =
	movq	-8(%rbp), %rdx	# this, tmp88
	movq	%rax, 8(%rdx)	# _4, this_5(D)->D.180948._M_impl.D.180294._M_finish
# /usr/include/c++/11/bits/stl_vector.h:1608:       }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE10860:
	.size	_ZNSt6vectorIiSaIiEE21_M_default_initializeEm, .-_ZNSt6vectorIiSaIiEE21_M_default_initializeEm
	.section	.text._ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_,"axG",@progbits,_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_,comdat
	.weak	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
	.type	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_, @function
_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_:
.LFB11055:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# .result_ptr, .result_ptr
	movq	%rsi, -16(%rbp)	# __rhs, __rhs
# /usr/include/c++/11/bits/alloc_traits.h:563:       { return __rhs; }
	movq	-16(%rbp), %rdx	# __rhs, tmp82
	movq	-8(%rbp), %rax	# <retval>, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZNSaIiEC1ERKS_	#
# /usr/include/c++/11/bits/alloc_traits.h:563:       { return __rhs; }
	movq	-8(%rbp), %rax	# <retval>,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11055:
	.size	_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_, .-_ZNSt16allocator_traitsISaIiEE37select_on_container_copy_constructionERKS0_
	.section	.text._ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC5ERKS0_,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
	.type	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_, @function
_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_:
.LFB11057:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __a, __a
# /usr/include/c++/11/bits/stl_vector.h:137: 	: _Tp_alloc_type(__a)
	movq	-16(%rbp), %rdx	# __a, tmp83
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rdx, %rsi	# tmp83,
	movq	%rax, %rdi	# tmp84,
	call	_ZNSaIiEC2ERKS_	#
	movq	-8(%rbp), %rax	# this, _1
	movq	%rax, %rdi	# _1,
	call	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev	#
# /usr/include/c++/11/bits/stl_vector.h:138: 	{ }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11057:
	.size	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_, .-_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
	.weak	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_
	.set	_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC1ERKS0_,_ZNSt12_Vector_baseIiSaIiEE12_Vector_implC2ERKS0_
	.section	.text._ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
	.type	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm, @function
_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm:
.LFB11059:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_vector.h:361: 	this->_M_impl._M_start = this->_M_allocate(__n);
	movq	-16(%rbp), %rdx	# __n, tmp87
	movq	-8(%rbp), %rax	# this, tmp88
	movq	%rdx, %rsi	# tmp87,
	movq	%rax, %rdi	# tmp88,
	call	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm	#
# /usr/include/c++/11/bits/stl_vector.h:361: 	this->_M_impl._M_start = this->_M_allocate(__n);
	movq	-8(%rbp), %rdx	# this, tmp89
	movq	%rax, (%rdx)	# _1, this_7(D)->_M_impl.D.180294._M_start
# /usr/include/c++/11/bits/stl_vector.h:362: 	this->_M_impl._M_finish = this->_M_impl._M_start;
	movq	-8(%rbp), %rax	# this, tmp90
	movq	(%rax), %rdx	# this_7(D)->_M_impl.D.180294._M_start, _2
# /usr/include/c++/11/bits/stl_vector.h:362: 	this->_M_impl._M_finish = this->_M_impl._M_start;
	movq	-8(%rbp), %rax	# this, tmp91
	movq	%rdx, 8(%rax)	# _2, this_7(D)->_M_impl.D.180294._M_finish
# /usr/include/c++/11/bits/stl_vector.h:363: 	this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
	movq	-8(%rbp), %rax	# this, tmp92
	movq	(%rax), %rdx	# this_7(D)->_M_impl.D.180294._M_start, _3
# /usr/include/c++/11/bits/stl_vector.h:363: 	this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
	movq	-16(%rbp), %rax	# __n, tmp93
	salq	$2, %rax	#, _4
	addq	%rax, %rdx	# _4, _5
# /usr/include/c++/11/bits/stl_vector.h:363: 	this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
	movq	-8(%rbp), %rax	# this, tmp94
	movq	%rdx, 16(%rax)	# _5, this_7(D)->_M_impl.D.180294._M_end_of_storage
# /usr/include/c++/11/bits/stl_vector.h:364:       }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11059:
	.size	_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm, .-_ZNSt12_Vector_baseIiSaIiEE17_M_create_storageEm
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC5ERKS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
	.type	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_, @function
_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_:
.LFB11061:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __i, __i
# /usr/include/c++/11/bits/stl_iterator.h:1011:       : _M_current(__i) { }
	movq	-16(%rbp), %rax	# __i, tmp83
	movq	(%rax), %rdx	# *__i_5(D), _1
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rdx, (%rax)	# _1, this_3(D)->_M_current
# /usr/include/c++/11/bits/stl_iterator.h:1011:       : _M_current(__i) { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11061:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_, .-_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_
	.set	_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1ERKS2_,_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC2ERKS2_
	.section	.text._ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,"axG",@progbits,_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,comdat
	.weak	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.type	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_, @function
_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_:
.LFB11063:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_uninitialized.h:145:       const bool __assignable = is_assignable<_RefType2, _RefType1>::value;
	movb	$1, -1(%rbp)	#, __assignable
# /usr/include/c++/11/bits/stl_uninitialized.h:151: 	__uninit_copy(__first, __last, __result);
	movq	-40(%rbp), %rdx	# __result, tmp84
	movq	-32(%rbp), %rcx	# __last, tmp85
	movq	-24(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:152:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11063:
	.size	_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_, .-_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.section	.text._ZSt8_DestroyIPiEvT_S1_,"axG",@progbits,_ZSt8_DestroyIPiEvT_S1_,comdat
	.weak	_ZSt8_DestroyIPiEvT_S1_
	.type	_ZSt8_DestroyIPiEvT_S1_, @function
_ZSt8_DestroyIPiEvT_S1_:
.LFB11065:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
# /usr/include/c++/11/bits/stl_construct.h:196: 	__destroy(__first, __last);
	movq	-16(%rbp), %rdx	# __last, tmp82
	movq	-8(%rbp), %rax	# __first, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_	#
# /usr/include/c++/11/bits/stl_construct.h:197:     }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11065:
	.size	_ZSt8_DestroyIPiEvT_S1_, .-_ZSt8_DestroyIPiEvT_S1_
	.section	.text._ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi,"axG",@progbits,_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi,comdat
	.align 2
	.weak	_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
	.type	_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi, @function
_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi:
.LFB11066:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA11066
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# this, this
	movq	%rsi, -32(%rbp)	# __pos, __pos
# /usr/include/c++/11/bits/stl_vector.h:1794: 	if (size_type __n = this->_M_impl._M_finish - __pos)
	movq	-24(%rbp), %rax	# this, tmp88
	movq	8(%rax), %rax	# this_9(D)->D.180948._M_impl.D.180294._M_finish, _1
# /usr/include/c++/11/bits/stl_vector.h:1794: 	if (size_type __n = this->_M_impl._M_finish - __pos)
	subq	-32(%rbp), %rax	# __pos, _2
	sarq	$2, %rax	#, tmp89
# /usr/include/c++/11/bits/stl_vector.h:1794: 	if (size_type __n = this->_M_impl._M_finish - __pos)
	movq	%rax, -8(%rbp)	# _3, __n
# /usr/include/c++/11/bits/stl_vector.h:1794: 	if (size_type __n = this->_M_impl._M_finish - __pos)
	cmpq	$0, -8(%rbp)	#, __n
	je	.L184	#,
# /usr/include/c++/11/bits/stl_vector.h:1797: 			  _M_get_Tp_allocator());
	movq	-24(%rbp), %rax	# this, _4
	movq	%rax, %rdi	# _4,
	call	_ZNSt12_Vector_baseIiSaIiEE19_M_get_Tp_allocatorEv	#
	movq	%rax, %rdx	#, _5
# /usr/include/c++/11/bits/stl_vector.h:1796: 	    std::_Destroy(__pos, this->_M_impl._M_finish,
	movq	-24(%rbp), %rax	# this, tmp90
	movq	8(%rax), %rcx	# this_9(D)->D.180948._M_impl.D.180294._M_finish, _6
	movq	-32(%rbp), %rax	# __pos, tmp91
	movq	%rcx, %rsi	# _6,
	movq	%rax, %rdi	# tmp91,
	call	_ZSt8_DestroyIPiiEvT_S1_RSaIT0_E	#
# /usr/include/c++/11/bits/stl_vector.h:1798: 	    this->_M_impl._M_finish = __pos;
	movq	-24(%rbp), %rax	# this, tmp92
	movq	-32(%rbp), %rdx	# __pos, tmp93
	movq	%rdx, 8(%rax)	# tmp93, this_9(D)->D.180948._M_impl.D.180294._M_finish
.L184:
# /usr/include/c++/11/bits/stl_vector.h:1801:       }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11066:
	.section	.gcc_except_table
.LLSDA11066:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE11066-.LLSDACSB11066
.LLSDACSB11066:
.LLSDACSE11066:
	.section	.text._ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi,"axG",@progbits,_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi,comdat
	.size	_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi, .-_ZNSt6vectorIiSaIiEE15_M_erase_at_endEPi
	.section	.text._ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim,"axG",@progbits,_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim,comdat
	.weak	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
	.type	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim, @function
_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim:
.LFB11067:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __a, __a
	movq	%rsi, -16(%rbp)	# __p, __p
	movq	%rdx, -24(%rbp)	# __n, __n
# /usr/include/c++/11/bits/alloc_traits.h:496:       { __a.deallocate(__p, __n); }
	movq	-24(%rbp), %rdx	# __n, tmp82
	movq	-16(%rbp), %rcx	# __p, tmp83
	movq	-8(%rbp), %rax	# __a, tmp84
	movq	%rcx, %rsi	# tmp83,
	movq	%rax, %rdi	# tmp84,
	call	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim	#
# /usr/include/c++/11/bits/alloc_traits.h:496:       { __a.deallocate(__p, __n); }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11067:
	.size	_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim, .-_ZNSt16allocator_traitsISaIiEE10deallocateERS0_Pim
	.section	.text._ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
	.type	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm, @function
_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm:
.LFB11068:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_vector.h:346: 	return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
	cmpq	$0, -16(%rbp)	#, __n
	je	.L187	#,
# /usr/include/c++/11/bits/stl_vector.h:346: 	return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
	movq	-8(%rbp), %rax	# this, _1
# /usr/include/c++/11/bits/stl_vector.h:346: 	return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
	movq	-16(%rbp), %rdx	# __n, tmp85
	movq	%rdx, %rsi	# tmp85,
	movq	%rax, %rdi	# _1,
	call	_ZNSt16allocator_traitsISaIiEE8allocateERS0_m	#
# /usr/include/c++/11/bits/stl_vector.h:346: 	return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
	jmp	.L189	#
.L187:
# /usr/include/c++/11/bits/stl_vector.h:346: 	return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
	movl	$0, %eax	#, _9
.L189:
# /usr/include/c++/11/bits/stl_vector.h:347:       }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11068:
	.size	_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm, .-_ZNSt12_Vector_baseIiSaIiEE11_M_allocateEm
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC5ERKS1_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
	.type	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_, @function
_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_:
.LFB11070:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __i, __i
# /usr/include/c++/11/bits/stl_iterator.h:1011:       : _M_current(__i) { }
	movq	-16(%rbp), %rax	# __i, tmp83
	movq	(%rax), %rdx	# *__i_5(D), _1
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rdx, (%rax)	# _1, this_3(D)->_M_current
# /usr/include/c++/11/bits/stl_iterator.h:1011:       : _M_current(__i) { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11070:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_, .-_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_
	.set	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_,_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC2ERKS1_
	.section	.text._ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_,"axG",@progbits,_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_,comdat
	.weak	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
	.type	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_, @function
_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_:
.LFB11072:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __it, __it
# /usr/include/c++/11/bits/cpp_type_traits.h:561:     { return __it; }
	movq	-8(%rbp), %rax	# __it, D.231690
# /usr/include/c++/11/bits/cpp_type_traits.h:561:     { return __it; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11072:
	.size	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_, .-_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_
	.section	.text._ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_,"axG",@progbits,_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_,comdat
	.weak	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
	.type	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_, @function
_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_:
.LFB11073:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r12	#
	pushq	%rbx	#
	subq	$32, %rsp	#,
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:529:       return std::__niter_wrap(__result,
	movq	-40(%rbp), %rax	# __result, tmp88
	movq	%rax, %rdi	# tmp88,
	call	_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE	#
	movq	%rax, %r12	#, _1
	movq	-32(%rbp), %rax	# __last, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE	#
	movq	%rax, %rbx	#, _2
	movq	-24(%rbp), %rax	# __first, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE	#
	movq	%r12, %rdx	# _1,
	movq	%rbx, %rsi	# _2,
	movq	%rax, %rdi	# _3,
	call	_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_	#
	movq	%rax, %rdx	#, _4
	movq	-40(%rbp), %rax	# __result, tmp91
	movq	%rdx, %rsi	# _4,
	movq	%rax, %rdi	# tmp91,
	call	_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_	#
# /usr/include/c++/11/bits/stl_algobase.h:533:     }
	addq	$32, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11073:
	.size	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_, .-_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEENS1_IPiS6_EEET1_T0_SB_SA_
	.section	.text._ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_,"axG",@progbits,_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_,comdat
	.weak	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
	.type	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_, @function
_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_:
.LFB11076:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
# /usr/include/c++/11/bits/stl_construct.h:196: 	__destroy(__first, __last);
	movq	-16(%rbp), %rdx	# __last, tmp82
	movq	-8(%rbp), %rax	# __first, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_	#
# /usr/include/c++/11/bits/stl_construct.h:197:     }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11076:
	.size	_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_, .-_ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEvT_S7_
	.section	.text._ZSt12__miter_baseIPiET_S1_,"axG",@progbits,_ZSt12__miter_baseIPiET_S1_,comdat
	.weak	_ZSt12__miter_baseIPiET_S1_
	.type	_ZSt12__miter_baseIPiET_S1_, @function
_ZSt12__miter_baseIPiET_S1_:
.LFB11077:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __it, __it
# /usr/include/c++/11/bits/cpp_type_traits.h:561:     { return __it; }
	movq	-8(%rbp), %rax	# __it, _2
# /usr/include/c++/11/bits/cpp_type_traits.h:561:     { return __it; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11077:
	.size	_ZSt12__miter_baseIPiET_S1_, .-_ZSt12__miter_baseIPiET_S1_
	.section	.text._ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_,"axG",@progbits,_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_,comdat
	.weak	_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
	.type	_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_, @function
_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_:
.LFB11078:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r12	#
	pushq	%rbx	#
	subq	$32, %rsp	#,
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:529:       return std::__niter_wrap(__result,
	movq	-40(%rbp), %rax	# __result, __result.17_1
	movq	%rax, %rdi	# __result.17_1,
	call	_ZSt12__niter_baseIPiET_S1_	#
	movq	%rax, %r12	#, _2
	movq	-32(%rbp), %rax	# __last, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZSt12__niter_baseIPiET_S1_	#
	movq	%rax, %rbx	#, _3
	movq	-24(%rbp), %rax	# __first, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZSt12__niter_baseIPiET_S1_	#
	movq	%r12, %rdx	# _2,
	movq	%rbx, %rsi	# _3,
	movq	%rax, %rdi	# _4,
	call	_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_	#
	movq	%rax, %rdx	#, _5
	leaq	-40(%rbp), %rax	#, tmp91
	movq	%rdx, %rsi	# _5,
	movq	%rax, %rdi	# tmp91,
	call	_ZSt12__niter_wrapIPiET_RKS1_S1_	#
# /usr/include/c++/11/bits/stl_algobase.h:533:     }
	addq	$32, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11078:
	.size	_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_, .-_ZSt13__copy_move_aILb0EPiS0_ET1_T0_S2_S1_
	.section	.text._ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_,"axG",@progbits,_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_,comdat
	.weak	_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
	.type	_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_, @function
_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_:
.LFB11079:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_uninitialized.h:145:       const bool __assignable = is_assignable<_RefType2, _RefType1>::value;
	movb	$1, -1(%rbp)	#, __assignable
# /usr/include/c++/11/bits/stl_uninitialized.h:151: 	__uninit_copy(__first, __last, __result);
	movq	-40(%rbp), %rdx	# __result, tmp84
	movq	-32(%rbp), %rcx	# __last, tmp85
	movq	-24(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:152:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11079:
	.size	_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_, .-_ZSt18uninitialized_copyIPiS0_ET0_T_S2_S1_
	.section	.text._ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_,"axG",@progbits,_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_,comdat
	.weak	_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
	.type	_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_, @function
_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_:
.LFB11080:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -40(%rbp)	# __a, __a
# /usr/include/c++/11/bits/stl_vector.h:1776:       _S_max_size(const _Tp_alloc_type& __a) _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp90
	movq	%rax, -8(%rbp)	# tmp90, D.232082
	xorl	%eax, %eax	# tmp90
# /usr/include/c++/11/bits/stl_vector.h:1781: 	const size_t __diffmax
	movabsq	$2305843009213693951, %rax	#, tmp93
	movq	%rax, -24(%rbp)	# tmp93, __diffmax
# /usr/include/c++/11/bits/stl_vector.h:1783: 	const size_t __allocmax = _Alloc_traits::max_size(__a);
	movq	-40(%rbp), %rax	# __a, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_	#
# /usr/include/c++/11/bits/stl_vector.h:1783: 	const size_t __allocmax = _Alloc_traits::max_size(__a);
	movq	%rax, -16(%rbp)	# _1, __allocmax
# /usr/include/c++/11/bits/stl_vector.h:1784: 	return (std::min)(__diffmax, __allocmax);
	leaq	-16(%rbp), %rdx	#, tmp87
	leaq	-24(%rbp), %rax	#, tmp88
	movq	%rdx, %rsi	# tmp87,
	movq	%rax, %rdi	# tmp88,
	call	_ZSt3minImERKT_S2_S2_	#
# /usr/include/c++/11/bits/stl_vector.h:1784: 	return (std::min)(__diffmax, __allocmax);
	movq	(%rax), %rax	# *_2, _9
# /usr/include/c++/11/bits/stl_vector.h:1785:       }
	movq	-8(%rbp), %rdx	# D.232082, tmp91
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp91
	je	.L204	#,
	call	__stack_chk_fail@PLT	#
.L204:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11080:
	.size	_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_, .-_ZNSt6vectorIiSaIiEE11_S_max_sizeERKS0_
	.section	.text._ZNSaIiEC2ERKS_,"axG",@progbits,_ZNSaIiEC5ERKS_,comdat
	.align 2
	.weak	_ZNSaIiEC2ERKS_
	.type	_ZNSaIiEC2ERKS_, @function
_ZNSaIiEC2ERKS_:
.LFB11082:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __a, __a
# /usr/include/c++/11/bits/allocator.h:160:       : __allocator_base<_Tp>(__a) { }
	movq	-16(%rbp), %rdx	# __a, tmp82
	movq	-8(%rbp), %rax	# this, tmp83
	movq	%rdx, %rsi	# tmp82,
	movq	%rax, %rdi	# tmp83,
	call	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_	#
# /usr/include/c++/11/bits/allocator.h:160:       : __allocator_base<_Tp>(__a) { }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11082:
	.size	_ZNSaIiEC2ERKS_, .-_ZNSaIiEC2ERKS_
	.weak	_ZNSaIiEC1ERKS_
	.set	_ZNSaIiEC1ERKS_,_ZNSaIiEC2ERKS_
	.section	.text._ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E,"axG",@progbits,_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E,comdat
	.weak	_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
	.type	_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E, @function
_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E:
.LFB11084:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __n, __n
	movq	%rdx, -24(%rbp)	# D.226414, D.226414
# /usr/include/c++/11/bits/stl_uninitialized.h:704:     { return std::__uninitialized_default_n(__first, __n); }
	movq	-16(%rbp), %rdx	# __n, tmp84
	movq	-8(%rbp), %rax	# __first, tmp85
	movq	%rdx, %rsi	# tmp84,
	movq	%rax, %rdi	# tmp85,
	call	_ZSt25__uninitialized_default_nIPimET_S1_T0_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:704:     { return std::__uninitialized_default_n(__first, __n); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11084:
	.size	_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E, .-_ZSt27__uninitialized_default_n_aIPimiET_S1_T0_RSaIT1_E
	.section	.text._ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev,"axG",@progbits,_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
	.type	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev, @function
_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev:
.LFB11224:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_vector.h:98: 	: _M_start(), _M_finish(), _M_end_of_storage()
	movq	-8(%rbp), %rax	# this, tmp82
	movq	$0, (%rax)	#, this_2(D)->_M_start
# /usr/include/c++/11/bits/stl_vector.h:98: 	: _M_start(), _M_finish(), _M_end_of_storage()
	movq	-8(%rbp), %rax	# this, tmp83
	movq	$0, 8(%rax)	#, this_2(D)->_M_finish
# /usr/include/c++/11/bits/stl_vector.h:98: 	: _M_start(), _M_finish(), _M_end_of_storage()
	movq	-8(%rbp), %rax	# this, tmp84
	movq	$0, 16(%rax)	#, this_2(D)->_M_end_of_storage
# /usr/include/c++/11/bits/stl_vector.h:99: 	{ }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11224:
	.size	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev, .-_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
	.weak	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC1Ev
	.set	_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC1Ev,_ZNSt12_Vector_baseIiSaIiEE17_Vector_impl_dataC2Ev
	.section	.text._ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_,"axG",@progbits,_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_,comdat
	.weak	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_
	.type	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_, @function
_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_:
.LFB11226:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_uninitialized.h:110:         { return std::copy(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:110:         { return std::copy(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11226:
	.size	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_, .-_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiEET0_T_SC_SB_
	.section	.text._ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_,"axG",@progbits,_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_,comdat
	.weak	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_
	.type	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_, @function
_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_:
.LFB11227:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.227840, D.227840
	movq	%rsi, -16(%rbp)	# D.227841, D.227841
# /usr/include/c++/11/bits/stl_construct.h:172:         __destroy(_ForwardIterator, _ForwardIterator) { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11227:
	.size	_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_, .-_ZNSt12_Destroy_auxILb1EE9__destroyIPiEEvT_S3_
	.section	.text._ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim
	.type	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim, @function
_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim:
.LFB11228:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __p, __p
	movq	%rdx, -24(%rbp)	# __t, __t
# /usr/include/c++/11/ext/new_allocator.h:145: 	::operator delete(__p
	movq	-24(%rbp), %rax	# __t, tmp83
	leaq	0(,%rax,4), %rdx	#, _2
	movq	-16(%rbp), %rax	# __p, tmp84
	movq	%rdx, %rsi	# _2,
	movq	%rax, %rdi	# tmp84,
	call	_ZdlPvm@PLT	#
# /usr/include/c++/11/ext/new_allocator.h:150:       }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11228:
	.size	_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim, .-_ZN9__gnu_cxx13new_allocatorIiE10deallocateEPim
	.section	.text._ZNSt16allocator_traitsISaIiEE8allocateERS0_m,"axG",@progbits,_ZNSt16allocator_traitsISaIiEE8allocateERS0_m,comdat
	.weak	_ZNSt16allocator_traitsISaIiEE8allocateERS0_m
	.type	_ZNSt16allocator_traitsISaIiEE8allocateERS0_m, @function
_ZNSt16allocator_traitsISaIiEE8allocateERS0_m:
.LFB11229:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __a, __a
	movq	%rsi, -16(%rbp)	# __n, __n
# /usr/include/c++/11/bits/alloc_traits.h:464:       { return __a.allocate(__n); }
	movq	-16(%rbp), %rcx	# __n, tmp84
	movq	-8(%rbp), %rax	# __a, tmp85
	movl	$0, %edx	#,
	movq	%rcx, %rsi	# tmp84,
	movq	%rax, %rdi	# tmp85,
	call	_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv	#
# /usr/include/c++/11/bits/alloc_traits.h:464:       { return __a.allocate(__n); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11229:
	.size	_ZNSt16allocator_traitsISaIiEE8allocateERS0_m, .-_ZNSt16allocator_traitsISaIiEE8allocateERS0_m
	.section	.text._ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE,"axG",@progbits,_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE,comdat
	.weak	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	.type	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE, @function
_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE:
.LFB11230:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __it, __it
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	leaq	-8(%rbp), %rax	#, tmp85
	movq	%rax, %rdi	# tmp85,
	call	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv	#
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	movq	(%rax), %rax	# *_1, _4
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11230:
	.size	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE, .-_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
	.section	.text._ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE,"axG",@progbits,_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE,comdat
	.weak	_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
	.type	_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE, @function
_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE:
.LFB11231:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __it, __it
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	leaq	-8(%rbp), %rax	#, tmp85
	movq	%rax, %rdi	# tmp85,
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv	#
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	movq	(%rax), %rax	# *_1, _4
# /usr/include/c++/11/bits/stl_iterator.h:1259:     { return __it.base(); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11231:
	.size	_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE, .-_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE
	.section	.text._ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_,"axG",@progbits,_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_,comdat
	.weak	_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
	.type	_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_, @function
_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_:
.LFB11232:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:522:     { return std::__copy_move_a2<_IsMove>(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_	#
# /usr/include/c++/11/bits/stl_algobase.h:522:     { return std::__copy_move_a2<_IsMove>(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11232:
	.size	_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_, .-_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_
	.section	.text._ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_,"axG",@progbits,_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_,comdat
	.weak	_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
	.type	_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_, @function
_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_:
.LFB11233:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __from, __from
	movq	%rsi, -16(%rbp)	# __res, __res
# /usr/include/c++/11/bits/stl_algobase.h:329:     { return __from + (__res - std::__niter_base(__from)); }
	movq	-8(%rbp), %rax	# __from, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZSt12__niter_baseIPiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS4_T0_EE	#
	movq	%rax, %rdx	#, _1
# /usr/include/c++/11/bits/stl_algobase.h:329:     { return __from + (__res - std::__niter_base(__from)); }
	movq	-16(%rbp), %rax	# __res, tmp88
	subq	%rdx, %rax	# _1, _2
# /usr/include/c++/11/bits/stl_algobase.h:329:     { return __from + (__res - std::__niter_base(__from)); }
	sarq	$2, %rax	#, tmp89
	movq	%rax, %rdx	# tmp89, _3
	leaq	-8(%rbp), %rax	#, tmp90
	movq	%rdx, %rsi	# _3,
	movq	%rax, %rdi	# tmp90,
	call	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl	#
# /usr/include/c++/11/bits/stl_algobase.h:329:     { return __from + (__res - std::__niter_base(__from)); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11233:
	.size	_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_, .-_ZSt12__niter_wrapIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEES2_ET_S7_T0_
	.section	.text._ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_,"axG",@progbits,_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_,comdat
	.weak	_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_
	.type	_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_, @function
_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_:
.LFB11234:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.227866, D.227866
	movq	%rsi, -16(%rbp)	# D.227867, D.227867
# /usr/include/c++/11/bits/stl_construct.h:172:         __destroy(_ForwardIterator, _ForwardIterator) { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11234:
	.size	_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_, .-_ZNSt12_Destroy_auxILb1EE9__destroyIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEEEvT_S9_
	.section	.text._ZSt12__niter_baseIPiET_S1_,"axG",@progbits,_ZSt12__niter_baseIPiET_S1_,comdat
	.weak	_ZSt12__niter_baseIPiET_S1_
	.type	_ZSt12__niter_baseIPiET_S1_, @function
_ZSt12__niter_baseIPiET_S1_:
.LFB11235:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __it, __it
# /usr/include/c++/11/bits/stl_algobase.h:315:     { return __it; }
	movq	-8(%rbp), %rax	# __it, _2
# /usr/include/c++/11/bits/stl_algobase.h:315:     { return __it; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11235:
	.size	_ZSt12__niter_baseIPiET_S1_, .-_ZSt12__niter_baseIPiET_S1_
	.section	.text._ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_,"axG",@progbits,_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_,comdat
	.weak	_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
	.type	_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_, @function
_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_:
.LFB11236:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:522:     { return std::__copy_move_a2<_IsMove>(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_	#
# /usr/include/c++/11/bits/stl_algobase.h:522:     { return std::__copy_move_a2<_IsMove>(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11236:
	.size	_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_, .-_ZSt14__copy_move_a1ILb0EPiS0_ET1_T0_S2_S1_
	.section	.text._ZSt12__niter_wrapIPiET_RKS1_S1_,"axG",@progbits,_ZSt12__niter_wrapIPiET_RKS1_S1_,comdat
	.weak	_ZSt12__niter_wrapIPiET_RKS1_S1_
	.type	_ZSt12__niter_wrapIPiET_RKS1_S1_, @function
_ZSt12__niter_wrapIPiET_RKS1_S1_:
.LFB11237:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.227879, D.227879
	movq	%rsi, -16(%rbp)	# __res, __res
# /usr/include/c++/11/bits/stl_algobase.h:336:     { return __res; }
	movq	-16(%rbp), %rax	# __res, _2
# /usr/include/c++/11/bits/stl_algobase.h:336:     { return __res; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11237:
	.size	_ZSt12__niter_wrapIPiET_RKS1_S1_, .-_ZSt12__niter_wrapIPiET_RKS1_S1_
	.section	.text._ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_,"axG",@progbits,_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_,comdat
	.weak	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_
	.type	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_, @function
_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_:
.LFB11238:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_uninitialized.h:110:         { return std::copy(__first, __last, __result); }
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZSt4copyIPiS0_ET0_T_S2_S1_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:110:         { return std::copy(__first, __last, __result); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11238:
	.size	_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_, .-_ZNSt20__uninitialized_copyILb1EE13__uninit_copyIPiS2_EET0_T_S4_S3_
	.section	.text._ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_,"axG",@progbits,_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_,comdat
	.weak	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
	.type	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_, @function
_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_:
.LFB11239:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __a, __a
# /usr/include/c++/11/bits/alloc_traits.h:550: 	return __a.max_size();
	movq	-8(%rbp), %rax	# __a, tmp84
	movq	%rax, %rdi	# tmp84,
	call	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv	#
# /usr/include/c++/11/bits/alloc_traits.h:554:       }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11239:
	.size	_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_, .-_ZNSt16allocator_traitsISaIiEE8max_sizeERKS0_
	.section	.text._ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorIiEC5ERKS1_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	.type	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_, @function
_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_:
.LFB11241:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# D.179995, D.179995
# /usr/include/c++/11/ext/new_allocator.h:82:       new_allocator(const new_allocator&) _GLIBCXX_USE_NOEXCEPT { }
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11241:
	.size	_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_, .-_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	.weak	_ZN9__gnu_cxx13new_allocatorIiEC1ERKS1_
	.set	_ZN9__gnu_cxx13new_allocatorIiEC1ERKS1_,_ZN9__gnu_cxx13new_allocatorIiEC2ERKS1_
	.section	.text._ZSt25__uninitialized_default_nIPimET_S1_T0_,"axG",@progbits,_ZSt25__uninitialized_default_nIPimET_S1_T0_,comdat
	.weak	_ZSt25__uninitialized_default_nIPimET_S1_T0_
	.type	_ZSt25__uninitialized_default_nIPimET_S1_T0_, @function
_ZSt25__uninitialized_default_nIPimET_S1_T0_:
.LFB11243:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_uninitialized.h:635:       constexpr bool __can_fill
	movb	$1, -1(%rbp)	#, __can_fill
# /usr/include/c++/11/bits/stl_uninitialized.h:640: 	__uninit_default_n(__first, __n);
	movq	-32(%rbp), %rdx	# __n, tmp84
	movq	-24(%rbp), %rax	# __first, tmp85
	movq	%rdx, %rsi	# tmp84,
	movq	%rax, %rdi	# tmp85,
	call	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:641:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11243:
	.size	_ZSt25__uninitialized_default_nIPimET_S1_T0_, .-_ZSt25__uninitialized_default_nIPimET_S1_T0_
	.section	.text._ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,"axG",@progbits,_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_,comdat
	.weak	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.type	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_, @function
_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_:
.LFB11328:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%rbx	#
	subq	$40, %rsp	#,
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:620: 	     (std::__miter_base(__first), std::__miter_base(__last), __result);
	movq	-32(%rbp), %rax	# __last, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_	#
	movq	%rax, %rbx	#, D.231686
	movq	-24(%rbp), %rax	# __first, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEET_S8_	#
	movq	%rax, %rcx	#, D.231687
	movq	-40(%rbp), %rax	# __result, tmp88
	movq	%rax, %rdx	# tmp88,
	movq	%rbx, %rsi	# D.231686,
	movq	%rcx, %rdi	# D.231687,
	call	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_	#
# /usr/include/c++/11/bits/stl_algobase.h:621:     }
	movq	-8(%rbp), %rbx	#,
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11328:
	.size	_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_, .-_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET0_T_SA_S9_
	.section	.text._ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv:
.LFB11330:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/ext/new_allocator.h:200: 	return std::size_t(__PTRDIFF_MAX__) / sizeof(_Tp);
	movabsq	$2305843009213693951, %rax	#, _1
# /usr/include/c++/11/ext/new_allocator.h:204:       }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11330:
	.size	_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv
	.section	.text._ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv
	.type	_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv, @function
_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv:
.LFB11329:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
	movq	%rsi, -16(%rbp)	# __n, __n
	movq	%rdx, -24(%rbp)	# D.229804, D.229804
# /usr/include/c++/11/ext/new_allocator.h:111: 	if (__builtin_expect(__n > this->_M_max_size(), false))
	movq	-8(%rbp), %rax	# this, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv	#
# /usr/include/c++/11/ext/new_allocator.h:111: 	if (__builtin_expect(__n > this->_M_max_size(), false))
	cmpq	%rax, -16(%rbp)	# _1, __n
	seta	%al	#, _2
# /usr/include/c++/11/ext/new_allocator.h:111: 	if (__builtin_expect(__n > this->_M_max_size(), false))
	movzbl	%al, %eax	# _2, _3
	testq	%rax, %rax	# _4
	setne	%al	#, retval.7_10
# /usr/include/c++/11/ext/new_allocator.h:111: 	if (__builtin_expect(__n > this->_M_max_size(), false))
	testb	%al, %al	# retval.7_10
	je	.L243	#,
# /usr/include/c++/11/ext/new_allocator.h:115: 	    if (__n > (std::size_t(-1) / sizeof(_Tp)))
	movabsq	$4611686018427387903, %rax	#, tmp91
	cmpq	%rax, -16(%rbp)	# tmp91, __n
	jbe	.L244	#,
# /usr/include/c++/11/ext/new_allocator.h:116: 	      std::__throw_bad_array_new_length();
	call	_ZSt28__throw_bad_array_new_lengthv@PLT	#
.L244:
# /usr/include/c++/11/ext/new_allocator.h:117: 	    std::__throw_bad_alloc();
	call	_ZSt17__throw_bad_allocv@PLT	#
.L243:
# /usr/include/c++/11/ext/new_allocator.h:127: 	return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
	movq	-16(%rbp), %rax	# __n, tmp92
	salq	$2, %rax	#, _6
	movq	%rax, %rdi	# _6,
	call	_Znwm@PLT	#
# /usr/include/c++/11/ext/new_allocator.h:127: 	return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
	nop	
# /usr/include/c++/11/ext/new_allocator.h:128:       }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11329:
	.size	_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv, .-_ZN9__gnu_cxx13new_allocatorIiE8allocateEmPKv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv:
.LFB11331:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_iterator.h:1089:       { return _M_current; }
	movq	-8(%rbp), %rax	# this, _2
# /usr/include/c++/11/bits/stl_iterator.h:1089:       { return _M_current; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11331:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEE4baseEv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv:
.LFB11332:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/bits/stl_iterator.h:1089:       { return _M_current; }
	movq	-8(%rbp), %rax	# this, _2
# /usr/include/c++/11/bits/stl_iterator.h:1089:       { return _M_current; }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11332:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEE4baseEv
	.section	.text._ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_,"axG",@progbits,_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_,comdat
	.weak	_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_
	.type	_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_, @function
_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_:
.LFB11333:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:495: 			      _Category>::__copy_m(__first, __last, __result);
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_	#
# /usr/include/c++/11/bits/stl_algobase.h:496:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11333:
	.size	_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_, .-_ZSt14__copy_move_a2ILb0EPKiPiET1_T0_S4_S3_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl, @function
_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl:
.LFB11334:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -40(%rbp)	# this, this
	movq	%rsi, -48(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_iterator.h:1073:       operator+(difference_type __n) const _GLIBCXX_NOEXCEPT
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp92
	movq	%rax, -8(%rbp)	# tmp92, D.232083
	xorl	%eax, %eax	# tmp92
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	movq	-40(%rbp), %rax	# this, tmp88
	movq	(%rax), %rdx	# this_6(D)->_M_current, _1
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	movq	-48(%rbp), %rax	# __n, __n.16_2
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	salq	$2, %rax	#, _3
	addq	%rdx, %rax	# _1, _4
	movq	%rax, -24(%rbp)	# _4, D.229843
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	leaq	-24(%rbp), %rdx	#, tmp89
	leaq	-16(%rbp), %rax	#, tmp90
	movq	%rdx, %rsi	# tmp89,
	movq	%rax, %rdi	# tmp90,
	call	_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEC1ERKS1_	#
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	movq	-16(%rbp), %rax	# D.229844, D.231789
# /usr/include/c++/11/bits/stl_iterator.h:1074:       { return __normal_iterator(_M_current + __n); }
	movq	-8(%rbp), %rdx	# D.232083, tmp93
	subq	%fs:40, %rdx	# MEM[(<address-space-1> long unsigned int *)40B], tmp93
	je	.L254	#,
	call	__stack_chk_fail@PLT	#
.L254:
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11334:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl, .-_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEplEl
	.section	.text._ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_,"axG",@progbits,_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_,comdat
	.weak	_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_
	.type	_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_, @function
_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_:
.LFB11335:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:495: 			      _Category>::__copy_m(__first, __last, __result);
	movq	-24(%rbp), %rdx	# __result, tmp84
	movq	-16(%rbp), %rcx	# __last, tmp85
	movq	-8(%rbp), %rax	# __first, tmp86
	movq	%rcx, %rsi	# tmp85,
	movq	%rax, %rdi	# tmp86,
	call	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_	#
# /usr/include/c++/11/bits/stl_algobase.h:496:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11335:
	.size	_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_, .-_ZSt14__copy_move_a2ILb0EPiS0_ET1_T0_S2_S1_
	.section	.text._ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv:
.LFB11336:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# this, this
# /usr/include/c++/11/ext/new_allocator.h:155:       { return _M_max_size(); }
	movq	-8(%rbp), %rax	# this, tmp84
	movq	%rax, %rdi	# tmp84,
	call	_ZNK9__gnu_cxx13new_allocatorIiE11_M_max_sizeEv	#
# /usr/include/c++/11/ext/new_allocator.h:155:       { return _M_max_size(); }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11336:
	.size	_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorIiE8max_sizeEv
	.section	.text._ZSt11__addressofIiEPT_RS0_,"axG",@progbits,_ZSt11__addressofIiEPT_RS0_,comdat
	.weak	_ZSt11__addressofIiEPT_RS0_
	.type	_ZSt11__addressofIiEPT_RS0_, @function
_ZSt11__addressofIiEPT_RS0_:
.LFB11338:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# __r, __r
# /usr/include/c++/11/bits/move.h:50:     { return __builtin_addressof(__r); }
	movq	-8(%rbp), %rax	# __r, _2
# /usr/include/c++/11/bits/move.h:50:     { return __builtin_addressof(__r); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11338:
	.size	_ZSt11__addressofIiEPT_RS0_, .-_ZSt11__addressofIiEPT_RS0_
	.section	.text._ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_,"axG",@progbits,_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_,comdat
	.weak	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
	.type	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_, @function
_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_:
.LFB11337:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __n, __n
# /usr/include/c++/11/bits/stl_uninitialized.h:597: 	  if (__n > 0)
	cmpq	$0, -32(%rbp)	#, __n
	je	.L262	#,
# /usr/include/c++/11/bits/stl_uninitialized.h:600: 		= std::__addressof(*__first);
	movq	-24(%rbp), %rax	# __first, tmp86
	movq	%rax, %rdi	# tmp86,
	call	_ZSt11__addressofIiEPT_RS0_	#
	movq	%rax, -8(%rbp)	# tmp87, __val
# /usr/include/c++/11/bits/stl_uninitialized.h:601: 	      std::_Construct(__val);
	movq	-8(%rbp), %rax	# __val, tmp88
	movq	%rax, %rdi	# tmp88,
	call	_ZSt10_ConstructIiJEEvPT_DpOT0_	#
# /usr/include/c++/11/bits/stl_uninitialized.h:602: 	      ++__first;
	addq	$4, -24(%rbp)	#, __first
# /usr/include/c++/11/bits/stl_uninitialized.h:603: 	      __first = std::fill_n(__first, __n - 1, *__val);
	movq	-32(%rbp), %rax	# __n, tmp89
	leaq	-1(%rax), %rcx	#, _1
	movq	-8(%rbp), %rdx	# __val, tmp90
	movq	-24(%rbp), %rax	# __first, tmp91
	movq	%rcx, %rsi	# _1,
	movq	%rax, %rdi	# tmp91,
	call	_ZSt6fill_nIPimiET_S1_T0_RKT1_	#
	movq	%rax, -24(%rbp)	# _12, __first
.L262:
# /usr/include/c++/11/bits/stl_uninitialized.h:605: 	  return __first;
	movq	-24(%rbp), %rax	# __first, _14
# /usr/include/c++/11/bits/stl_uninitialized.h:606: 	}
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11337:
	.size	_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_, .-_ZNSt27__uninitialized_default_n_1ILb1EE18__uninit_default_nIPimEET_S3_T0_
	.section	.text._ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_,"axG",@progbits,_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_,comdat
	.weak	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_
	.type	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_, @function
_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_:
.LFB11444:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	pushq	%r12	#
	pushq	%rbx	#
	subq	$32, %rsp	#,
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:529:       return std::__niter_wrap(__result,
	movq	-40(%rbp), %rax	# __result, __result.8_1
	movq	%rax, %rdi	# __result.8_1,
	call	_ZSt12__niter_baseIPiET_S1_	#
	movq	%rax, %r12	#, _2
	movq	-32(%rbp), %rax	# __last, tmp89
	movq	%rax, %rdi	# tmp89,
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE	#
	movq	%rax, %rbx	#, _3
	movq	-24(%rbp), %rax	# __first, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZSt12__niter_baseIPKiSt6vectorIiSaIiEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE	#
	movq	%r12, %rdx	# _2,
	movq	%rbx, %rsi	# _3,
	movq	%rax, %rdi	# _4,
	call	_ZSt14__copy_move_a1ILb0EPKiPiET1_T0_S4_S3_	#
	movq	%rax, %rdx	#, _5
	leaq	-40(%rbp), %rax	#, tmp91
	movq	%rdx, %rsi	# _5,
	movq	%rax, %rdi	# tmp91,
	call	_ZSt12__niter_wrapIPiET_RKS1_S1_	#
# /usr/include/c++/11/bits/stl_algobase.h:533:     }
	addq	$32, %rsp	#,
	popq	%rbx	#
	popq	%r12	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11444:
	.size	_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_, .-_ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEPiET1_T0_SA_S9_
	.section	.text._ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_,"axG",@progbits,_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_,comdat
	.weak	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	.type	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_, @function
_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_:
.LFB11445:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$48, %rsp	#,
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __result, __result
# /usr/include/c++/11/bits/stl_algobase.h:429: 	  const ptrdiff_t _Num = __last - __first;
	movq	-32(%rbp), %rax	# __last, tmp89
	subq	-24(%rbp), %rax	# __first, _1
# /usr/include/c++/11/bits/stl_algobase.h:429: 	  const ptrdiff_t _Num = __last - __first;
	sarq	$2, %rax	#, tmp90
	movq	%rax, -8(%rbp)	# tmp90, _Num
# /usr/include/c++/11/bits/stl_algobase.h:430: 	  if (_Num)
	cmpq	$0, -8(%rbp)	#, _Num
	je	.L267	#,
# /usr/include/c++/11/bits/stl_algobase.h:431: 	    __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
	movq	-8(%rbp), %rax	# _Num, _Num.9_2
# /usr/include/c++/11/bits/stl_algobase.h:431: 	    __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
	leaq	0(,%rax,4), %rdx	#, _3
	movq	-24(%rbp), %rcx	# __first, tmp93
	movq	-40(%rbp), %rax	# __result, tmp94
	movq	%rcx, %rsi	# tmp93,
	movq	%rax, %rdi	# tmp94,
	call	memmove@PLT	#
.L267:
# /usr/include/c++/11/bits/stl_algobase.h:432: 	  return __result + _Num;
	movq	-8(%rbp), %rax	# _Num, _Num.10_4
# /usr/include/c++/11/bits/stl_algobase.h:432: 	  return __result + _Num;
	leaq	0(,%rax,4), %rdx	#, _5
# /usr/include/c++/11/bits/stl_algobase.h:432: 	  return __result + _Num;
	movq	-40(%rbp), %rax	# __result, tmp95
	addq	%rdx, %rax	# _5, _13
# /usr/include/c++/11/bits/stl_algobase.h:433: 	}
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11445:
	.size	_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_, .-_ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIiEEPT_PKS3_S6_S4_
	.section	.text._ZSt10_ConstructIiJEEvPT_DpOT0_,"axG",@progbits,_ZSt10_ConstructIiJEEvPT_DpOT0_,comdat
	.weak	_ZSt10_ConstructIiJEEvPT_DpOT0_
	.type	_ZSt10_ConstructIiJEEvPT_DpOT0_, @function
_ZSt10_ConstructIiJEEvPT_DpOT0_:
.LFB11446:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movq	%rdi, -8(%rbp)	# __p, __p
# /usr/include/c++/11/bits/stl_construct.h:119:       ::new(static_cast<void*>(__p)) _Tp(std::forward<_Args>(__args)...);
	movq	-8(%rbp), %rax	# __p, _2
# /usr/include/c++/11/bits/stl_construct.h:119:       ::new(static_cast<void*>(__p)) _Tp(std::forward<_Args>(__args)...);
	movq	%rax, %rsi	# _2,
	movl	$4, %edi	#,
	call	_ZnwmPv	#
	movl	$0, (%rax)	#, MEM[(int *)_5]
# /usr/include/c++/11/bits/stl_construct.h:120:     }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11446:
	.size	_ZSt10_ConstructIiJEEvPT_DpOT0_, .-_ZSt10_ConstructIiJEEvPT_DpOT0_
	.section	.text._ZSt6fill_nIPimiET_S1_T0_RKT1_,"axG",@progbits,_ZSt6fill_nIPimiET_S1_T0_RKT1_,comdat
	.weak	_ZSt6fill_nIPimiET_S1_T0_RKT1_
	.type	_ZSt6fill_nIPimiET_S1_T0_RKT1_, @function
_ZSt6fill_nIPimiET_S1_T0_RKT1_:
.LFB11447:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __n, __n
	movq	%rdx, -24(%rbp)	# __value, __value
# /usr/include/c++/11/bits/stl_algobase.h:1150: 			       std::__iterator_category(__first));
	leaq	-8(%rbp), %rax	#, tmp87
	movq	%rax, %rdi	# tmp87,
	call	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_	#
# /usr/include/c++/11/bits/stl_algobase.h:1149:       return std::__fill_n_a(__first, std::__size_to_integer(__n), __value,
	movq	-16(%rbp), %rax	# __n, tmp88
	movq	%rax, %rdi	# tmp88,
	call	_ZSt17__size_to_integerm	#
	movq	%rax, %rcx	#, _1
	movq	-8(%rbp), %rax	# __first, __first.26_2
	movq	-24(%rbp), %rdx	# __value, tmp89
	movq	%rcx, %rsi	# _1,
	movq	%rax, %rdi	# __first.26_2,
	call	_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag	#
# /usr/include/c++/11/bits/stl_algobase.h:1151:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11447:
	.size	_ZSt6fill_nIPimiET_S1_T0_RKT1_, .-_ZSt6fill_nIPimiET_S1_T0_RKT1_
	.section	.text._ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_,"axG",@progbits,_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_,comdat
	.weak	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	.type	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_, @function
_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_:
.LFB11515:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# D.230833, D.230833
# /usr/include/c++/11/bits/stl_iterator_base_types.h:239:     { return typename iterator_traits<_Iter>::iterator_category(); }
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11515:
	.size	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_, .-_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	.section	.text._ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag,"axG",@progbits,_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag,comdat
	.weak	_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
	.type	_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag, @function
_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag:
.LFB11516:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __n, __n
	movq	%rdx, -24(%rbp)	# __value, __value
# /usr/include/c++/11/bits/stl_algobase.h:1115:       if (__n <= 0)
	cmpq	$0, -16(%rbp)	#, __n
	jne	.L275	#,
# /usr/include/c++/11/bits/stl_algobase.h:1116: 	return __first;
	movq	-8(%rbp), %rax	# __first, _4
	jmp	.L276	#
.L275:
# /usr/include/c++/11/bits/stl_algobase.h:1120:       std::__fill_a(__first, __first + __n, __value);
	movq	-16(%rbp), %rax	# __n, tmp87
	leaq	0(,%rax,4), %rdx	#, _1
# /usr/include/c++/11/bits/stl_algobase.h:1120:       std::__fill_a(__first, __first + __n, __value);
	movq	-8(%rbp), %rax	# __first, tmp88
	leaq	(%rdx,%rax), %rcx	#, _2
	movq	-24(%rbp), %rdx	# __value, tmp89
	movq	-8(%rbp), %rax	# __first, tmp90
	movq	%rcx, %rsi	# _2,
	movq	%rax, %rdi	# tmp90,
	call	_ZSt8__fill_aIPiiEvT_S1_RKT0_	#
# /usr/include/c++/11/bits/stl_algobase.h:1121:       return __first + __n;
	movq	-16(%rbp), %rax	# __n, tmp91
	leaq	0(,%rax,4), %rdx	#, _3
# /usr/include/c++/11/bits/stl_algobase.h:1121:       return __first + __n;
	movq	-8(%rbp), %rax	# __first, tmp92
	addq	%rdx, %rax	# _3, _4
.L276:
# /usr/include/c++/11/bits/stl_algobase.h:1122:     }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11516:
	.size	_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag, .-_ZSt10__fill_n_aIPimiET_S1_T0_RKT1_St26random_access_iterator_tag
	.section	.text._ZSt8__fill_aIPiiEvT_S1_RKT0_,"axG",@progbits,_ZSt8__fill_aIPiiEvT_S1_RKT0_,comdat
	.weak	_ZSt8__fill_aIPiiEvT_S1_RKT0_
	.type	_ZSt8__fill_aIPiiEvT_S1_RKT0_, @function
_ZSt8__fill_aIPiiEvT_S1_RKT0_:
.LFB11546:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$32, %rsp	#,
	movq	%rdi, -8(%rbp)	# __first, __first
	movq	%rsi, -16(%rbp)	# __last, __last
	movq	%rdx, -24(%rbp)	# __value, __value
# /usr/include/c++/11/bits/stl_algobase.h:969:     { std::__fill_a1(__first, __last, __value); }
	movq	-24(%rbp), %rdx	# __value, tmp82
	movq	-16(%rbp), %rcx	# __last, tmp83
	movq	-8(%rbp), %rax	# __first, tmp84
	movq	%rcx, %rsi	# tmp83,
	movq	%rax, %rdi	# tmp84,
	call	_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_	#
# /usr/include/c++/11/bits/stl_algobase.h:969:     { std::__fill_a1(__first, __last, __value); }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11546:
	.size	_ZSt8__fill_aIPiiEvT_S1_RKT0_, .-_ZSt8__fill_aIPiiEvT_S1_RKT0_
	.section	.text._ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_,"axG",@progbits,_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_,comdat
	.weak	_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	.type	_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_, @function
_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_:
.LFB11550:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)	# __first, __first
	movq	%rsi, -32(%rbp)	# __last, __last
	movq	%rdx, -40(%rbp)	# __value, __value
# /usr/include/c++/11/bits/stl_algobase.h:922:       const _Tp __tmp = __value;
	movq	-40(%rbp), %rax	# __value, tmp82
	movl	(%rax), %eax	# *__value_4(D), tmp83
	movl	%eax, -4(%rbp)	# tmp83, __tmp
# /usr/include/c++/11/bits/stl_algobase.h:923:       for (; __first != __last; ++__first)
	jmp	.L279	#
.L280:
# /usr/include/c++/11/bits/stl_algobase.h:924: 	*__first = __tmp;
	movq	-24(%rbp), %rax	# __first, tmp84
	movl	-4(%rbp), %edx	# __tmp, tmp85
	movl	%edx, (%rax)	# tmp85, *__first_1
# /usr/include/c++/11/bits/stl_algobase.h:923:       for (; __first != __last; ++__first)
	addq	$4, -24(%rbp)	#, __first
.L279:
# /usr/include/c++/11/bits/stl_algobase.h:923:       for (; __first != __last; ++__first)
	movq	-24(%rbp), %rax	# __first, tmp86
	cmpq	-32(%rbp), %rax	# __last, tmp86
	jne	.L280	#,
# /usr/include/c++/11/bits/stl_algobase.h:925:     }
	nop	
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11550:
	.size	_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_, .-_ZSt9__fill_a1IPiiEN9__gnu_cxx11__enable_ifIXsrSt11__is_scalarIT0_E7__valueEvE6__typeET_S8_RKS4_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB11600:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
	movl	%edi, -4(%rbp)	# __initialize_p, __initialize_p
	movl	%esi, -8(%rbp)	# __priority, __priority
# measure.cpp:65: }
	cmpl	$1, -4(%rbp)	#, __initialize_p
	jne	.L283	#,
# measure.cpp:65: }
	cmpl	$65535, -8(%rbp)	#, __priority
	jne	.L283	#,
# /usr/include/c++/11/iostream:74:   static ios_base::Init __ioinit;
	leaq	_ZStL8__ioinit(%rip), %rax	#, tmp82
	movq	%rax, %rdi	# tmp82,
	call	_ZNSt8ios_base4InitC1Ev@PLT	#
	leaq	__dso_handle(%rip), %rax	#, tmp83
	movq	%rax, %rdx	# tmp83,
	leaq	_ZStL8__ioinit(%rip), %rax	#, tmp84
	movq	%rax, %rsi	# tmp84,
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax	#, tmp86
	movq	%rax, %rdi	# tmp85,
	call	__cxa_atexit@PLT	#
.L283:
# measure.cpp:65: }
	nop	
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11600:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z13bubble_sort_1RSt6vectorIiSaIiEE, @function
_GLOBAL__sub_I__Z13bubble_sort_1RSt6vectorIiSaIiEE:
.LFB11623:
	.cfi_startproc
	endbr64	
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
# measure.cpp:65: }
	movl	$65535, %esi	#,
	movl	$1, %edi	#,
	call	_Z41__static_initialization_and_destruction_0ii	#
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE11623:
	.size	_GLOBAL__sub_I__Z13bubble_sort_1RSt6vectorIiSaIiEE, .-_GLOBAL__sub_I__Z13bubble_sort_1RSt6vectorIiSaIiEE
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13bubble_sort_1RSt6vectorIiSaIiEE
	.section	.rodata
	.align 8
.LC0:
	.long	-400107883
	.long	1041313291
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
