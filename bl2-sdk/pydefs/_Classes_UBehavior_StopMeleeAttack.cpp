#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StopMeleeAttack(py::module &m)
{
    py::class_< UBehavior_StopMeleeAttack,  UBehaviorBase   >(m, "UBehavior_StopMeleeAttack")
        .def("ApplyBehaviorToContext", &UBehavior_StopMeleeAttack::ApplyBehaviorToContext)
          ;
}