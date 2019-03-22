#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTacticalMapVolume(py::module &m)
{
    py::class_< AWillowTacticalMapVolume,  AVolume   >(m, "AWillowTacticalMapVolume")
        .def_readwrite("UnrealUnitsPerPixel", &AWillowTacticalMapVolume::UnrealUnitsPerPixel)
        .def_readwrite("NorthOffsetInDegreesClockwise", &AWillowTacticalMapVolume::NorthOffsetInDegreesClockwise)
          ;
}