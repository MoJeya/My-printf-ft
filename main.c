#include "ft_printf.h"
int main()
{
	char *testpointer = NULL;
	char *emptystring = "";
	int int1 = 0;
	int int2 = 0;
	int int3 = -0;
	int int4 = 0;
	// Currently leaking print address (%p)
	// also leaking: %x
	int ml = ft_printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%% %% %d %d %s %%%%%%%% Das ist ziemlich cool! %% %% %% test mich %u %i %p %x %s %d %p %p \n", int1, int2, "TEST ME", int3, int4, testpointer, int4, NULL, 4, NULL, NULL);
	int pl =    printf("Teasdasdasdsdst! %%%%%%%%%%%%%%%% %% %d %d %s %%%%%%%% Das ist ziemlich cool! %% %% %% test mich %u %i %p %x %s %d %p %p \n", int1, int2, "TEST ME", int3, int4, testpointer, int4, NULL, 4, NULL, NULL);
	int ml2 =    ft_printf("A %% AAA %d\n", 0);
	int pl2 =       printf("A %% AAA %d\n", 0);
	int ml3 =    ft_printf("");
	int pl3 =    printf("");
	int ml4 =    ft_printf("aa\n");
	int pl4 =    printf("aa\n");
	int ml5 =    ft_printf("%%\n");
	int pl5 =       printf("%%\n");
	int ml6 =    ft_printf("%% A %% A %% \n");
	int pl6 =       printf("%% A %% A %% \n");
	int ml7 =    ft_printf("!!%d %%\n", -2147483647);
	int pl7 =       printf("!!%d %%\n", -2147483647);
	int ml8 =    ft_printf("!!%d %% %s \n", -123123, emptystring);
	int pl8 =       printf("!!%d %% %s \n", -123123, emptystring);
	int ml9 =    ft_printf("!!%d %% %s %u %p \n", -123123, emptystring, (unsigned int) 4294967295, emptystring);
	int pl9 =       printf("!!%d %% %s %u %p \n", -123123, emptystring, (unsigned int) 4294967295, emptystring);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml);
	printf("PRINTFLENGTH: %d\n", pl);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml2);
	printf("PRINTFLENGTH: %d\n", pl2);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml3);
	printf("PRINTFLENGTH: %d\n", pl3);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml4);
	printf("PRINTFLENGTH: %d\n", pl4);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml5);
	printf("PRINTFLENGTH: %d\n", pl5);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml6);
	printf("PRINTFLENGTH: %d\n", pl6);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml7);
	printf("PRINTFLENGTH: %d\n", pl7);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml8);
	printf("PRINTFLENGTH: %d\n", pl8);
	printf("================\n");
	printf("PRINTFLENGTH: %d\n", ml9);
	printf("PRINTFLENGTH: %d\n", pl9);
	system("leaks a.out");
	return 0;
}
