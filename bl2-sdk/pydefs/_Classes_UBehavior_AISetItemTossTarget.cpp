#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetItemTossTarget(py::object m)
{
    py::class_< UBehavior_AISetItemTossTarget,  UBehaviorBase   >(m, "UBehavior_AISetItemTossTarget")
        .def_readwrite("TossTarget", &UBehavior_AISetItemTossTarget::TossTarget)
        .def("StaticClass", &UBehavior_AISetItemTossTarget::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AISetItemTossTarget::ApplyBehaviorToContext)
          ;
}