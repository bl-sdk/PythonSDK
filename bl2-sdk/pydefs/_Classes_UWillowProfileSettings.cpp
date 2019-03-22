#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowProfileSettings(py::module &m)
{
    py::class_< UWillowProfileSettings,  UGearboxProfileSettings   >(m, "UWillowProfileSettings")
        .def("StaticClass", &UWillowProfileSettings::StaticClass, py::return_value_policy::reference)
        .def("IsSetToDefaults", &UWillowProfileSettings::IsSetToDefaults)
          ;
}