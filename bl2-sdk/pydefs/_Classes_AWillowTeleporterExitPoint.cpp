#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowTeleporterExitPoint()
{
    class_< AWillowTeleporterExitPoint, bases< AActor >  , boost::noncopyable>("AWillowTeleporterExitPoint", no_init)
        .def_readwrite("CylinderComponent", &AWillowTeleporterExitPoint::CylinderComponent)
        .def("StaticClass", &AWillowTeleporterExitPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}