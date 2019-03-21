#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxProfileSettings(py::object m)
{
    py::class_< UGearboxProfileSettings,  UOnlineProfileSettings   >(m, "UGearboxProfileSettings")
        .def("StaticClass", &UGearboxProfileSettings::StaticClass, py::return_value_policy::reference)
          ;
}