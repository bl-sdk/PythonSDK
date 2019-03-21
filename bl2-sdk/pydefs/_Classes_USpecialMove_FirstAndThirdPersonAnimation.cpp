#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstAndThirdPersonAnimation()
{
    py::class_< USpecialMove_FirstAndThirdPersonAnimation,  USpecialMove_WeaponAction   >("USpecialMove_FirstAndThirdPersonAnimation")
        .def_readwrite("FirstPersonSM", &USpecialMove_FirstAndThirdPersonAnimation::FirstPersonSM)
        .def("StaticClass", &USpecialMove_FirstAndThirdPersonAnimation::StaticClass, py::return_value_policy::reference)
        .def("eventClientStarted", &USpecialMove_FirstAndThirdPersonAnimation::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}