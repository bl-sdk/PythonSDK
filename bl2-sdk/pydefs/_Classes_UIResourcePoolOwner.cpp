#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIResourcePoolOwner(py::module &m)
{
    py::class_< UIResourcePoolOwner,  UInterface   >(m, "UIResourcePoolOwner")
        .def("CanSetResourcePoolValues", &UIResourcePoolOwner::CanSetResourcePoolValues)
          ;
}