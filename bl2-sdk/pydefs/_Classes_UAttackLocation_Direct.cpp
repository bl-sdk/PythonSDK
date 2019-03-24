#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Direct(py::module &m)
{
    py::class_< UAttackLocation_Direct,  UAttackLocation   >(m, "UAttackLocation_Direct")
		.def_static("StaticClass", &UAttackLocation_Direct::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_Direct::ValidLocation)
          ;
}