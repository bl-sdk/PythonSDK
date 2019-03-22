#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Direct(py::module &m)
{
    py::class_< UAttackLocation_Direct,  UAttackLocation   >(m, "UAttackLocation_Direct")
        .def("ValidLocation", &UAttackLocation_Direct::ValidLocation)
          ;
}