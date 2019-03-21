#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceMeResourceUpgradePath()
{
    py::class_< FBalanceMeResourceUpgradePath >("FBalanceMeResourceUpgradePath")
        .def_readwrite("ResourceName", &FBalanceMeResourceUpgradePath::ResourceName)
        .def_readwrite("PlayerLevelForEachUpgrade", &FBalanceMeResourceUpgradePath::PlayerLevelForEachUpgrade)
  ;
}