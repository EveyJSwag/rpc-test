/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "insane_program.h"

bool_t
xdr_num_arg_1(XDR *xdrs, num_arg_1 *objp)
{

	if (!xdr_u_int(xdrs, &objp->arg1))
		return (FALSE);
	if (!xdr_u_int(xdrs, &objp->arg2))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_num_arg_2(XDR *xdrs, num_arg_2 *objp)
{

	if (!xdr_u_int(xdrs, &objp->arg1))
		return (FALSE);
	if (!xdr_u_int(xdrs, &objp->arg2))
		return (FALSE);
	if (!xdr_u_int(xdrs, &objp->arg3))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_num_arg_3(XDR *xdrs, num_arg_3 *objp)
{

	if (!xdr_u_int(xdrs, &objp->arg1))
		return (FALSE);
	if (!xdr_u_int(xdrs, &objp->arg2))
		return (FALSE);
	if (!xdr_pointer(xdrs, (char **)&objp->arg_name, sizeof(u_char), (xdrproc_t)xdr_u_char))
		return (FALSE);
	return (TRUE);
}
