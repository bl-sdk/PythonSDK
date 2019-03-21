#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightShaftComponent()
{
    py::class_< ULightShaftComponent,  ULightComponent   >("ULightShaftComponent")
        .def_readwrite("TraceDistance", &ULightShaftComponent::TraceDistance)
        .def_readwrite("LightShaftType", &ULightShaftComponent::LightShaftType)
        .def_readwrite("Radius", &ULightShaftComponent::Radius)
        .def("StaticClass", &ULightShaftComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}