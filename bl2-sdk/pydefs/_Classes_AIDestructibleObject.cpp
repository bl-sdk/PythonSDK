#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AIDestructibleObject(py::module &m)
{
    py::class_< AIDestructibleObject,  AActor   >(m, "AIDestructibleObject")
		.def_static("StaticClass", &AIDestructibleObject::StaticClass, py::return_value_policy::reference)
          ;
}