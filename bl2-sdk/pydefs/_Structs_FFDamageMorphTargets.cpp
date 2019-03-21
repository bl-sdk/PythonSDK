#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFDamageMorphTargets()
{
    class_< FFDamageMorphTargets >("FFDamageMorphTargets", no_init)
        .def_readwrite("MorphNodeName", &FFDamageMorphTargets::MorphNodeName)
        .def_readwrite("MorphNode", &FFDamageMorphTargets::MorphNode)
        .def_readwrite("LinkedMorphNodeName", &FFDamageMorphTargets::LinkedMorphNodeName)
        .def_readwrite("LinkedMorphNodeIndex", &FFDamageMorphTargets::LinkedMorphNodeIndex)
        .def_readwrite("AssociatedSkelControl", &FFDamageMorphTargets::AssociatedSkelControl)
        .def_readwrite("InfluenceBone", &FFDamageMorphTargets::InfluenceBone)
        .def_readwrite("Health", &FFDamageMorphTargets::Health)
        .def_readwrite("DamagePropNames", &FFDamageMorphTargets::DamagePropNames)
  ;
}