#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightShaftComponent(py::object m)
{
    py::class_< ULightShaftComponent,  ULightComponent   >(m, "ULightShaftComponent")
        .def_readwrite("TraceDistance", &ULightShaftComponent::TraceDistance)
        .def_readwrite("LightShaftType", &ULightShaftComponent::LightShaftType)
        .def_readwrite("Radius", &ULightShaftComponent::Radius)
        .def("StaticClass", &ULightShaftComponent::StaticClass, py::return_value_policy::reference)
          ;
}