#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void display_error(const char *message)
{
	perror(message);
	_exit(1);
}

void display_elf_elf_header(const char *filename)
{

	int fd;
	Elf64_Ehdr elf_header;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("failed to open the file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		display_error("failed to read ther Elf header");
	}
	/*Display  the required information*/
	printf("Magic: %02x %02x %02x %02x\n",
			(unsigned int)elf_header.e_ident[EI_MAG0], (unsigned int)elf_header.e_ident[EI_MAG1],
			(unsigned int)elf_header.e_ident[EI_MAG2],
			(unsigned int)elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n ", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);

	close(fd);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("usage: elf_header elf_filename");
	}
	display_elf_elf_header(argv[1]);
	return (0);
}
