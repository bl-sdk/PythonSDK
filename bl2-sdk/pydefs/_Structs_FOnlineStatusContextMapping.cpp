#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineStatusContextMapping()
{
    class_< FOnlineStatusContextMapping >("FOnlineStatusContextMapping", no_init)
        .def_readwrite("KeyString", &FOnlineStatusContextMapping::KeyString)
        .def_readwrite("ContextId", &FOnlineStatusContextMapping::ContextId)
  ;
}