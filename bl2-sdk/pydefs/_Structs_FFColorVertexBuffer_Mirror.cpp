#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFColorVertexBuffer_Mirror(py::module &m)
{
    py::class_< FFColorVertexBuffer_Mirror >(m, "FFColorVertexBuffer_Mirror")
        .def_readwrite("VfTable", &FFColorVertexBuffer_Mirror::VfTable)
        .def_readwrite("VertexData", &FFColorVertexBuffer_Mirror::VertexData)
        .def_readwrite("Data", &FFColorVertexBuffer_Mirror::Data)
        .def_readwrite("Stride", &FFColorVertexBuffer_Mirror::Stride)
        .def_readwrite("NumVertices", &FFColorVertexBuffer_Mirror::NumVertices)
  ;
}