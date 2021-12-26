/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quiz.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 11:00:47 by yoelhaim          #+#    #+#             */
/*   Updated: 2021/12/26 16:32:59 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
	int res = 0;
	char quizat1[10][1000]= {"ina 3am  tft7at lmdrasa 1337 ??", "ina chhar kan awal pool?","achkaydir lk la ghachiti ? [1] chaed [2] cheat", "chh7al kin mn project f pool ?", "ila ghachiti ktsma validite ? [1] yes [2] no", "achno smit dahbi ? [1] youness [2] yassine [3] youssef"};
	for(int i = 0; i< 6; i++)
	{
		int qs;
		printf(ANSI_COLOR_RESET"%s \n"ANSI_COLOR_RESET, quizat1[i]);

		scanf("%d", &qs);
		if(qs  == 2018 && i == 0)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else if(qs  == 9 && i == 1)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else if(qs  == 2 && i == 2)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else if(qs  == 19 && i == 3)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else if(qs  == 2 && i == 4)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else if(qs  == 3 && i == 5)
		{
			printf(ANSI_COLOR_GREEN " >>>>>>>>>> m3alaaaam 3andak 3 no9at ✅ <<<<<<<<<<<<\n"ANSI_COLOR_GREEN );
			res+= 3;

		}
		else
		{
			printf("\033[0;31m>>>>>>>>>❌sir f7aaalk ljawab khatiiiii2  no9at lirb7tiii hiya ❌ \033[0;31m%d <<<<<<", res);

			break;
		}

		if(i == 5)
		{
		printf(ANSI_COLOR_GREEN"\n****************************CONGRAT ************\n"ANSI_COLOR_GREEN);
		printf(ANSI_COLOR_GREEN"***********  ✅ NATIJA DYALK  : %d   ************"ANSI_COLOR_GREEN, res);
		printf(ANSI_COLOR_GREEN"\n**********************************************"ANSI_COLOR_GREEN);
		}
	//	printf ("%d", qs);
		printf("\n");

	}

}

