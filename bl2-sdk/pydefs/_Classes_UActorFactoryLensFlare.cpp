#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryLensFlare()
{
    py::class_< UActorFactoryLensFlare,  UActorFactory   >("UActorFactoryLensFlare")
        .def_readwrite("LensFlareObject", &UActorFactoryLensFlare::LensFlareObject)
        .def("StaticClass", &UActorFactoryLensFlare::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}