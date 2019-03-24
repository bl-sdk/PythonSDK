#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimPlay(py::module &m)
{
    py::class_< UBehavior_SimpleAnimPlay,  UBehaviorBase   >(m, "UBehavior_SimpleAnimPlay")
		.def_static("StaticClass", &UBehavior_SimpleAnimPlay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tree", &UBehavior_SimpleAnimPlay::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimPlay::AnimName)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimPlay::ApplyBehaviorToContext)
          ;
}