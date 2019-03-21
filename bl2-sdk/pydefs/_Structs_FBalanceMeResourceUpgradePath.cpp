#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBalanceMeResourceUpgradePath()
{
    class_< FBalanceMeResourceUpgradePath >("FBalanceMeResourceUpgradePath", no_init)
        .def_readwrite("ResourceName", &FBalanceMeResourceUpgradePath::ResourceName)
        .def_readwrite("PlayerLevelForEachUpgrade", &FBalanceMeResourceUpgradePath::PlayerLevelForEachUpgrade)
  ;
}