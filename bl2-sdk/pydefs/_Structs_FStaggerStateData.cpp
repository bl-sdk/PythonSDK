#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStaggerStateData()
{
    class_< FStaggerStateData >("FStaggerStateData", no_init)
        .def_readwrite("State", &FStaggerStateData::State)
        .def_readwrite("StaggerStartTime", &FStaggerStateData::StaggerStartTime)
        .def_readwrite("StaggerEndTime", &FStaggerStateData::StaggerEndTime)
        .def_readwrite("StaggerEndRagdollTime", &FStaggerStateData::StaggerEndRagdollTime)
        .def_readwrite("StaggerRecoveryStartTime", &FStaggerStateData::StaggerRecoveryStartTime)
        .def_readwrite("NextUnstaggerCheckTime", &FStaggerStateData::NextUnstaggerCheckTime)
        .def_readwrite("PreviousOverridePhysicalMaterial", &FStaggerStateData::PreviousOverridePhysicalMaterial)
        .def_readwrite("PreviousCollisionChannel", &FStaggerStateData::PreviousCollisionChannel)
        .def_readwrite("PreviousCollisionComponent", &FStaggerStateData::PreviousCollisionComponent)
        .def_readwrite("StaggerInstigator", &FStaggerStateData::StaggerInstigator)
        .def_readwrite("RestaggeredCount", &FStaggerStateData::RestaggeredCount)
  ;
}