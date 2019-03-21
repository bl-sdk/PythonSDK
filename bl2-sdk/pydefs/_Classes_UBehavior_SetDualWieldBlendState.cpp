#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDualWieldBlendState()
{
    py::class_< UBehavior_SetDualWieldBlendState,  UBehaviorBase   >("UBehavior_SetDualWieldBlendState")
        .def_readwrite("BlendTime", &UBehavior_SetDualWieldBlendState::BlendTime)
        .def("StaticClass", &UBehavior_SetDualWieldBlendState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetDualWieldBlendState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}