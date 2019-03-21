#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeConstantDensityInfo(py::object m)
{
    py::class_< UActorFactoryFogVolumeConstantDensityInfo,  UActorFactory   >(m, "UActorFactoryFogVolumeConstantDensityInfo")
        .def_readwrite("SelectedMaterial", &UActorFactoryFogVolumeConstantDensityInfo::SelectedMaterial)
        .def("StaticClass", &UActorFactoryFogVolumeConstantDensityInfo::StaticClass, py::return_value_policy::reference)
          ;
}