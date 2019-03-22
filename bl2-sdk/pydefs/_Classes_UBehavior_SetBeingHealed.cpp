#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetBeingHealed(py::module &m)
{
    py::class_< UBehavior_SetBeingHealed,  UBehaviorBase   >(m, "UBehavior_SetBeingHealed")
        .def("ApplyBehaviorToContext", &UBehavior_SetBeingHealed::ApplyBehaviorToContext)
          ;
}