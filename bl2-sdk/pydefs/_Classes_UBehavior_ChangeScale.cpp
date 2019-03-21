#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeScale(py::object m)
{
    py::class_< UBehavior_ChangeScale,  UBehaviorBase   >(m, "UBehavior_ChangeScale")
        .def_readwrite("Scale", &UBehavior_ChangeScale::Scale)
        .def("StaticClass", &UBehavior_ChangeScale::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeScale::ApplyBehaviorToContext)
          ;
}