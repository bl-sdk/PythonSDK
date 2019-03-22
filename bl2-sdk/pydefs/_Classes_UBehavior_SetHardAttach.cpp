#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetHardAttach(py::module &m)
{
    py::class_< UBehavior_SetHardAttach,  UBehaviorBase   >(m, "UBehavior_SetHardAttach")
        .def("ApplyBehaviorToContext", &UBehavior_SetHardAttach::ApplyBehaviorToContext)
          ;
}