#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFDamageMorphTargets(py::module &m)
{
    py::class_< FFDamageMorphTargets >(m, "FFDamageMorphTargets")
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