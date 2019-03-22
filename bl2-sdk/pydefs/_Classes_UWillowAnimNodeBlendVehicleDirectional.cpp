#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendVehicleDirectional(py::module &m)
{
    py::class_< UWillowAnimNodeBlendVehicleDirectional,  UAnimNodeBlendBase   >(m, "UWillowAnimNodeBlendVehicleDirectional")
        .def_readwrite("DirDegreesPerSecond", &UWillowAnimNodeBlendVehicleDirectional::DirDegreesPerSecond)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendVehicleDirectional::BlendTime)
        .def_readwrite("DirAngle", &UWillowAnimNodeBlendVehicleDirectional::DirAngle)
          ;
}