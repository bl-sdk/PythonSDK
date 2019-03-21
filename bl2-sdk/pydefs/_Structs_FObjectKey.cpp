#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectKey(py::object m)
{
    py::class_< FObjectKey >(m, "FObjectKey")
        .def_readwrite("ObjectName", &FObjectKey::ObjectName)
        .def_readwrite("AdditionalKey", &FObjectKey::AdditionalKey)
  ;
}