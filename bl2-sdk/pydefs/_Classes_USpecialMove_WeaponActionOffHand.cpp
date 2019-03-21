#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponActionOffHand()
{
    py::class_< USpecialMove_WeaponActionOffHand,  USpecialMove_WeaponAction   >("USpecialMove_WeaponActionOffHand")
        .def("StaticClass", &USpecialMove_WeaponActionOffHand::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}