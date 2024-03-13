.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	-0(%rbp), %eax
	popq	%rbp
	ret
