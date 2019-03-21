#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AIDestructibleObject()
{
    py::class_< AIDestructibleObject,  AActor   >("AIDestructibleObject")
        .def("StaticClass", &AIDestructibleObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}