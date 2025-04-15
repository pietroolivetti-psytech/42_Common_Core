# 📘 Libft Guide

## 📑 Index

- [ft_strlen](#ft_strlen)
- [ft_strncmp](#ft_strncmp)
- [ft_strlcpy](#ft_strlcpy)
- [ft_strlcat](#ft_strlcat)
- [ft_memset](#ft_memset)
- [ft_memcpy](#ft_memcpy)
- [ft_memmove](#ft_memmove)
- [ft_strchr](#ft_strchr)
- [ft_strrchr](#ft_strrchr)
- [ft_memcmp](#ft_memcmp)
- [ft_memchr](#ft_memchr)
- [ft_strdup](#ft_strdup)
- [ft_atoi](#ft_atoi)
- [ft_isalpha](#ft_isalpha)
- [ft_isdigit](#ft_isdigit)
- [ft_isalnum](#ft_isalnum)
- [ft_isascii](#ft_isascii)
- [ft_isprint](#ft_isprint)
- [ft_toupper](#ft_toupper)
- [ft_tolower](#ft_tolower)
- [ft_calloc](#ft_calloc)
- [ft_strnstr](#ft_strnstr)

---

## ft_strlen

``` c
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i = 0;

	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
```

### 📌 Description
Returns the number of characters in the string `s`, excluding the null terminator.

### 📥 Parameters
- `s`: Pointer to the string.

### 📤 Return Value
- Length of the string (`size_t`).

### ⚠️ Edge Cases
- Empty string (`""`) → should return 0  
- Very long strings

### 🔍 Code Explanation
Iterate through each character in the string until you hit `'\0'`. Count how many iterations it takes.


## ft_strlcat
## ft_strlcpy 

### 📌 Description

#### Oficial Description
     The strlcpy() and strlcat() functions copy and concatenate strings respectively.  They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3).  Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result(as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size. Also note that strlcpy() and strlcat() only operate on true “C” strings. This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.


### 📥 Parameters
- `s`: Pointer to the string.

### 📤 Return Value
     The strlcpy() and strlcat() functions return the total length of the string they tried
     to create.  For strlcpy() that means the length of src.  For strlcat() that means the
     initial length of dst plus the length of src.  While this may seem somewhat confusing,
     it was done to make truncation detection simple.

     Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not happen (as it means that either size is incorrect or that dst is not a proper “C” string).  The check exists to prevent potential security problems in incorrect code.


### ⚠️ Edge Cases
- Empty string (`""`) → should return 0  
- Very long strings

### 🔍 Code Explanation
Iterate through each character in the string until you hit `'\0'`. Count how many iterations it takes.

FALTA
ft_bzero
ft_memcpy
ft_memmove
ft_strchr
ft_strrchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi