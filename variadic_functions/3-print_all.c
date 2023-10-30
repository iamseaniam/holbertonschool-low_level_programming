#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	    const char *ptr = format;
	        char c;
		    int i;
		        float f;
			    char *s;

			        va_list args;
				    va_start(args, format);

				        while (*ptr)
						    {
							            switch (*ptr)
									            {
											                case 'c':
														                c = va_arg(args, int);
																                printf("%c", c);
																		                break;
																				            case 'i':
																				                i = va_arg(args, int);
																						                printf("%d", i);
																								                break;
																										            case 'f':
																										                f = va_arg(args, double);
																												                printf("%f", f);
																														                break;
																																            case 's':
																																                s = va_arg(args, char *);
																																		                if (s == NULL)
																																					                {
																																								                    printf("(nil)");
																																										                    }
																																				                else
																																							                {
																																										                    printf("%s", s);
																																												                    }
																																						                break;
																																								        }

								            if (*(ptr + 1))
										            {
												                printf(", ");
														        }

									            ptr++;
										        }

					    va_end(args);

					        printf("\n");
}

