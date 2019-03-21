#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkStateGroup()
{
    py::class_< UAkStateGroup,  UAkObject   >("UAkStateGroup")
        .def("StaticClass", &UAkStateGroup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}