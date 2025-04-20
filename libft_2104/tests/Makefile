# libft/ltests/Makefile

CC = cc
CFLAGS = -Wall -Wextra -Werror

TEST_NAMES = ft_isalpha ft_isdigit ft_isalnum ft_isprint ft_isascii ft_toupper ft_tolower \
ft_memchr ft_bzero ft_memset ft_strlen ft_strlcpy ft_calloc ft_strtrim ft_split ft_substr 

# Correctly expand to full paths
TESTS = $(foreach name,$(TEST_NAMES),$(name)/test_$(name).c)
EXECS = $(TESTS:.c=)


all: $(EXECS)

# Generic rule to compile a test file
%/test_%: %/test_%.c
	$(CC) $(CFLAGS) $< -o $@

# Run all tests
run: all
	@for test in $(EXECS); do \
		echo "***************************************************************************** \n\
*			🔍 Running $$test...              * \n\
*****************************************************************************\n";\
		./$$test; \
		echo ""; \
	done

# Rule to build and run a specific test like: make ft_memchr
$(TEST_NAMES):
	@echo "🔨 Compiling $@/test_$@.c"
	@$(MAKE) $@/test_$@
	@echo "🚀 Running $@/test_$@"
	@./$@/test_$@

clean:
	rm -f $(EXECS)

fclean: clean

re: fclean all

.PHONY: all run clean fclean re $(TEST_NAMES)
