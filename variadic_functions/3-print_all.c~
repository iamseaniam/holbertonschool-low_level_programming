#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	    va_list args;
	        va_start(args, format);

		    char c;
		        int i;
			    float f;
			        char *s;

				    while (*format)
					        {
							        switch (*format)
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
																																	                    printf("%s", (s == NULL) ? "(nil)" : s);
																																			                    break;
																																					            }

								        format++;
									    }

				        va_end(args);

					    printf("\n");
}

