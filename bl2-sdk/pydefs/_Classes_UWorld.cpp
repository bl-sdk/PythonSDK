#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWorld(py::object m)
{
    py::class_< UWorld,  UObject   >(m, "UWorld")
        .def("StaticClass", &UWorld::StaticClass, py::return_value_policy::reference)
          ;
}