#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponThrow(py::module &m)
{
    py::class_< UBehavior_WeaponThrow,  UBehaviorBase   >(m, "UBehavior_WeaponThrow")
        .def("ApplyBehaviorToContext", &UBehavior_WeaponThrow::ApplyBehaviorToContext)
          ;
}