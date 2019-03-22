#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotationRate(py::module &m)
{
    py::class_< UWillowSkelControl_RotationRate,  USkelControlSingleBone   >(m, "UWillowSkelControl_RotationRate")
        .def_readwrite("RotationRate", &UWillowSkelControl_RotationRate::RotationRate)
          ;
}