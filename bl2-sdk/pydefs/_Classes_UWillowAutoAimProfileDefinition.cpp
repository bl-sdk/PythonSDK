#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAutoAimProfileDefinition()
{
    py::class_< UWillowAutoAimProfileDefinition,  UGBXDefinition   >("UWillowAutoAimProfileDefinition")
        .def_readwrite("MagnetismMin", &UWillowAutoAimProfileDefinition::MagnetismMin)
        .def_readwrite("MagnetismMax", &UWillowAutoAimProfileDefinition::MagnetismMax)
        .def_readwrite("MaxRotationH", &UWillowAutoAimProfileDefinition::MaxRotationH)
        .def_readwrite("MaxRotationV", &UWillowAutoAimProfileDefinition::MaxRotationV)
        .def_readwrite("LockStrengthH", &UWillowAutoAimProfileDefinition::LockStrengthH)
        .def_readwrite("LockStrengthV", &UWillowAutoAimProfileDefinition::LockStrengthV)
        .def("StaticClass", &UWillowAutoAimProfileDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}