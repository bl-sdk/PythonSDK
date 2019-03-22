#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowProfileSettings(py::module &m)
{
    py::class_< UWillowProfileSettings,  UGearboxProfileSettings   >(m, "UWillowProfileSettings")
        .def("IsSetToDefaults", &UWillowProfileSettings::IsSetToDefaults)
          ;
}