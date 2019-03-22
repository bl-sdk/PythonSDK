#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RandomBranch(py::module &m)
{
    py::class_< UBehavior_RandomBranch,  UBehaviorBase   >(m, "UBehavior_RandomBranch")
        .def_readwrite("Conditions", &UBehavior_RandomBranch::Conditions)
        .def("ApplyBehaviorToContext", &UBehavior_RandomBranch::ApplyBehaviorToContext)
          ;
}