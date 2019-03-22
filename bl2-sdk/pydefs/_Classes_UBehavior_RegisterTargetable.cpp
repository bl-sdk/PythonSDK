#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterTargetable(py::module &m)
{
    py::class_< UBehavior_RegisterTargetable,  UBehaviorBase   >(m, "UBehavior_RegisterTargetable")
        .def("ApplyBehaviorToContext", &UBehavior_RegisterTargetable::ApplyBehaviorToContext)
          ;
}