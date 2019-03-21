#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineStatusMapping()
{
    class_< FOnlineStatusMapping >("FOnlineStatusMapping", no_init)
        .def_readwrite("StatusId", &FOnlineStatusMapping::StatusId)
        .def_readwrite("StatusString", &FOnlineStatusMapping::StatusString)
  ;
}