/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "insane_program.h"

int *
add_numbers_1_svc(num_arg_1 *argp, struct svc_req *rqstp)
{

	static int  result;
        result = argp->arg1 + argp->arg2;
	/*
	 * insert server code here
	 */

	return(&result);
}

int *
add_numbers_name_1_svc(num_arg_3 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
sub_numbers_1_svc(num_arg_1 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
sub_numbers_name_1_svc(num_arg_3 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
mult_numbers_2_svc(num_arg_1 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
mult_numbers_name_2_svc(num_arg_3 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
div_numbers_2_svc(num_arg_1 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
div_numbers_name_2_svc(num_arg_3 *argp, struct svc_req *rqstp)
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}