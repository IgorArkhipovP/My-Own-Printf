/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarkhipo <iarkhipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:59:55 by iarkhipo          #+#    #+#             */
/*   Updated: 2022/11/01 09:32:38 by iarkhipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(char const *str);

void	*ft_memset(void *s, int c, size_t n);
//The memset() function copies c (converted to an unsigned char) 
//into each of the first n bytes of the object pointed to by s.

void	ft_bzero(void *s, size_t n);
//the bzero() function writes n zeroed bytes to the string s.

void	*ft_memcpy(void *dst, const void *src, size_t n);
/*
The memcpy() function copies n bytes from memory area src to memory area dst.  
If dst and src overlap, behavior is undefined. 
Applications in which dst and src might overlap should use memmove(3) instead.
*/

void	*ft_memmove(void *dst, const void *src, size_t len);

char	*ft_strncat(char *dest, const char *src, size_t nb);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
/*
The strchr() function locates the first occurrence of c 
(converted to a char) in the string pointed to by s. 
The terminating null character is
considered to be part of the string; therefore if c is `\0', 
the functions locate the terminating `\0'.
*/

char	*ft_strrchr(const char *s, int c);
/*
The strchr() function locates the first occurrence of c (converted to a char) 
in the string pointed to by s.  
The terminating null character is
considered to be part of the string; therefore if c is `\0', 
the functions locate the terminating `\0'.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n);
// The strncmp() function compares not more than n characters.  
//Because strncmp() is designed for comparing strings rather than binary data,
// characters that appear after a `\0' character are not compared.

void	*ft_memchr(const void *s, int c, size_t n);
//The memchr() function locates the first occurrence of c 
//(converted to an unsigned char) in string s.

int		ft_memcmp(const void *s1, const void *s2, size_t n);
//The memcmp() function compares byte string s1 against byte string s2. 
//Both strings are assumed to be n bytes long.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*
The strnstr() function locates the first occurrence of 
the null-terminated string needle in the string haystack,
where not more than len characters are searched.  Characters 
that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, 
it should only be used when portability is not a concern.
*/

int		ft_atoi(const char *str);
//The atoi() function converts the initial portion of 
//the string pointed to by str to int representation.

void	*ft_calloc(size_t count, size_t size);
/*
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value
zero.
*/

char	*ft_strdup(char const *s1);
/*
The strdup() function allocates sufficient memory for a copy of the
string s1, does the copy, and returns a pointer to it.  The pointer may
subsequently be used as an argument to the function free(3).
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

char	*ft_substr(const char *s, unsigned int start, size_t len);
/*
s: The string from which to create the substring. start: 
The start index of the substring in the string ’s’.
len: The maximum length of the substring.
*/

char	*ft_strjoin(char const *s1, char const *s2);
/*
Allocates (with malloc(3)) and returns a new string, 
which is the result of the concatenation of ’s1’ and ’s2’.
*/

char	*ft_itoa(int n);
/*
Allocates (with malloc(3)) and 
returns a string representing the integer received as an argument. 
Negative numbers must be handled.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/*
Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument.
Each character is passed by address to ’f’ to be modified if necessary.
*/

void	ft_putchar_fd(char c, int fd);
/*
Outputs the character ’c’ to the given file descriptor.
*/

void	ft_putstr_fd(char *s, int fd);
/*
Outputs the string ’s’ to the given file descriptor.
*/

void	ft_putendl_fd(char *s, int fd);
/*
Outputs the string ’s’ to the given file descriptor followed by a newline.
*/

char	**ft_split(char const *s, char c);
/*
Allocates (with malloc(3)) and returns an array of 
strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter. 
The array must end with a NULL pointer.
*/

char	*ft_strtrim(char const *s1, char const *set);
/*
Allocates (with malloc(3)) and returns 
a copy of ’s1’ with the characters specified in ’set’ 
removed from the beginning and the end of the string.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*
Applies the function ’f’ to each character of the string ’s’, 
and passing its index as first argument to create a new string (with malloc(3))
 resulting from successive applications of ’f’.
*/

void	ft_putnbr_fd(int n, int fd);
/*
Outputs the integer ’n’ to the given file descriptor.
*/

t_list	*ft_lstnew(void *content);
/*
Allocates (with malloc(3)) and returns 
a new node. 
The member variable ’content’ 
is initialized with the value of the parameter ’content’.
The variable ’next’ is initialized to NULL.
*/

void	ft_lstadd_front(t_list **lst, t_list *new);
/*
lst: The address of a pointer to the 
first link of a list.
new: The address of a pointer to the 
node to be added to the list.
*/

int		ft_lstsize(t_list *lst);
/*
Counts the number of nodes in a list.
*/

t_list	*ft_lstlast(t_list *lst);
/*
Returns the last node of the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new);
/*
Adds the node ’new’ at the end of the list.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *));
/*
Takes as a parameter a node and frees the memory of the node’s content using 
the function ’del’ given as a parameter and free the node. 
The memory of ’next’ must not be freed.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *));
/*
Deletes and frees the given node and every successor 
of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *));
/*
Iterates the list ’lst’ and 
applies the function ’f’ on the content of each node.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/*
Iterates the list ’lst’ and applies the function ’f’ on 
the content of each node. 
Creates a new list resulting of the successive applications of the function ’f’.
 The ’del’ function is used to delete the content of a node if needed.

*/

#endif
