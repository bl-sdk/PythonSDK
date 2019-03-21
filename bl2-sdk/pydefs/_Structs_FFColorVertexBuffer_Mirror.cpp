#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFColorVertexBuffer_Mirror()
{
    class_< FFColorVertexBuffer_Mirror >("FFColorVertexBuffer_Mirror", no_init)
        .def_readwrite("VfTable", &FFColorVertexBuffer_Mirror::VfTable)
        .def_readwrite("VertexData", &FFColorVertexBuffer_Mirror::VertexData)
        .def_readwrite("Data", &FFColorVertexBuffer_Mirror::Data)
        .def_readwrite("Stride", &FFColorVertexBuffer_Mirror::Stride)
        .def_readwrite("NumVertices", &FFColorVertexBuffer_Mirror::NumVertices)
  ;
}