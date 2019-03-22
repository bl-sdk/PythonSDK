#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleObstacle(py::module &m)
{
    py::class_< UBehavior_ToggleObstacle,  UBehaviorBase   >(m, "UBehavior_ToggleObstacle")
        .def_readwrite("Option", &UBehavior_ToggleObstacle::Option)
        .def("ApplyBehaviorToContext", &UBehavior_ToggleObstacle::ApplyBehaviorToContext)
          ;
}