#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVirtualSeatStruct()
{
    py::class_< FVirtualSeatStruct >("FVirtualSeatStruct")
        .def_readwrite("NameKey", &FVirtualSeatStruct::NameKey)
        .def_readwrite("CurrentRealSeat", &FVirtualSeatStruct::CurrentRealSeat)
  ;
}