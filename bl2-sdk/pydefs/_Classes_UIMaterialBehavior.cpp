#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMaterialBehavior(py::module &m)
{
    py::class_< UIMaterialBehavior,  UInterface   >(m, "UIMaterialBehavior")
        .def("Behavior_SetTextureParameterValue", &UIMaterialBehavior::Behavior_SetTextureParameterValue)
        .def("Behavior_SetScalarParameterValue", &UIMaterialBehavior::Behavior_SetScalarParameterValue)
        .def("Behavior_SetVectorParameterValue", &UIMaterialBehavior::Behavior_SetVectorParameterValue)
        .def("Behavior_GetScalarParameterValue", &UIMaterialBehavior::Behavior_GetScalarParameterValue)
        .def("Behavior_GetVectorParameterValue", &UIMaterialBehavior::Behavior_GetVectorParameterValue)
          ;
}