#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_FootPlacement(py::module &m)
{
    py::class_< UWillowSkelControl_FootPlacement,  USkelControlFootPlacement   >(m, "UWillowSkelControl_FootPlacement")
        .def_readwrite("LastOffset", &UWillowSkelControl_FootPlacement::LastOffset)
        .def_readwrite("CachedFloor", &UWillowSkelControl_FootPlacement::CachedFloor)
        .def_readwrite("CachedPawn", &UWillowSkelControl_FootPlacement::CachedPawn)
        .def_readwrite("InterpSpeed", &UWillowSkelControl_FootPlacement::InterpSpeed)
        .def_readwrite("ExpensiveDistanceFactor", &UWillowSkelControl_FootPlacement::ExpensiveDistanceFactor)
          ;
}