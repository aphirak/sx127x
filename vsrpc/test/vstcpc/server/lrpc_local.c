/*
 * File: "lrpc_local.c".
 * This file is autogenerated from "lrpc.vsidl" file
 * and can be append. You may (and must) edit this file.
 * Recomented backup copy this file to another too.
 */
//----------------------------------------------------------------------------
#include "vsrpc.h"
#include <stdio.h>
//----------------------------------------------------------------------------
void lrpc_msg(vsrpc_t* rpc, char *msg)
{
  printf(">>> broadcast msg = %s\n", msg);
}
//----------------------------------------------------------------------------
