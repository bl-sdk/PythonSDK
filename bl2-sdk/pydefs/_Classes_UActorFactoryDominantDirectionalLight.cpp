#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLight()
{
    py::class_< UActorFactoryDominantDirectionalLight,  UActorFactory   >("UActorFactoryDominantDirectionalLight")
        .def("StaticClass", &UActorFactoryDominantDirectionalLight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}