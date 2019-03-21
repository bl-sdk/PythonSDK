#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineBaseTypes()
{
    py::class_< UEngineBaseTypes,  UObject   >("UEngineBaseTypes")
        .def("StaticClass", &UEngineBaseTypes::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}