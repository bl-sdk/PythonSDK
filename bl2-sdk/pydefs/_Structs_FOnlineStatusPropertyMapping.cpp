#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOnlineStatusPropertyMapping()
{
    class_< FOnlineStatusPropertyMapping >("FOnlineStatusPropertyMapping", no_init)
        .def_readwrite("KeyString", &FOnlineStatusPropertyMapping::KeyString)
        .def_readwrite("PropertyId", &FOnlineStatusPropertyMapping::PropertyId)
        .def_readwrite("EncodeId", &FOnlineStatusPropertyMapping::EncodeId)
  ;
}