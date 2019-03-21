#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightmassMaterialInterfaceSettings(py::object m)
{
    py::class_< FLightmassMaterialInterfaceSettings >(m, "FLightmassMaterialInterfaceSettings")
        .def_readwrite("DistanceFieldPenumbraScale", &FLightmassMaterialInterfaceSettings::DistanceFieldPenumbraScale)
  ;
}