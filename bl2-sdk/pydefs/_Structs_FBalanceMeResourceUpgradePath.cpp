#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceMeResourceUpgradePath(py::object m)
{
    py::class_< FBalanceMeResourceUpgradePath >(m, "FBalanceMeResourceUpgradePath")
        .def_readwrite("ResourceName", &FBalanceMeResourceUpgradePath::ResourceName)
        .def_readwrite("PlayerLevelForEachUpgrade", &FBalanceMeResourceUpgradePath::PlayerLevelForEachUpgrade)
  ;
}