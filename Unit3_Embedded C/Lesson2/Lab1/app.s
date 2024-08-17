
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0008 	ldr	r0, [pc, #8]	; 18 <main+0x18>
   c:	ebfffffe 	bl	0 <Uart_send_string>
  10:	e1a00000 	nop			; (mov r0, r0)
  14:	e8bd8800 	pop	{fp, pc}
  18:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   4:	6e695f6e 	cdpvs	15, 6, cr5, cr9, cr14, {3}
   8:	7065645f 	rsbvc	r6, r5, pc, asr r4
   c:	413a6874 	teqmi	sl, r4, ror r8
  10:	006c616d 	rsbeq	r6, ip, sp, ror #2
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000062 	andeq	r0, r0, r2, rrx
   4:	00000004 	andeq	r0, r0, r4
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000082 	andeq	r0, r0, r2, lsl #1
  10:	0000ed0c 	andeq	lr, r0, ip, lsl #26
	...
  1c:	00001c00 	andeq	r1, r0, r0, lsl #24
  20:	00000000 	andeq	r0, r0, r0
  24:	003c0200 	eorseq	r0, ip, r0, lsl #4
  28:	00350000 	eorseq	r0, r5, r0
  2c:	35030000 	strcc	r0, [r3, #-0]
  30:	63000000 	movwvs	r0, #0
  34:	07040400 	streq	r0, [r4, -r0, lsl #8]
  38:	00000075 	andeq	r0, r0, r5, ror r0
  3c:	df080104 	svcle	0x00080104
  40:	05000000 	streq	r0, [r0, #-0]
  44:	00000067 	andeq	r0, r0, r7, rrx
  48:	00250201 	eoreq	r0, r5, r1, lsl #4
  4c:	03050000 	movweq	r0, #20480	; 0x5000
  50:	00000000 	andeq	r0, r0, r0
  54:	0000f306 	andeq	pc, r0, r6, lsl #6
  58:	00040100 	andeq	r0, r4, r0, lsl #2
  5c:	1c000000 	stcne	0, cr0, [r0], {-0}
  60:	01000000 	mrseq	r0, (UNDEF: 0)
  64:	Address 0x00000064 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0xfffffeff
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10061201 	andne	r1, r6, r1, lsl #4
  10:	02000017 	andeq	r0, r0, #23
  14:	13490101 	movtne	r0, #37121	; 0x9101
  18:	00001301 	andeq	r1, r0, r1, lsl #6
  1c:	49002103 	stmdbmi	r0, {r0, r1, r8, sp}
  20:	000b2f13 	andeq	r2, fp, r3, lsl pc
  24:	00240400 	eoreq	r0, r4, r0, lsl #8
  28:	0b3e0b0b 	bleq	f82c5c <main+0xf82c5c>
  2c:	00000e03 	andeq	r0, r0, r3, lsl #28
  30:	03003405 	movweq	r3, #1029	; 0x405
  34:	3b0b3a0e 	blcc	2ce874 <main+0x2ce874>
  38:	3f13490b 	svccc	0x0013490b
  3c:	00180219 	andseq	r0, r8, r9, lsl r2
  40:	002e0600 	eoreq	r0, lr, r0, lsl #12
  44:	0e03193f 			; <UNDEFINED> instruction: 0x0e03193f
  48:	0b3b0b3a 	bleq	ec2d38 <main+0xec2d38>
  4c:	01111927 	tsteq	r1, r7, lsr #18
  50:	18400612 	stmdane	r0, {r1, r4, r9, sl}^
  54:	00194296 	mulseq	r9, r6, r2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	0000001c 	andeq	r0, r0, ip, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000031 	andeq	r0, r0, r1, lsr r0
   4:	001c0002 	andseq	r0, ip, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	05000000 	streq	r0, [r0, #-0]
  28:	00000002 	andeq	r0, r0, r2
  2c:	4b4b1500 	blmi	12c5434 <main+0x12c5434>
  30:	01000602 	tsteq	r0, r2, lsl #12
  34:	Address 0x00000034 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	555c3a43 	ldrbpl	r3, [ip, #-2627]	; 0xfffff5bd
   4:	73726573 	cmnvc	r2, #482344960	; 0x1cc00000
   8:	7365525c 	cmnvc	r5, #92, 4	; 0xc0000005
   c:	74726174 	ldrbtvc	r6, [r2], #-372	; 0xfffffe8c
  10:	7365445c 	cmnvc	r5, #92, 8	; 0x5c000000
  14:	706f746b 	rsbvc	r7, pc, fp, ror #8
  18:	626d455c 	rsbvs	r4, sp, #92, 10	; 0x17000000
  1c:	65646465 	strbvs	r6, [r4, #-1125]!	; 0xfffffb9b
  20:	69445f64 	stmdbvs	r4, {r2, r5, r6, r8, r9, sl, fp, ip, lr}^
  24:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; fffffe6c <main+0xfffffe6c>
  28:	6d455c61 	stclvs	12, cr5, [r5, #-388]	; 0xfffffe7c
  2c:	64646562 	strbtvs	r6, [r4], #-1378	; 0xfffffa9e
  30:	535f6465 	cmppl	pc, #1694498816	; 0x65000000
  34:	65747379 	ldrbvs	r7, [r4, #-889]!	; 0xfffffc87
  38:	69445f6d 	stmdbvs	r4, {r0, r2, r3, r5, r6, r8, r9, sl, fp, ip, lr}^
  3c:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; fffffe84 <main+0xfffffe84>
  40:	6e4f5f61 	cdpvs	15, 4, cr5, cr15, cr1, {3}
  44:	656e696c 	strbvs	r6, [lr, #-2412]!	; 0xfffff694
  48:	696e555c 	stmdbvs	lr!, {r2, r3, r4, r6, r8, sl, ip, lr}^
  4c:	455f3374 	ldrbmi	r3, [pc, #-884]	; fffffce0 <main+0xfffffce0>
  50:	6465626d 	strbtvs	r6, [r5], #-621	; 0xfffffd93
  54:	20646564 	rsbcs	r6, r4, r4, ror #10
  58:	654c5c43 	strbvs	r5, [ip, #-3139]	; 0xfffff3bd
  5c:	6e6f7373 	mcrvs	3, 3, r7, cr15, cr3, {3}
  60:	614c5c32 	cmpvs	ip, r2, lsr ip
  64:	73003162 	movwvc	r3, #354	; 0x162
  68:	6e697274 	mcrvs	2, 3, r7, cr9, cr4, {3}
  6c:	75625f67 	strbvc	r5, [r2, #-3943]!	; 0xfffff099
  70:	72656666 	rsbvc	r6, r5, #106954752	; 0x6600000
  74:	736e7500 	cmnvc	lr, #0, 10
  78:	656e6769 	strbvs	r6, [lr, #-1897]!	; 0xfffff897
  7c:	6e692064 	cdpvs	0, 6, cr2, cr9, cr4, {3}
  80:	4e470074 	mcrmi	0, 2, r0, cr7, cr4, {3}
  84:	31432055 	qdaddcc	r2, r5, r3
  88:	2e372031 	mrccs	0, 1, r2, cr7, cr1, {1}
  8c:	20312e32 	eorscs	r2, r1, r2, lsr lr
  90:	37313032 			; <UNDEFINED> instruction: 0x37313032
  94:	34303930 	ldrtcc	r3, [r0], #-2352	; 0xfffff6d0
  98:	65722820 	ldrbvs	r2, [r2, #-2080]!	; 0xfffff7e0
  9c:	7361656c 	cmnvc	r1, #108, 10	; 0x1b000000
  a0:	5b202965 	blpl	80a63c <main+0x80a63c>
  a4:	2f4d5241 	svccs	0x004d5241
  a8:	65626d65 	strbvs	r6, [r2, #-3429]!	; 0xfffff29b
  ac:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  b0:	622d372d 	eorvs	r3, sp, #11796480	; 0xb40000
  b4:	636e6172 	cmnvs	lr, #-2147483620	; 0x8000001c
  b8:	65722068 	ldrbvs	r2, [r2, #-104]!	; 0xffffff98
  bc:	69736976 	ldmdbvs	r3!, {r1, r2, r4, r5, r6, r8, fp, sp, lr}^
  c0:	32206e6f 	eorcc	r6, r0, #1776	; 0x6f0
  c4:	30323535 	eorscc	r3, r2, r5, lsr r5
  c8:	2d205d34 	stccs	13, cr5, [r0, #-208]!	; 0xffffff30
  cc:	7570636d 	ldrbvc	r6, [r0, #-877]!	; 0xfffffc93
  d0:	6d72613d 	ldfvse	f6, [r2, #-244]!	; 0xffffff0c
  d4:	65363239 	ldrvs	r3, [r6, #-569]!	; 0xfffffdc7
  d8:	20732d6a 	rsbscs	r2, r3, sl, ror #26
  dc:	7500672d 	strvc	r6, [r0, #-1837]	; 0xfffff8d3
  e0:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
  e4:	2064656e 	rsbcs	r6, r4, lr, ror #10
  e8:	72616863 	rsbvc	r6, r1, #6488064	; 0x630000
  ec:	70706100 	rsbsvc	r6, r0, r0, lsl #2
  f0:	6d00632e 	stcvs	3, cr6, [r0, #-184]	; 0xffffff48
  f4:	006e6961 	rsbeq	r6, lr, r1, ror #18

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	5420554e 	strtpl	r5, [r0], #-1358	; 0xfffffab2
   c:	736c6f6f 	cmnvc	ip, #444	; 0x1bc
  10:	726f6620 	rsbvc	r6, pc, #32, 12	; 0x2000000
  14:	6d724120 	ldfvse	f4, [r2, #-128]!	; 0xffffff80
  18:	626d4520 	rsbvs	r4, sp, #32, 10	; 0x8000000
  1c:	65646465 	strbvs	r6, [r4, #-1125]!	; 0xfffffb9b
  20:	72502064 	subsvc	r2, r0, #100	; 0x64
  24:	7365636f 	cmnvc	r5, #-1140850687	; 0xbc000001
  28:	73726f73 	cmnvc	r2, #460	; 0x1cc
  2c:	322d3720 	eorcc	r3, sp, #32, 14	; 0x800000
  30:	2d373130 	ldfcss	f3, [r7, #-192]!	; 0xffffff40
  34:	6d2d3471 	cfstrsvs	mvf3, [sp, #-452]!	; 0xfffffe3c
  38:	726f6a61 	rsbvc	r6, pc, #397312	; 0x61000
  3c:	2e372029 	cdpcs	0, 3, cr2, cr7, cr9, {1}
  40:	20312e32 	eorscs	r2, r1, r2, lsr lr
  44:	37313032 			; <UNDEFINED> instruction: 0x37313032
  48:	34303930 	ldrtcc	r3, [r0], #-2352	; 0xfffff6d0
  4c:	65722820 	ldrbvs	r2, [r2, #-2080]!	; 0xfffff7e0
  50:	7361656c 	cmnvc	r1, #108, 10	; 0x1b000000
  54:	5b202965 	blpl	80a5f0 <main+0x80a5f0>
  58:	2f4d5241 	svccs	0x004d5241
  5c:	65626d65 	strbvs	r6, [r2, #-3429]!	; 0xfffff29b
  60:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  64:	622d372d 	eorvs	r3, sp, #11796480	; 0xb40000
  68:	636e6172 	cmnvs	lr, #-2147483620	; 0x8000001c
  6c:	65722068 	ldrbvs	r2, [r2, #-104]!	; 0xffffff98
  70:	69736976 	ldmdbvs	r3!, {r1, r2, r4, r5, r6, r8, fp, sp, lr}^
  74:	32206e6f 	eorcc	r6, r0, #1776	; 0x6f0
  78:	30323535 	eorscc	r3, r2, r5, lsr r5
  7c:	Address 0x0000007c is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	0000001c 	andeq	r0, r0, ip, lsl r0
  20:	8b080e42 	blhi	203930 <main+0x203930>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0xfffffdc7
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0xfffffef7
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.

