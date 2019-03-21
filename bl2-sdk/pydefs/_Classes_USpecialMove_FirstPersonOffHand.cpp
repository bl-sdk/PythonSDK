#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_FirstPersonOffHand(py::object m)
{
    py::class_< USpecialMove_FirstPersonOffHand,  USpecialMove_FirstPerson   >(m, "USpecialMove_FirstPersonOffHand")
        .def("StaticClass", &USpecialMove_FirstPersonOffHand::StaticClass, py::return_value_policy::reference)
        .def("StopWeaponRecoilAnim", &USpecialMove_FirstPersonOffHand::StopWeaponRecoilAnim)
          ;
}