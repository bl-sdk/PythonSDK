#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSplineMeshParams(py::object m)
{
    py::class_< FSplineMeshParams >(m, "FSplineMeshParams")
        .def_readwrite("StartPos", &FSplineMeshParams::StartPos)
        .def_readwrite("StartTangent", &FSplineMeshParams::StartTangent)
        .def_readwrite("StartScale", &FSplineMeshParams::StartScale)
        .def_readwrite("StartRoll", &FSplineMeshParams::StartRoll)
        .def_readwrite("StartOffset", &FSplineMeshParams::StartOffset)
        .def_readwrite("EndPos", &FSplineMeshParams::EndPos)
        .def_readwrite("EndTangent", &FSplineMeshParams::EndTangent)
        .def_readwrite("EndScale", &FSplineMeshParams::EndScale)
        .def_readwrite("EndRoll", &FSplineMeshParams::EndRoll)
        .def_readwrite("EndOffset", &FSplineMeshParams::EndOffset)
  ;
}