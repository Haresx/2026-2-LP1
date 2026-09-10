	.file	"temperatura.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"=== CONVERSOR DE TEMPERATURAS ==="
.LC1:
	.string	"C - Celsius a Fahrenheit"
.LC2:
	.string	"F - Fahrenheit a Celsius"
.LC3:
	.string	"Seleccione una opci\303\263n: "
.LC4:
	.string	" %c"
	.align 8
.LC5:
	.string	"Ingrese temperatura en Celsius: "
.LC6:
	.string	"%f"
.LC10:
	.string	"%.2f\302\260C = %.2f\302\260F\n"
	.align 8
.LC11:
	.string	"Ingrese temperatura en Fahrenheit: "
.LC12:
	.string	"%.2f\302\260F = %.2f\302\260C\n"
.LC13:
	.string	"Opci\303\263n inv\303\241lida"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-17(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$102, %eax
	je	.L2
	cmpl	$102, %eax
	jg	.L3
	cmpl	$99, %eax
	je	.L4
	cmpl	$99, %eax
	jg	.L3
	cmpl	$67, %eax
	je	.L4
	cmpl	$70, %eax
	je	.L2
	jmp	.L3
.L4:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-16(%rbp), %xmm1
	movss	.LC7(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC8(%rip), %xmm2
	movaps	%xmm0, %xmm1
	divss	%xmm2, %xmm1
	movss	.LC9(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	movss	-12(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movss	-16(%rbp), %xmm1
	pxor	%xmm3, %xmm3
	cvtss2sd	%xmm1, %xmm3
	movq	%xmm3, %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	movl	$2, %eax
	call	printf@PLT
	jmp	.L5
.L2:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-12(%rbp), %xmm0
	movss	.LC9(%rip), %xmm2
	movaps	%xmm0, %xmm1
	subss	%xmm2, %xmm1
	movss	.LC8(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC7(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -16(%rbp)
	movss	-16(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movss	-12(%rbp), %xmm1
	pxor	%xmm4, %xmm4
	cvtss2sd	%xmm1, %xmm4
	movq	%xmm4, %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	movl	$2, %eax
	call	printf@PLT
	jmp	.L5
.L3:
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
.L5:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC7:
	.long	1091567616
	.align 4
.LC8:
	.long	1084227584
	.align 4
.LC9:
	.long	1107296256
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0"
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
