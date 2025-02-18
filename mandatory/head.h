/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamiri <alamiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:07:07 by alamiri           #+#    #+#             */
/*   Updated: 2025/02/18 05:14:03 by alamiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;

}					t_stack;

typedef struct s_var
{
	t_stack			*head_stack_a;
	t_stack			*head_stack_b;
}					t_var;

void				add_front(t_stack **head, int value);
void				push_a_push_b(t_stack **new, t_stack **to, char flag);
void				ra_and_rb(t_stack **head, char flag);
void				rr_ra_rb_meme_temp(t_var *head);
void				rra_rrb(t_stack **head, char flag);
void				rrr_rra_rrb_meme_temp(t_var *head);

size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
long				ft_atoi(const char *nptr);

int					ft_trove(char const *str, char c);
void				ft_free(char **p);
char				**copieword(char **p, const char *s, char c);
char				**ft_split(char const *s, char c);
size_t				ft_strlenn(char **s);

char				*cont_chekk_pas_string(char *str, int *cheker, int i);
char				*chekk_pas_string(char *str);
char				*strjondata(int ac, char **av);
int					*conerty_data_integer(char *data, int *number);
int					chek_double(int *maxxx, int max_number);
int					sort_number(int *stok_maxxx, int size);
void				add_to_array(int max[], int max_number);
void				add_les_index(int max[], int max_number, t_var *var);
int					position(t_stack *temp, int value);
void				push_stack_algo(t_var *var, int range);
int					trouve_ground_number(t_stack *stack);
int					trouve_min_number(t_stack *stack);
void				pushyyy(t_var *var);
void				algo_troi_nombre(t_var *var);
void				contuni_algo_quatre_nombre(t_var *var, int min);
void				algo_quatre_nombre(t_var *var);
void				contuni_algo_cinquieme_nombre(t_var *var, int min);
void				algo_cinquieme_nombre(t_var *var);
void				free_list(t_stack *str);

void				add_to_stak(t_stack **head, int value);
void				affiche_list(t_stack *contor);
int					size_list(t_stack *heed);
void				swap(t_stack **heed, char flag);
void				ss(t_var *swapp);

int					find_index(t_stack *a, int x, int p);

void				implementation(t_var *var, int max_number, int *stok_maxxx,
						int i);
void				contuni_implementation(t_var *var);
void				contuni_conerty_data_integer(int number, int *maxxx,
						char **split, char *data);
#endif