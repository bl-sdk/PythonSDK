#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Side(py::module &m)
{
    py::class_< UAttackLocation_Side,  UAttackLocation   >(m, "UAttackLocation_Side")
        .def("ValidLocation", &UAttackLocation_Side::ValidLocation)
          ;
}