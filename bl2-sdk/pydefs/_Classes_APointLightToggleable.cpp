#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLightToggleable()
{
    py::class_< APointLightToggleable,  APointLight   >("APointLightToggleable")
        .def("StaticClass", &APointLightToggleable::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &APointLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &APointLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &APointLightToggleable::ShouldSaveForCheckpoint)
        .staticmethod("StaticClass")
  ;
}