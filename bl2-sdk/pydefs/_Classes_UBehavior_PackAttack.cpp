#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PackAttack(py::module &m)
{
    py::class_< UBehavior_PackAttack,  UBehaviorBase   >(m, "UBehavior_PackAttack")
		.def_static("StaticClass", &UBehavior_PackAttack::StaticClass, py::return_value_policy::reference)
          ;
}