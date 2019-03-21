#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPropertyInfo(py::object m)
{
    py::class_< FPropertyInfo >(m, "FPropertyInfo")
        .def_readwrite("PropertyName", &FPropertyInfo::PropertyName)
        .def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue)
  ;
}