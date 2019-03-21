#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineRegistrant()
{
    class_< FOnlineRegistrant >("FOnlineRegistrant", no_init)
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
  ;
}