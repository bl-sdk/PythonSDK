#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface(py::object m)
{
    py::class_< UInterface,  UObject   >(m, "UInterface")
        .def("StaticClass", &UInterface::StaticClass, py::return_value_policy::reference)
          ;
}