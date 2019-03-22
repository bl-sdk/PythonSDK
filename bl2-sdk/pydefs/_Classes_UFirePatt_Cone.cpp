#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFirePatt_Cone(py::module &m)
{
    py::class_< UFirePatt_Cone,  UFiringPattern   >(m, "UFirePatt_Cone")
        .def_readwrite("ConeDegrees", &UFirePatt_Cone::ConeDegrees)
        .def_readwrite("ShotSpreadType", &UFirePatt_Cone::ShotSpreadType)
        .def("StaticClass", &UFirePatt_Cone::StaticClass, py::return_value_policy::reference)
          ;
}