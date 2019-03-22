#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAnimTree(py::module &m)
{
    py::class_< UBehavior_SetAnimTree,  UBehaviorBase   >(m, "UBehavior_SetAnimTree")
        .def_readwrite("AnimTreeTemplate", &UBehavior_SetAnimTree::AnimTreeTemplate)
        .def("ApplyBehaviorToContext", &UBehavior_SetAnimTree::ApplyBehaviorToContext)
          ;
}