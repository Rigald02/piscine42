/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-bels <hde-bels@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:06:50 by hde-bels          #+#    #+#             */
/*   Updated: 2021/02/17 10:21:28 by hde-bels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef TESTS
# define TESTS
# define TEST01 strncmp(NULL, NULL, 0)
# define TEST02 strncmp(NULL, NULL, 1)
# define TEST03 strncmp("", NULL, 0)
# define TEST04 strncmp(NULL, "", 0)
# define TEST05 strncmp("", NULL, 1)
# define TEST06 strncmp(NULL, "", 1)
# define TEST07 strncmp("", "", 0)
# define TEST08 strncmp("", "", 1)

# define TEST09 strncmp("abcdefghi", "abc", 0)
# define TEST10 strncmp("abcdefghi", "abc", 2)
# define TEST11 strncmp("abcdefghi", "abc", 5)
# define TEST12 strncmp("abcdefghi", "abc", 12)
# define TEST13 strncmp("abc", "abcdefghi", 0)
# define TEST14 strncmp("abc", "abcdefghi", 2)
# define TEST15 strncmp("abc", "abcdefghi", 5)
# define TEST16 strncmp("abc", "abcdefghi", 12)

# define TEST17 strncmp("abcdefghi", "abc@", 0)
# define TEST18 strncmp("abcdefghi", "abc@", 3)
# define TEST19 strncmp("abcdefghi", "abc@", 4)
# define TEST20 strncmp("abcdefghi", "abc@", 12)
# define TEST21 strncmp("abc@", "abcdefghi", 0)
# define TEST22 strncmp("abc@", "abcdefghi", 3)
# define TEST23 strncmp("abc@", "abcdefghi", 4)
# define TEST24 strncmp("abc@", "abcdefghi", 12)



# define FTEST01 ft_strncmp(NULL, NULL, 0)
# define FTEST02 ft_strncmp(NULL, NULL, 1)
# define FTEST03 ft_strncmp("", NULL, 0)
# define FTEST04 ft_strncmp(NULL, "", 0)
# define FTEST05 ft_strncmp("", NULL, 1)
# define FTEST06 ft_strncmp(NULL, "", 1)
# define FTEST07 ft_strncmp("", "", 0)
# define FTEST08 ft_strncmp("", "", 1)

# define FTEST09 ft_strncmp("abcdefghi", "abc", 0)
# define FTEST10 ft_strncmp("abcdefghi", "abc", 2)
# define FTEST11 ft_strncmp("abcdefghi", "abc", 5)
# define FTEST12 ft_strncmp("abcdefghi", "abc", 12)
# define FTEST13 ft_strncmp("abc", "abcdefghi", 0)
# define FTEST14 ft_strncmp("abc", "abcdefghi", 2)
# define FTEST15 ft_strncmp("abc", "abcdefghi", 5)
# define FTEST16 ft_strncmp("abc", "abcdefghi", 12)

# define FTEST17 ft_strncmp("abcdefghi", "abc@", 0)
# define FTEST18 ft_strncmp("abcdefghi", "abc@", 3)
# define FTEST19 ft_strncmp("abcdefghi", "abc@", 4)
# define FTEST20 ft_strncmp("abcdefghi", "abc@", 12)
# define FTEST21 ft_strncmp("abc@", "abcdefghi", 0)
# define FTEST22 ft_strncmp("abc@", "abcdefghi", 3)
# define FTEST23 ft_strncmp("abc@", "abcdefghi", 4)
# define FTEST24 ft_strncmp("abc@", "abcdefghi", 12)
#endif

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("   %s == %d\n", "TEST01 (std one)", TEST01);
	printf("   %s == %d\n", "FTEST01 (ft one)", FTEST01);
//	printf("   %s == %d\n", "TEST02 (std one)", TEST02);	// Expected segmentation fault
//	printf("   %s == %d\n", "FTEST02 (ft one)", FTEST02);	// Expected segmentation fault
	printf("   %s == %d\n", "TEST03 (std one)", TEST03);
	printf("   %s == %d\n", "FTEST03 (ft one)", FTEST03);
	printf("   %s == %d\n", "TEST04 (std one)", TEST04);
	printf("   %s == %d\n", "FTEST04 (ft one)", FTEST04);
//	printf("   %s == %d\n", "TEST05 (std one)", TEST05);	// Expected segmentation fault
//	printf("   %s == %d\n", "FTEST05 (ft one)", FTEST05);	// Expected segmentation fault
//	printf("   %s == %d\n", "TEST06 (std one)", TEST06);	// Expected segmentation fault
//	printf("   %s == %d\n", "FTEST06 (ft one)", FTEST06);	// Expected segmentation fault
	printf("   %s == %d\n", "TEST07 (std one)", TEST07);
	printf("   %s == %d\n", "FTEST07 (ft one)", FTEST07);
	printf("   %s == %d\n", "TEST08 (std one)", TEST08);
	printf("   %s == %d\n", "FTEST08 (ft one)", FTEST08);

	printf("   %s == %d\n", "TEST09 (std one)", TEST09);
	printf("   %s == %d\n", "FTEST09 (ft one)", FTEST09);
	printf("   %s == %d\n", "TEST10 (std one)", TEST10);
	printf("   %s == %d\n", "FTEST10 (ft one)", FTEST10);
	printf("   %s == %d\n", "TEST11 (std one)", TEST11);
	printf("   %s == %d\n", "FTEST11 (ft one)", FTEST11);
	printf("   %s == %d\n", "TEST12 (std one)", TEST12);
	printf("   %s == %d\n", "FTEST12 (ft one)", FTEST12);
	printf("   %s == %d\n", "TEST13 (std one)", TEST13);
	printf("   %s == %d\n", "FTEST13 (ft one)", FTEST13);
	printf("   %s == %d\n", "TEST14 (std one)", TEST14);
	printf("   %s == %d\n", "FTEST14 (ft one)", FTEST14);
	printf("   %s == %d\n", "TEST15 (std one)", TEST15);
	printf("   %s == %d\n", "FTEST15 (ft one)", FTEST15);
	printf("   %s == %d\n", "TEST16 (std one)", TEST16);
	printf("   %s == %d\n", "FTEST16 (ft one)", FTEST16);
	printf("   %s == %d\n", "TEST17 (std one)", TEST17);
	printf("   %s == %d\n", "FTEST17 (ft one)", FTEST17);
	printf("   %s == %d\n", "TEST18 (std one)", TEST18);
	printf("   %s == %d\n", "FTEST18 (ft one)", FTEST18);
	printf("   %s == %d\n", "TEST19 (std one)", TEST19);
	printf("   %s == %d\n", "FTEST19 (ft one)", FTEST19);
	printf("   %s == %d\n", "TEST20 (std one)", TEST20);
	printf("   %s == %d\n", "FTEST20 (ft one)", FTEST20);
	printf("   %s == %d\n", "TEST21 (std one)", TEST21);
	printf("   %s == %d\n", "FTEST21 (ft one)", FTEST21);
	printf("   %s == %d\n", "TEST22 (std one)", TEST22);
	printf("   %s == %d\n", "FTEST22 (ft one)", FTEST22);
	printf("   %s == %d\n", "TEST23 (std one)", TEST23);
	printf("   %s == %d\n", "FTEST23 (ft one)", FTEST23);
	printf("   %s == %d\n", "TEST24 (std one)", TEST24);
	printf("   %s == %d\n", "FTEST24 (ft one)", FTEST24);
	return (0);
}
