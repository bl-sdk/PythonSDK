#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Height(py::module &m)
{
    py::class_< UAttackLocation_Height,  UAttackLocation   >(m, "UAttackLocation_Height")
		.def_static("StaticClass", &UAttackLocation_Height::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Restriction", &UAttackLocation_Height::Restriction)
        .def_readwrite("Height", &UAttackLocation_Height::Height)
        .def("ValidLocation", &UAttackLocation_Height::ValidLocation)
          ;
}