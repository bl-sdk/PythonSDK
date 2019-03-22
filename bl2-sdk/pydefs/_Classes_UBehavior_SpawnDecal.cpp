#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnDecal(py::module &m)
{
    py::class_< UBehavior_SpawnDecal,  UBehaviorBase   >(m, "UBehavior_SpawnDecal")
        .def_readwrite("Material", &UBehavior_SpawnDecal::Material)
        .def_readwrite("BoneName", &UBehavior_SpawnDecal::BoneName)
        .def_readwrite("AlignToAxis", &UBehavior_SpawnDecal::AlignToAxis)
        .def_readwrite("Size", &UBehavior_SpawnDecal::Size)
        .def_readwrite("SpawnRotation", &UBehavior_SpawnDecal::SpawnRotation)
        .def_readwrite("SpawnLocation", &UBehavior_SpawnDecal::SpawnLocation)
        .def_readwrite("Thickness", &UBehavior_SpawnDecal::Thickness)
        .def("StaticClass", &UBehavior_SpawnDecal::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnDecal::ApplyBehaviorToContext)
          ;
}