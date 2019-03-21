#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISkillTreeListener()
{
    py::class_< UISkillTreeListener,  UInterface   >("UISkillTreeListener")
        .def("StaticClass", &UISkillTreeListener::StaticClass, py::return_value_policy::reference)
        .def("HandleSkillTreeReset", &UISkillTreeListener::HandleSkillTreeReset)
        .staticmethod("StaticClass")
  ;
}