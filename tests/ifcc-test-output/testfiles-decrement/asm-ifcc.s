.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$0, %eax
	movl 	%eax, -8(%rbp)
	movl 	-8(%rbp), %eax
	movl 	$1, -12(%rbp)
	subl 	-12(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
