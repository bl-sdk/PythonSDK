#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGameTypes()
{
    py::class_< UGameTypes,  UObject   >("UGameTypes")
        .def("StaticClass", &UGameTypes::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}