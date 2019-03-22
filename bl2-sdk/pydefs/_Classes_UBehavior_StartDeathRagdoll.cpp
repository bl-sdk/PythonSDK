#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StartDeathRagdoll(py::module &m)
{
    py::class_< UBehavior_StartDeathRagdoll,  UBehaviorBase   >(m, "UBehavior_StartDeathRagdoll")
        .def("ApplyBehaviorToContext", &UBehavior_StartDeathRagdoll::ApplyBehaviorToContext)
          ;
}