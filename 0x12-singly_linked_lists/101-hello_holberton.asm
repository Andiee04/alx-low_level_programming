section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    ; Push format string argument
    mov rdi, format
    xor rax, rax   ; Clear RAX register
    call printf

    ; Push new line string argument
    mov rdi, newline
    xor rax, rax
    call printf

    ; Exit program
    mov eax, 0x60
    xor edi, edi
    syscall

