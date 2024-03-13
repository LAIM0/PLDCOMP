.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$42, %eax
	movl 	%eax, -4(%rbp)
	movl 	$30, %eax
	movl 	%eax, -4(%rbp)
	popq	%rbp
	ret
