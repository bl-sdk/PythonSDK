#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPropertyInfo()
{
    py::class_< FPropertyInfo >("FPropertyInfo")
        .def_readwrite("PropertyName", &FPropertyInfo::PropertyName)
        .def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue)
  ;
}