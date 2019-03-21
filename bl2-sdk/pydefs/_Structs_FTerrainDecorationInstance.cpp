#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainDecorationInstance()
{
    class_< FTerrainDecorationInstance >("FTerrainDecorationInstance", no_init)
        .def_readwrite("Component", &FTerrainDecorationInstance::Component)
        .def_readwrite("X", &FTerrainDecorationInstance::X)
        .def_readwrite("Y", &FTerrainDecorationInstance::Y)
        .def_readwrite("Scale", &FTerrainDecorationInstance::Scale)
        .def_readwrite("Yaw", &FTerrainDecorationInstance::Yaw)
  ;
}