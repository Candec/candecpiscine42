/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:34:08 by jibanez-          #+#    #+#             */
/*   Updated: 2020/11/04 14:34:11 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* C/C++ program to solve N Queen Problem using 
backtracking */
#define N 4 
#include <stdio.h> 

/* A utility function to print solution */
void printSolution(int board[10]) 
{ 
	for (int i = 0; i < 10; i++) { 
		for (int j = 0; j < 10; j++) 
			printf(" %d ", board[i]); 
		printf("\n"); 
	} 
} 

/* A utility function to check if a queen can 
be placed on board[row][col]. Note that this 
function is called when "col" queens are 
already placed in columns from 0 to col -1. 
So we need to check only left side for 
attacking queens */
int isSafe(int board[10], int row, int col) 
{ 
	int i;
	int j; 

	i = 0;
	/* Check this row on left side */
	while (i++ < col) 
		if (board[row][i]) 
			return 0; 

	/* Check upper diagonal on left side */
	for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
		if (board[i][j]) 
			return 0; 

	/* Check lower diagonal on left side */
	for (i = row, j = col; j >= 0 && i < 10; i++, j--) 
		if (board[i][j]) 
			return 0; 

	return 1; 
} 

/* A recursive utility function to solve N 
Queen problem */
int solveNQUtil(int board[10], int col) 
{ 
	/* base case: If all queens are placed 
	then return true */
	if (col >= 10) 
		return 1; 

	/* Consider this column and try placing 
	this queen in all rows one by one */
	for (int i = 0; i < 10; i++) { 
		/* Check if the queen can be placed on 
		board[i][col] */
		if (isSafe(board, i, col)) { 
			/* Place this queen in board[i][col] */
			board[i][col] = 1; 

			/* recur to place rest of the queens */
			if (solveNQUtil(board, col + 1)) 
				return 1; 

			/* If placing queen in board[i][col] 
			doesn't lead to a solution, then 
			remove queen from board[i][col] */
			board[i][col] = 0; // BACKTRACK 
		} 
	} 

	/* If the queen cannot be placed in any row in 
		this colum col then return false */
	return 0; 
} 

/* This function solves the N Queen problem using 
Backtracking. It mainly uses solveNQUtil() to 
solve the problem. It returns false if queens 
cannot be placed, otherwise, return true and 
prints placement of queens in the form of 1s. 
Please note that there may be more than one 
solutions, this function prints one of the 
feasible solutions.*/
int solveNQ() 
{ 
	int board[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	if (solveNQUtil(board, 0) == 0)
	{ 
		printf("Solution does not exist"); 
		return 0; 
	} 

	printSolution(board); 
	return 1; 
} 

// driver program to test above function 
int main() 
{ 
	solveNQ(); 
	return 0; 
} 
