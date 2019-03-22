#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopMeleeAttack(py::module &m)
{
    py::class_< UBehavior_StopMeleeAttack,  UBehaviorBase   >(m, "UBehavior_StopMeleeAttack")
        .def("StaticClass", &UBehavior_StopMeleeAttack::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_StopMeleeAttack::ApplyBehaviorToContext)
          ;
}