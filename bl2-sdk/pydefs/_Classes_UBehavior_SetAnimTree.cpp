#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAnimTree()
{
    py::class_< UBehavior_SetAnimTree,  UBehaviorBase   >("UBehavior_SetAnimTree")
        .def_readwrite("AnimTreeTemplate", &UBehavior_SetAnimTree::AnimTreeTemplate)
        .def("StaticClass", &UBehavior_SetAnimTree::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetAnimTree::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}