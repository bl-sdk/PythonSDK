#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticLightCollectionActor(py::module &m)
{
    py::class_< AStaticLightCollectionActor,  ALight   >(m, "AStaticLightCollectionActor")
		.def_static("StaticClass", &AStaticLightCollectionActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LightComponents", &AStaticLightCollectionActor::LightComponents)
        .def_readwrite("MaxLightComponents", &AStaticLightCollectionActor::MaxLightComponents)
          ;
}