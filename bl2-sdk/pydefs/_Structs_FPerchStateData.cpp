#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerchStateData(py::object m)
{
    py::class_< FPerchStateData >(m, "FPerchStateData")
        .def_readwrite("AttachmentName", &FPerchStateData::AttachmentName)
        .def_readwrite("StaticMesh", &FPerchStateData::StaticMesh)
        .def_readwrite("SkelMesh", &FPerchStateData::SkelMesh)
        .def_readwrite("LocOffset", &FPerchStateData::LocOffset)
        .def_readwrite("RotOffset", &FPerchStateData::RotOffset)
        .def_readwrite("Scale", &FPerchStateData::Scale)
        .def_readwrite("Actor", &FPerchStateData::Actor)
  ;
}