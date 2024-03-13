.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$42, %eax
	movl 	%eax, -0(%rbp)
	popq	%rbp
	ret
