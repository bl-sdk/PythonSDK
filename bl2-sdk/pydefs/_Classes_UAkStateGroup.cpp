#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkStateGroup(py::module &m)
{
    py::class_< UAkStateGroup,  UAkObject   >(m, "UAkStateGroup")
        .def("StaticClass", &UAkStateGroup::StaticClass, py::return_value_policy::reference)
          ;
}