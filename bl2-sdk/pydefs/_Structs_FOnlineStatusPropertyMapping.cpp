#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatusPropertyMapping(py::object m)
{
    py::class_< FOnlineStatusPropertyMapping >(m, "FOnlineStatusPropertyMapping")
        .def_readwrite("KeyString", &FOnlineStatusPropertyMapping::KeyString)
        .def_readwrite("PropertyId", &FOnlineStatusPropertyMapping::PropertyId)
        .def_readwrite("EncodeId", &FOnlineStatusPropertyMapping::EncodeId)
  ;
}