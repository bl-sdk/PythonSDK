#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDiscardRootMotion(py::module &m)
{
    py::class_< UBehavior_SetDiscardRootMotion,  UBehaviorBase   >(m, "UBehavior_SetDiscardRootMotion")
        .def("ApplyBehaviorToContext", &UBehavior_SetDiscardRootMotion::ApplyBehaviorToContext)
          ;
}