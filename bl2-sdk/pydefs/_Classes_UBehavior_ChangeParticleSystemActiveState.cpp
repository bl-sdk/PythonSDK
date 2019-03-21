#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeParticleSystemActiveState()
{
    py::class_< UBehavior_ChangeParticleSystemActiveState,  UBehaviorBase   >("UBehavior_ChangeParticleSystemActiveState")
        .def_readwrite("Status", &UBehavior_ChangeParticleSystemActiveState::Status)
        .def("StaticClass", &UBehavior_ChangeParticleSystemActiveState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeParticleSystemActiveState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}