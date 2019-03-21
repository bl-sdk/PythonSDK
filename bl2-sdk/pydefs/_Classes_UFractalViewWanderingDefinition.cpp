#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFractalViewWanderingDefinition()
{
    py::class_< UFractalViewWanderingDefinition,  UGBXDefinition   >("UFractalViewWanderingDefinition")
        .def_readwrite("PseudoRandomPoints", &UFractalViewWanderingDefinition::PseudoRandomPoints)
        .def_readwrite("NumberOfOctaves", &UFractalViewWanderingDefinition::NumberOfOctaves)
        .def("StaticClass", &UFractalViewWanderingDefinition::StaticClass, py::return_value_policy::reference)
        .def("GenerateNewRandomPoints", &UFractalViewWanderingDefinition::GenerateNewRandomPoints)
        .staticmethod("StaticClass")
  ;
}