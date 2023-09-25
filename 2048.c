#include <stdio.h>

void print_grid(int grid[]) {
	//this function is called to print the grid the game is played on in its current state
	printf(" ------------------------\n|                        |\n|    %i    %i    %i    %i    |\n|                        |\n|    %i    %i    %i    %i    |\n|                        |\n|    %i    %i    %i    %i    |\n|                        |\n|    %i    %i    %i    %i    |\n|                        |\n ------------------------", grid[0], grid[1], grid[2], grid[3], grid[4], grid[5], grid[6], grid[7], grid[8], grid[9], grid[10], grid[11], grid[12], grid[13], grid[14], grid[15]); 
}



int main() {
	//this program allows a user to user to play the game 2048 by displaying 
	//a 4 x 4 grid of numbers and receiving keyboard inputs to control the game
	
	//test call
	int nums[16];
	print_grid(nums);

	return 0;
}


