#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowTacticalMapVolume()
{
    class_< AWillowTacticalMapVolume, bases< AVolume >  , boost::noncopyable>("AWillowTacticalMapVolume", no_init)
        .def_readwrite("UnrealUnitsPerPixel", &AWillowTacticalMapVolume::UnrealUnitsPerPixel)
        .def_readwrite("NorthOffsetInDegreesClockwise", &AWillowTacticalMapVolume::NorthOffsetInDegreesClockwise)
        .def("StaticClass", &AWillowTacticalMapVolume::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}