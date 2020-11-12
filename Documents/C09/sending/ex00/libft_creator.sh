# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 13:08:59 by jibanez-          #+#    #+#              #
#    Updated: 2020/11/12 13:09:41 by jibanez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -c -Wall -Wextra -Werror ft_putchar.c
gcc -c -Wall -Wextra -Werror ft_putstr.c
gcc -c -Wall -Wextra -Werror ft_strcmp.c
gcc -c -Wall -Wextra -Werror ft_strlen.c
gcc -c -Wall -Wextra -Werror ft_swap.c

ar rc libft.a t_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm -f *.o
ranlib libft.a