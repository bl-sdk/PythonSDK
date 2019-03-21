#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatusPropertyMapping()
{
    py::class_< FOnlineStatusPropertyMapping >("FOnlineStatusPropertyMapping")
        .def_readwrite("KeyString", &FOnlineStatusPropertyMapping::KeyString)
        .def_readwrite("PropertyId", &FOnlineStatusPropertyMapping::PropertyId)
        .def_readwrite("EncodeId", &FOnlineStatusPropertyMapping::EncodeId)
  ;
}