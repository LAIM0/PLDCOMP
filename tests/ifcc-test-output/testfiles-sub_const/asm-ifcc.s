.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$3, %eax
	movl 	%eax, -8(%rbp)
	movl 	$2, %eax
	movl 	-8(%rbp), %edx
	subl 	%eax, %edx
	movl 	%edx, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
