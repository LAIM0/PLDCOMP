.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$2, %eax
	movl 	%eax, -8(%rbp)
	movl 	$8, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
