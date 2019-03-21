#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimPlay()
{
    py::class_< UBehavior_SimpleAnimPlay,  UBehaviorBase   >("UBehavior_SimpleAnimPlay")
        .def_readwrite("Tree", &UBehavior_SimpleAnimPlay::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimPlay::AnimName)
        .def("StaticClass", &UBehavior_SimpleAnimPlay::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimPlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}