#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVirtualSeatStruct()
{
    class_< FVirtualSeatStruct >("FVirtualSeatStruct", no_init)
        .def_readwrite("NameKey", &FVirtualSeatStruct::NameKey)
        .def_readwrite("CurrentRealSeat", &FVirtualSeatStruct::CurrentRealSeat)
  ;
}