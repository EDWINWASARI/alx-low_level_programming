#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_elf_header - Display information from the ELF header.
 * @header: A pointer to the ELF header.
 */
void display_elf_header(Elf64_Ehdr *header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class: %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data: %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little-endian" :
		"2's complement, big-endian");
printf("  Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI: %d\n", header->e_ident[EI_OSABI]);
printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type: %s\n", header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" : "UNKNOWN");
printf("  Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - Entry point for the ELF header program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, or 98 on error.
 *
 * Description: This program displays information
 * from the ELF header of an ELF file.
 * If the file is not an ELF file or an error occurs,
 * it exits with status code 98.
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr header;
int fd;
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error");
return (98);
}
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
perror("Error");
close(fd);
return (98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (98);
}
display_elf_header(&header);
close(fd);
return (0);
}
