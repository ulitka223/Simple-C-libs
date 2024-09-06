FILES = $(wildcard ft_*.c)
OBJS = $(FILES:.c=.o)
NAME = libft.a
LIBC = ar rc
LIBR = ranlib
CC = gcc
RM = rm -f

# Rule to compile .c files to .o files
.c.o:
	$(CC) -c $< -o $@

# Rule to create the library
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

# Default rule to build the library
all: $(NAME)

# Rule to clean object files
clean:
	$(RM) $(OBJS)

# Rule to clean object files and the library
fclean: clean
	$(RM) $(NAME)

# Rule to rebuild everything
re: fclean all
