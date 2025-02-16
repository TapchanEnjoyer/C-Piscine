/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprikhod <dprikhod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:53:34 by niel              #+#    #+#             */
/*   Updated: 2025/02/16 22:32:22 by dprikhod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_H
# define FT_FT_H

# define SIZE 5
# define SQSIZE 20

int	is_valid(int sudoku[SIZE][SIZE], int row, int col, int num);
int	check_visible_line(int line[SIZE], int input);
int	check_visible_line_rev(int line[SIZE], int input);
int	check_filled_line(
		int sudoku[SIZE][SIZE], int row, int col, int input[SQSIZE]);

#endif
