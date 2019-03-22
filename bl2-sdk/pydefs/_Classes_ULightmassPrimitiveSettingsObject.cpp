#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightmassPrimitiveSettingsObject(py::module &m)
{
    py::class_< ULightmassPrimitiveSettingsObject,  UObject   >(m, "ULightmassPrimitiveSettingsObject")
        .def_readwrite("LightmassSettings", &ULightmassPrimitiveSettingsObject::LightmassSettings)
        .def("StaticClass", &ULightmassPrimitiveSettingsObject::StaticClass, py::return_value_policy::reference)
          ;
}