#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryFogVolumeConstantDensityInfo(py::module &m)
{
    py::class_< UActorFactoryFogVolumeConstantDensityInfo,  UActorFactory   >(m, "UActorFactoryFogVolumeConstantDensityInfo")
		.def_static("StaticClass", &UActorFactoryFogVolumeConstantDensityInfo::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SelectedMaterial", &UActorFactoryFogVolumeConstantDensityInfo::SelectedMaterial)
          ;
}