#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticLightCollectionActor()
{
    py::class_< AStaticLightCollectionActor,  ALight   >("AStaticLightCollectionActor")
        .def_readwrite("LightComponents", &AStaticLightCollectionActor::LightComponents)
        .def_readwrite("MaxLightComponents", &AStaticLightCollectionActor::MaxLightComponents)
        .def("StaticClass", &AStaticLightCollectionActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}