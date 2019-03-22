#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IsCensoredMode(py::module &m)
{
    py::class_< UBehavior_IsCensoredMode,  UBehaviorBase   >(m, "UBehavior_IsCensoredMode")
        .def("ApplyBehaviorToContext", &UBehavior_IsCensoredMode::ApplyBehaviorToContext)
          ;
}