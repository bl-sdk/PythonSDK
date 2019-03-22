#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RefillWeapon(py::module &m)
{
    py::class_< UBehavior_RefillWeapon,  UBehaviorBase   >(m, "UBehavior_RefillWeapon")
        .def("ApplyBehaviorToContext", &UBehavior_RefillWeapon::ApplyBehaviorToContext)
          ;
}