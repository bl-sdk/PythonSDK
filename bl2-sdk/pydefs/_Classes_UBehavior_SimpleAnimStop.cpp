#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimStop(py::module &m)
{
    py::class_< UBehavior_SimpleAnimStop,  UBehaviorBase   >(m, "UBehavior_SimpleAnimStop")
        .def_readwrite("Tree", &UBehavior_SimpleAnimStop::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimStop::AnimName)
        .def("StaticClass", &UBehavior_SimpleAnimStop::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimStop::ApplyBehaviorToContext)
          ;
}