# 42_Common_Core

*s1 = amor\0
*s2 = amore\0

n = 5
i = 0 - a = a
i = 1 - m = m
i = 2 - o = o
i = 3 - r = r
i = 4 - \0 - e (101)  i < 5 

The logical condition i(4) < n(5) is still valid and s1[4] is the null but since s2[4] is not null the while cicle goes on.

ft_strncmp("test\233", "test\0", 6)

Why does (unsigned char) matter?
The difference between char and unsigned char matters especially when dealing with characters above ASCII range (128–255).

In C:
char can be signed or unsigned, depending on your compiler/system.

signed char values go from -128 to 127

unsigned char values go from 0 to 255

So:

char c = '\200';             // Might store -128 (if char is signed)
unsigned char uc = '\200';   // Will store 128
😬 Problem without casting:
If you do:


return s1[i] - s2[i];  // with char being signed
Then '\200' - '\0' becomes:

-128 - 0 = -128
But if you cast:

return (unsigned char)s1[i] - (unsigned char)s2[i];
Then:


128 - 0 = 128
This is what the standard C strncmp does. It treats characters as unsigned bytes.

❓ Does (unsigned char) help you access '\0'?
No — that's not its role.

The null terminator is always '\0' → value 0

It’s accessible as-is and doesn’t need casting

The casting to (unsigned char) is only to avoid incorrect negative values when comparing characters ≥ 128.

✅ TL;DR
Concept	Meaning
'\200'	Octal literal for ASCII 128 (non-standard extended ASCII char)
Signed char	May interpret '\200' as -128 → wrong comparisons
unsigned char	Ensures '\200' is correctly read as 128
(unsigned char)	Prevents bugs in comparisons like s1[i] - s2[i] when chars > 127
Related to '\0'?	No — null char is 0 and doesn't need any casting


FUNCTIONS:
34 .c files starting with ft_ for the mandatory part and potentially 9 more for the bonus part.
34 + 9 = 43 functions total.
Mandatory Functions:

ft_isalpha ✅ (./ft_isalpha.c)
ft_isdigit ✅ (./ft_isdigit.c)
ft_isalnum ✅ (./ft_isalnum.c)
ft_isascii ✅ (./ft_isascii.c)
ft_isprint ✅ (./ft_isprint.c)
ft_strlen ✅ (./ft_strlen.c)
ft_memset ✅ (./ft_memset.c)
ft_bzero ✅ (./ft_bzero.c)
ft_memcpy ✅ (./ft_memcpy.c)
ft_memmove ✅ (./ft_memmove.c)
ft_strlcpy ✅ (./ft_strlcpy.c)
ft_strlcat ✅ (./ft_strlcat.c)
ft_toupper ✅ (./ft_toupper.c)
ft_tolower ✅ (./ft_tolower.c)
ft_strchr ✅ (./ft_strchr.c)
ft_strrchr ✅ (./ft_strrchr.c)
ft_strncmp ✅ (./ft_strncmp.c)
ft_memchr ✅ (./ft_memchr.c)
ft_memcmp ✅ (./ft_memcmp.c)
ft_strnstr ✅ (./ft_strnstr.c)
ft_atoi ✅ (./ft_atoi.c)
ft_calloc ✅ (./ft_calloc.c)
ft_strdup ✅ (./ft_strdup.c)
ft_substr ✅ (./ft_substr.c)
ft_strjoin ✅ (./ft_strjoin.c)
ft_strtrim ✅ (./ft_strtrim.c)
ft_split ✅ (./ft_split.c)
ft_itoa ✅ (./ft_itoa.c)
ft_strmapi ✅ (./ft_strmapi.c)
ft_striteri ✅ (./ft_striteri.c)
ft_putchar_fd ✅ (./ft_putchar_fd.c)
ft_putstr_fd ✅ (./ft_putstr_fd.c)
ft_putendl_fd ✅ (./ft_putendl_fd.c)
ft_putnbr_fd ✅ (./ft_putnbr_fd.c)
Bonus Functions:

ft_lstnew ✅ (./ft_lstnew_bonus.c)
ft_lstadd_front ✅ (./ft_lstadd_front_bonus.c)
ft_lstsize ✅ (./ft_lstsize_bonus.c)
ft_lstlast ✅ (./ft_lstlast_bonus.c)
ft_lstadd_back ✅ (./ft_lstadd_back_bonus.c)
ft_lstdelone ✅ (./ft_lstdelone_bonus.c)
ft_lstclear ✅ (./ft_lstclear_bonus.c)
ft_lstiter ✅ (./ft_lstiter_bonus.c)
ft_lstmap ✅ (./ft_lstmap_bonus.c)