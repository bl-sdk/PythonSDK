#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNameBasedObjectPath()
{
    py::class_< FNameBasedObjectPath >("FNameBasedObjectPath")
        .def_readonly("PathComponentNames", &FNameBasedObjectPath::PathComponentNames)
        .def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
  ;
}