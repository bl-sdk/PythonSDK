#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatusContextMapping(py::module &m)
{
    py::class_< FOnlineStatusContextMapping >(m, "FOnlineStatusContextMapping")
        .def_readwrite("KeyString", &FOnlineStatusContextMapping::KeyString)
        .def_readwrite("ContextId", &FOnlineStatusContextMapping::ContextId)
  ;
}