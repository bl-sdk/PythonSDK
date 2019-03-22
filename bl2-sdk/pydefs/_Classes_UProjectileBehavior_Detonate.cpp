#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Detonate(py::module &m)
{
    py::class_< UProjectileBehavior_Detonate,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_Detonate")
        .def_readwrite("TargetAllegiance", &UProjectileBehavior_Detonate::TargetAllegiance)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Detonate::ApplyBehaviorToContext)
          ;
}