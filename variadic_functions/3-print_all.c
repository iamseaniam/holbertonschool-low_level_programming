#include <stdarg.h>
#include <stdio.h>

/**
 *  * print_all - Prints anything.
 *   * @format: The format string specifying the types of arguments.
 *    * @...: The variable number of arguments.
 *     *
 *      * Description: This function takes a format string @format and a variable
 *       *              number of arguments. It prints the arguments based on the
 *        *              format string, which can contain the following specifiers:
 *         *              - 'c' for char
 *          *              - 'i' for integer
 *           *              - 'f' for float
 *            *              - 's' for char *
 *             *              If a string is NULL, it prints "(nil)" instead.
 *              *              Any other character in the format string is ignored.
 *               *              It adds a new line at the end.
 *                */
void print_all(const char * const format, ...)
{
	        va_list args;
		        unsigned int i = 0;
			        char *str;
				        char c;
					        int num;
						        float f;

							        va_start(args, format);

								        while (format && format[i])
										        {
												                if (format[i] == 'c')
															                {
																		                        c = va_arg(args, int);
																					                        printf("%c", c);
																								                }

														                if (format[i] == 'i')
																	                {
																				                        num = va_arg(args, int);
																							                        printf("%d", num);
																										                }

																                if (format[i] == 'f')
																			                {
																						                        f = va_arg(args, double);
																									                        printf("%f", f);
																												                }

																		                if (format[i] == 's')
																					                {
																								                        str = va_arg(args, char *);
																											                        if (str != NULL)
																															                        {
																																			                                printf("%s", str);
																																							                        }
																														                        else
																																		                        {
																																						                                printf("(nil)");
																																										                        }
																																	                }

																				                if (format[i + 1] != '\0')
																							                {
																										                        printf(", ");
																													                }

																						                i++;
																								        }

									        printf("\n");

										        va_end(args);
}

