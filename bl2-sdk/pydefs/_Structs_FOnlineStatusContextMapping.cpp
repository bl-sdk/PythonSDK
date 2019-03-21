#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineStatusContextMapping()
{
    py::class_< FOnlineStatusContextMapping >("FOnlineStatusContextMapping")
        .def_readwrite("KeyString", &FOnlineStatusContextMapping::KeyString)
        .def_readwrite("ContextId", &FOnlineStatusContextMapping::ContextId)
  ;
}