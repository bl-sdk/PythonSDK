#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightmassPrimitiveSettingsObject()
{
    py::class_< ULightmassPrimitiveSettingsObject,  UObject   >("ULightmassPrimitiveSettingsObject")
        .def_readwrite("LightmassSettings", &ULightmassPrimitiveSettingsObject::LightmassSettings)
        .def("StaticClass", &ULightmassPrimitiveSettingsObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}