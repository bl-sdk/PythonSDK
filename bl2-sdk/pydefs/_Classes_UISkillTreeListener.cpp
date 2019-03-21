#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISkillTreeListener(py::object m)
{
    py::class_< UISkillTreeListener,  UInterface   >(m, "UISkillTreeListener")
        .def("StaticClass", &UISkillTreeListener::StaticClass, py::return_value_policy::reference)
        .def("HandleSkillTreeReset", &UISkillTreeListener::HandleSkillTreeReset)
          ;
}