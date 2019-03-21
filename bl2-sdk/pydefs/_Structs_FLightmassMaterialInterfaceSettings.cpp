#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassMaterialInterfaceSettings()
{
    py::class_< FLightmassMaterialInterfaceSettings >("FLightmassMaterialInterfaceSettings")
        .def_readwrite("DistanceFieldPenumbraScale", &FLightmassMaterialInterfaceSettings::DistanceFieldPenumbraScale)
  ;
}