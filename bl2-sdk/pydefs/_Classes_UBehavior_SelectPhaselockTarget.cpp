#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SelectPhaselockTarget(py::module &m)
{
    py::class_< UBehavior_SelectPhaselockTarget,  UBehaviorBase   >(m, "UBehavior_SelectPhaselockTarget")
        .def_readwrite("LifterSkillContext", &UBehavior_SelectPhaselockTarget::LifterSkillContext)
        .def("ApplyBehaviorToContext", &UBehavior_SelectPhaselockTarget::ApplyBehaviorToContext)
          ;
}