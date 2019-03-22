#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APointLightToggleable(py::module &m)
{
    py::class_< APointLightToggleable,  APointLight   >(m, "APointLightToggleable")
        .def("ApplyCheckpointRecord", &APointLightToggleable::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &APointLightToggleable::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &APointLightToggleable::ShouldSaveForCheckpoint)
          ;
}