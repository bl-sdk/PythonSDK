#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_ParentDistance(py::module &m)
{
    py::class_< UAttackLocation_ParentDistance,  UAttackLocation   >(m, "UAttackLocation_ParentDistance")
		.def_static("StaticClass", &UAttackLocation_ParentDistance::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Restriction", &UAttackLocation_ParentDistance::Restriction)
        .def_readwrite("Distance", &UAttackLocation_ParentDistance::Distance)
        .def("ValidLocation", &UAttackLocation_ParentDistance::ValidLocation)
          ;
}