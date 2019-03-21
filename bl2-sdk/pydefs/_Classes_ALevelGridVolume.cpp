#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelGridVolume(py::object m)
{
    py::class_< ALevelGridVolume,  AVolume   >(m, "ALevelGridVolume")
        .def_readwrite("LevelGridVolumeName", &ALevelGridVolume::LevelGridVolumeName)
        .def_readwrite("CellShape", &ALevelGridVolume::CellShape)
        .def_readonly("Subdivisions", &ALevelGridVolume::Subdivisions)
        .def_readwrite("LoadingDistance", &ALevelGridVolume::LoadingDistance)
        .def_readwrite("KeepLoadedRange", &ALevelGridVolume::KeepLoadedRange)
        .def_readwrite("CellConvexElem", &ALevelGridVolume::CellConvexElem)
        .def("StaticClass", &ALevelGridVolume::StaticClass, py::return_value_policy::reference)
          ;
}