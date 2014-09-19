/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghochart <ghochart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 16:17:39 by ghochart          #+#    #+#             */
/*   Updated: 2014/09/17 16:18:00 by ghochart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_sudoku_functions.h"

int main(int argc, char **argv)
{
	if (argc == 10 && check_erreurs(argv) == 1)
		solve_sudoku(argv);
	else
		write(1, "Erreur\n", 7);
	return (0);
}
