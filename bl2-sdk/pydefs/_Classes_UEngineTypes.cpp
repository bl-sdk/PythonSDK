#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineTypes()
{
    py::class_< UEngineTypes,  UObject   >("UEngineTypes")
        .def("StaticClass", &UEngineTypes::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}