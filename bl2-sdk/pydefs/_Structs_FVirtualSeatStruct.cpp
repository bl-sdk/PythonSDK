#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVirtualSeatStruct(py::object m)
{
    py::class_< FVirtualSeatStruct >(m, "FVirtualSeatStruct")
        .def_readwrite("NameKey", &FVirtualSeatStruct::NameKey)
        .def_readwrite("CurrentRealSeat", &FVirtualSeatStruct::CurrentRealSeat)
  ;
}