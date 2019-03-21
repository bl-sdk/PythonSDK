#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetFlag(py::object m)
{
    py::class_< UBehavior_SetFlag,  UBehaviorBase   >(m, "UBehavior_SetFlag")
        .def_readwrite("FlagsToSet", &UBehavior_SetFlag::FlagsToSet)
        .def("StaticClass", &UBehavior_SetFlag::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetFlag::ApplyBehaviorToContext)
          ;
}