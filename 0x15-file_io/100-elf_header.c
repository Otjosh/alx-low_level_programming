#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void c(unsigned char *e);
void p(unsigned char *e);
void p_c(unsigned char *e);
void p_d(unsigned char *e);
void p_v(unsigned char *e);
void p_a(unsigned char *e);
void p_o(unsigned char *e);
void p_os(unsigned char *e);
void p_t(unsigned int t, unsigned char *e);
void p_e(unsigned long int e, unsigned char *i);
void c_e(int e);

void c(unsigned char *e) { int i; for (i = 0; i < 4; i++) { if (e[i] != 127 && e[i] != 'E' && e[i] != 'L' && e[i] != 'F') { dprintf(STDERR_FILENO, "Error: Not an ELF file\n"); exit(98); } } }

void p(unsigned char *e) { int i; printf(" Magic: "); for (i = 0; i < EI_NIDENT; i++) { printf("%02x", e[i]); if (i == EI_NIDENT - 1) printf("\n"); else printf(" "); } }

void p_c(unsigned char *e) { printf(" Class: "); switch (e[EI_CLASS]) { case ELFCLASSNONE: printf("none\n"); break; case ELFCLASS32: printf("ELF32\n"); break; case ELFCLASS64: printf("ELF64\n"); break; default: printf("<unknown: %x>\n", e[EI_CLASS]); } }

void p_d(unsigned char *e) { printf(" Data: "); switch (e[EI_DATA]) { case ELFDATANONE: printf("none\n"); break; case ELFDATA2LSB: printf("2's complement, little endian\n"); break; case ELFDATA2MSB: printf("2's complement, big endian\n"); break; default: printf("<unknown: %x>\n", e[EI_CLASS]); } }

void p_v(unsigned char *e) { printf(" Version: %d", e[EI_VERSION]); switch (e[EI_VERSION]) { case EV_CURRENT: printf(" (current)\n"); break; default: printf("\n"); break; } }

void p_a(unsigned char *e) { printf(" ABI Version: %d\n", e[EI_ABIVERSION]); }

void p_o(unsigned char *e) { printf(" OS/ABI: "); switch (e[EI_OSABI]) { case ELFOSABI_NONE: printf("UNIX - System V\n"); break; case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break; case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break; case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break; case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break; case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break; case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break; case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break; case ELFOSABI_ARM: printf("ARM\n"); break; case ELFOSABI_STANDALONE: printf("Standalone App\n"); break; default: printf("<unknown: %x>\n", e[EI_OSABI]); } }

void p_os(unsigned char *e) { p_c(e); p_d(e); p_v(e); p_o(e); p_a(e); }

void p_t(unsigned int t, unsigned char *e) { if (e[EI_DATA] == ELFDATA2MSB) t >>= 8; printf(" Type: "); switch (t) { case ET_NONE: printf("NONE (None)\n"); break; case ET_REL: printf("REL (Relocatable file)\n"); break; case ET_EXEC: printf("EXEC (Executable file)\n"); break; case ET_DYN: printf("DYN (Shared object file)\n"); break; case ET_CORE: printf("CORE (Core file)\n"); break; default: printf("<unknown: %x>\n", t); } }

void p_e(unsigned long int e, unsigned char *i) { printf(" Entry point address: "); if (i[EI_DATA] == ELFDATA2MSB) { e = ((e << 8) & 0xFF00FF00) | ((e >> 8) & 0xFF00FF); e = (e << 16) | (e >> 16); } if (i[EI_CLASS] == ELFCLASS32) printf("%#x\n", (unsigned int)e); else printf("%#lx\n", e); }

void c_e(int e) { if (close(e) == -1) { dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", e); exit(98); } }

int main(int __attribute__((__unused__)) a, char *v[]) { Elf64_Ehdr *h; int o, r; o = open(v[1], O_RDONLY); if (o == -1) { dprintf(STDERR_FILENO, "Error: Can't read file %s\n", v[1]); exit(98); } h = malloc(sizeof(Elf64_Ehdr)); if (h == NULL) { c_e(o); dprintf(STDERR_FILENO, "Error: Can't read file %s\n", v[1]); exit(98); } r = read(o, h, sizeof(Elf64_Ehdr)); if (r == -1) { free(h); c_e(o); dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", v[1]); exit(98); } c(h); printf("ELF Header:\n"); p(h); p_os(h); p_t(h->e_type, h->e_ident); p_e(h->e_entry, h->e_ident); free(h); c_e(o); return (0); }
