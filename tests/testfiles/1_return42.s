   .section   __TEXT,__text,regular,pure_instructions
   .build_version macos, 14, 0  sdk_version 14, 2
   .globl   _main
   .p2align   2
_main: 
   .cfi_startproc
   sub  sp, sp, #16
   .cfi_def_cfa_offset 16
   str wzr, [sp, #12]
	mov w0, #21
   add  sp, sp, #16
   ret
   .cfi_endproc
   .subsections_via_symbols
