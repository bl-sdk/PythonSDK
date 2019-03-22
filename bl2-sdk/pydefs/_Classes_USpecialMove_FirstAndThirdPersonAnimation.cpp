#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstAndThirdPersonAnimation(py::module &m)
{
    py::class_< USpecialMove_FirstAndThirdPersonAnimation,  USpecialMove_WeaponAction   >(m, "USpecialMove_FirstAndThirdPersonAnimation")
        .def_readwrite("FirstPersonSM", &USpecialMove_FirstAndThirdPersonAnimation::FirstPersonSM)
        .def("eventClientStarted", &USpecialMove_FirstAndThirdPersonAnimation::eventClientStarted)
          ;
}