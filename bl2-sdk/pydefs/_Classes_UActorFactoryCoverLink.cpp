#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCoverLink()
{
    py::class_< UActorFactoryCoverLink,  UActorFactory   >("UActorFactoryCoverLink")
        .def("StaticClass", &UActorFactoryCoverLink::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}