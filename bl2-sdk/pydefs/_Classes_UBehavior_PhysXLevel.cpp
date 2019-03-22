#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PhysXLevel(py::module &m)
{
    py::class_< UBehavior_PhysXLevel,  UBehaviorBase   >(m, "UBehavior_PhysXLevel")
        .def("ApplyBehaviorToContext", &UBehavior_PhysXLevel::ApplyBehaviorToContext)
          ;
}