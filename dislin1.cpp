#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdlib.h>

/* ------------------------------------------------------------------------- *
Name: strtrim
Parameters:
 src  - Source string
 dst  - Destination string
 Returns:
 Pointer to destination string (if successful) or NULL (if failed)
Description:
 This routine trims leading and trailing whitespace from the source string
 and copies the trimeed version to the destination string.
Written by:
 Phillip Wong
 ECE 103 Instructor, Spring 2017
Requirements:
 Include these header files: <string.h> and <ctype.h>
* ------------------------------------------------------------------------- */
char * strtrim (char *dst, const char *src)
{
    if (src == NULL || dst == NULL)
        return NULL;

    // *** Stage 1: Detect left index of the core string in src
    int NUL_idx = strlen(src); //Determine NUL terminator's index in src string

    int k = 0; // Index starts at left-most position of src string
    while (isspace(src[k]) && src[k] != NULL) // Scan right to find first non-whitespace
        k++;
    if (k == NUL_idx)
    {
        // src string contains only whitespace or is empty
        dst[0] = NULL;
    }
    else
    {
        // At least one non-whitespace character exists
        int left_idx = k;

        // *** Stage 2: Detect right index of the core string in src
        k = NUL_idx - 1;  // Index starts at NUL position of src
        while (isspace(src[k]))
            k--;
        int right_idx = k;

        // *** Stage 3: Copy core string from src to dst
        int n = 0; // dst index
        for (k = left_idx; k <= right_idx; k++)
            dst[n++] = src[k];
        dst[n] = NULL; // Add NUL terminator to dst string
    }

    return dst;
}

int main()
{	
	char title[80], date[40], xlabel[80], ylabel[80],clabel[30], xunit[20], yunit[20], cunit[20];	//variables to store first 8 lines of data
	int n_curves;		//variable to stored 9th line number of curves data
	int i,j;	//variables used to loop through data lines 
	
	double curve_values[20];	//to store curve values
	double x[1024];		//to store x values
	double y[20][1024];		//to store y values 2d array
	
	char filename[160];	//filename to be saved to 
	printf("Enter name of the data file to plot: ");
	scanf("%s", filename);	//read filename from user
	FILE* f=  fopen(filename,"r");	//open the file
	if(f == NULL)		//if the file could not be opened
	{
		printf("ERROR: Cannot open file \"%s\".\n", filename);	//print error message and exit
		return -1;
	}
	char line[256];
	char *text;
	char trimmedline[256];
	size_t bufsize ;
	int line_num = 1;		//line number as we  read each line
	while(fgets(line, sizeof(line), f))
	{
		i=0;
		text = strchr(line, ':');		//get string after : including :
		if(text)			//if colon present, then trim it after colon
			strtrim(trimmedline, &text[1]);		
		else
			strtrim(trimmedline, line);	//else trim the line
		
		printf("%s\n", trimmedline);		//print the line read
		//save line data in respective variables and arrays
		if(line_num == 1)			//from line1
			strcpy(title, trimmedline);	//save the data in title
		else if(line_num == 2)		//from line2
			strcpy(date, trimmedline);//save the data in date string
		else if(line_num == 3)		//from line3
			strcpy(xlabel, trimmedline);//save the data in xlabel string
		else if(line_num == 4)		//from line 4
			strcpy(ylabel, trimmedline);	//save the data in ylabel string
		else if(line_num == 5)		//from line 5
			strcpy(clabel, trimmedline);	//save the data in clabel string
		else if(line_num == 6)		//from line 6
			strcpy(xunit, trimmedline);	//save the data in xunit string
		else if(line_num == 7)		//from line 7
			strcpy(yunit, trimmedline);	//save the data in yunit string
		else if(line_num == 8)		//from line 8
			strcpy(cunit, trimmedline);		//save the data in cunit string
		else if(line_num == 9)		// from line 9
		{
			n_curves = atoi(trimmedline);		//convert the trimmedline to integer for n_curves
		    for(i=0; i<n_curves; i++)		//for next n_curves lines
		    {
			    fgets(line, sizeof(line), f);	//read line
				curve_values[i] =atof(line);			//convert line to float value and save in x data array
		    }
			
		}
		else	//for lines after reading x data value
		{
			char *token = strtok(line, ",");		//break the line into tokens by comma
			x[i] = atof(token);	// 1st token value is x value, so we save in x array
			token = strtok(NULL, ",");			//next tokens are for y 2d array, corresponding to ith line
			while(token != NULL)
			{		
				y[i][j] = atof(token);		//convert the string to double type value and save in y[i][j]
				token = strtok(NULL, ",");	//get next token
			}
			i++;	//increase i
		}
		line_num++;//increase line number
		
	}
	/*TODO use DISLIN library to print out the curves using data saved in above variables*/
	
}
