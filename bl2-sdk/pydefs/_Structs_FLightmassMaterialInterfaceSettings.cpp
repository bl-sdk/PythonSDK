#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLightmassMaterialInterfaceSettings()
{
    class_< FLightmassMaterialInterfaceSettings >("FLightmassMaterialInterfaceSettings", no_init)
        .def_readwrite("DistanceFieldPenumbraScale", &FLightmassMaterialInterfaceSettings::DistanceFieldPenumbraScale)
  ;
}