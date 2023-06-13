#include "main.h"
#include "elf.h"

void p_osabi_more(Elf64_Ehdr h);

/**
 * p_magic - the function prints the ELF magic numbers
 * @h: ELF header struct
 * Return: void
 */
void p_magic(Elf64_Ehdr h)
{
	int counter;

	printf("  Magic:   ");
	for (counter = 0; counter < EI_NIDENT; counter++)
		printf("%2.2x%s", h.e_ident[counter],
			(counter == EI_NIDENT - 1) ? "\n" : " ");
}

/**
 * p_class - the function prints the ELF CLASS
 * @h: ELF header struct
 * Return: void
 */
void p_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * p_data - the function that prints the ELF DATA
 * @h: ELF header struct
 * Return: void
 */
void p_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * p_version - the function prints the ELF VERSION
 * @h: ELF header struct
 * Return: void
 */
void p_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d",
			h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
	}
	printf("\n");
}

/**
 * p_osabi - the function prints the ELF OSABI
 * @h: ELF header struct
 * Return: void
 */
void p_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			p_osabi_more(h);
			break;
	}
	printf("\n");
}

/**
 * p_osabi_more - the function that prints ELF OSABI MORE
 * @h: ELF header struct
 * Return: void
 */
void p_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * p_abiversion -the function prints ELF ABI VERSION
 * @h: ELF header struct
 * Return: void
 */
void p_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);
}

/**
 * p_type - the function prints the ELF TYPE
 * @h: ELF header struct
 * Return: void
 */
void p_type(Elf64_Ehdr h)
{
	char *b = (char *)&h.e_type;
	int idx;

	printf("  Type:                              ");
	idx = 0;
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		idx = 1;
	switch (b[idx])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", b[idx]);
			break;
	}
	printf("\n");
}

/**
 * p_entry - the function that prints the ELF ENTRY POINT ADDRESS
 * @h: ELF header struct
 * Return: void
 */
void p_entry(Elf64_Ehdr h)
{
	int x, l = 0;
	unsigned char *b = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		x = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!b[x])
			x--;
		printf("%x", b[x--]);
		for (; x >= 0; x--)
			printf("%02x", b[x]);
		printf("\n");
	}
	else
	{
		x = 0;
		l = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!b[x])
			x++;
		printf("%x", b[x++]);
		for (; x <= l; x++)
			printf("%02x", b[x]);
		printf("\n");
	}
}
/**
 * main - the main program for elf header file
 * @argc: the arguments counter
 * @argv: the arguments vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int o_var;
	Elf64_Ehdr h;
	ssize_t r_var;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"),
			exit(98);
	o_var = open(argv[1], O_RDONLY);
	if (o_var == -1)
		dprintf(STDERR_FILENO, "Can't open the file: %s\n", argv[1]),
			exit(98);
	r_var = read(o_var, &h, sizeof(h));
	if (r_var < 1 || r_var != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]),
			exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E'
			&& h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "NOT AN ELF FILE: %s\n", argv[1]), exit(98);
	p_magic(h);
	p_class(h);
	p_data(h);
	p_version(h);
	p_osabi(h);
	p_abiversion(h);
	p_type(h);
	p_entry(h);
	if (close(o_var))
		dprintf(STDERR_FILENO, "Error: Can't close the file %d\n",
				o_var), exit(98);
	return (0);
}
