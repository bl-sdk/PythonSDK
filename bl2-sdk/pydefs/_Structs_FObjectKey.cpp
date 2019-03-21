#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectKey()
{
    py::class_< FObjectKey >("FObjectKey")
        .def_readwrite("ObjectName", &FObjectKey::ObjectName)
        .def_readwrite("AdditionalKey", &FObjectKey::AdditionalKey)
  ;
}