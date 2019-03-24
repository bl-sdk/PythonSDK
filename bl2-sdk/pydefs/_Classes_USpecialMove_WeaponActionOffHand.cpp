#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponActionOffHand(py::module &m)
{
    py::class_< USpecialMove_WeaponActionOffHand,  USpecialMove_WeaponAction   >(m, "USpecialMove_WeaponActionOffHand")
		.def_static("StaticClass", &USpecialMove_WeaponActionOffHand::StaticClass, py::return_value_policy::reference)
          ;
}