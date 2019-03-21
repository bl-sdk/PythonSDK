#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AIDestructibleObject(py::object m)
{
    py::class_< AIDestructibleObject,  AActor   >(m, "AIDestructibleObject")
        .def("StaticClass", &AIDestructibleObject::StaticClass, py::return_value_policy::reference)
          ;
}