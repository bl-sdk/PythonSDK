#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryLight()
{
    py::class_< UActorFactoryLight,  UActorFactory   >("UActorFactoryLight")
        .def("StaticClass", &UActorFactoryLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}