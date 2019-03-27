#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmbientOcclusionEffect(py::module &m)
{
    py::class_< UAmbientOcclusionEffect,  UPostProcessEffect   >(m, "UAmbientOcclusionEffect")
		.def_static("StaticClass", &UAmbientOcclusionEffect::StaticClass, py::return_value_policy::reference)
        .def_readwrite("OcclusionColor", &UAmbientOcclusionEffect::OcclusionColor)
        .def_readwrite("OcclusionPower", &UAmbientOcclusionEffect::OcclusionPower)
        .def_readwrite("OcclusionScale", &UAmbientOcclusionEffect::OcclusionScale)
        .def_readwrite("OcclusionBias", &UAmbientOcclusionEffect::OcclusionBias)
        .def_readwrite("MinOcclusion", &UAmbientOcclusionEffect::MinOcclusion)
        .def_readwrite("OcclusionRadius", &UAmbientOcclusionEffect::OcclusionRadius)
        .def_readwrite("OcclusionAttenuation", &UAmbientOcclusionEffect::OcclusionAttenuation)
        .def_readwrite("OcclusionQuality", &UAmbientOcclusionEffect::OcclusionQuality)
        .def_readwrite("OcclusionFadeoutMinDistance", &UAmbientOcclusionEffect::OcclusionFadeoutMinDistance)
        .def_readwrite("OcclusionFadeoutMaxDistance", &UAmbientOcclusionEffect::OcclusionFadeoutMaxDistance)
        .def_readwrite("HaloDistanceThreshold", &UAmbientOcclusionEffect::HaloDistanceThreshold)
        .def_readwrite("HaloDistanceScale", &UAmbientOcclusionEffect::HaloDistanceScale)
        .def_readwrite("HaloOcclusion", &UAmbientOcclusionEffect::HaloOcclusion)
        .def_readwrite("EdgeDistanceThreshold", &UAmbientOcclusionEffect::EdgeDistanceThreshold)
        .def_readwrite("EdgeDistanceScale", &UAmbientOcclusionEffect::EdgeDistanceScale)
        .def_readwrite("FilterDistanceScale", &UAmbientOcclusionEffect::FilterDistanceScale)
        .def_readwrite("FilterSize", &UAmbientOcclusionEffect::FilterSize)
        .def_readwrite("HistoryConvergenceTime", &UAmbientOcclusionEffect::HistoryConvergenceTime)
        .def_readwrite("HistoryWeightConvergenceTime", &UAmbientOcclusionEffect::HistoryWeightConvergenceTime)
          ;
}