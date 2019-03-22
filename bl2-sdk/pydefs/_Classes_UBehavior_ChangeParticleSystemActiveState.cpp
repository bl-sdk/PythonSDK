#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeParticleSystemActiveState(py::module &m)
{
    py::class_< UBehavior_ChangeParticleSystemActiveState,  UBehaviorBase   >(m, "UBehavior_ChangeParticleSystemActiveState")
        .def_readwrite("Status", &UBehavior_ChangeParticleSystemActiveState::Status)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeParticleSystemActiveState::ApplyBehaviorToContext)
          ;
}