#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEnum(py::object m)
{
    py::class_< UEnum,  UField   >(m, "UEnum")
        .def("StaticClass", &UEnum::StaticClass, py::return_value_policy::reference)
          ;
}