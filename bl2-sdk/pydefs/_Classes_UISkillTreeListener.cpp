#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISkillTreeListener(py::module &m)
{
    py::class_< UISkillTreeListener,  UInterface   >(m, "UISkillTreeListener")
        .def("HandleSkillTreeReset", &UISkillTreeListener::HandleSkillTreeReset)
          ;
}