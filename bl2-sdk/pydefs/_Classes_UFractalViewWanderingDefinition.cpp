#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFractalViewWanderingDefinition(py::module &m)
{
    py::class_< UFractalViewWanderingDefinition,  UGBXDefinition   >(m, "UFractalViewWanderingDefinition")
        .def_readwrite("PseudoRandomPoints", &UFractalViewWanderingDefinition::PseudoRandomPoints)
        .def_readwrite("NumberOfOctaves", &UFractalViewWanderingDefinition::NumberOfOctaves)
        .def("StaticClass", &UFractalViewWanderingDefinition::StaticClass, py::return_value_policy::reference)
        .def("GenerateNewRandomPoints", &UFractalViewWanderingDefinition::GenerateNewRandomPoints)
          ;
}