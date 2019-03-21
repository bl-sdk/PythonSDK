#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKConvexElem()
{
    class_< FKConvexElem >("FKConvexElem", no_init)
        .def_readwrite("VertexData", &FKConvexElem::VertexData)
        .def_readwrite("PermutedVertexData", &FKConvexElem::PermutedVertexData)
        .def_readwrite("FaceTriData", &FKConvexElem::FaceTriData)
        .def_readwrite("EdgeDirections", &FKConvexElem::EdgeDirections)
        .def_readwrite("FaceNormalDirections", &FKConvexElem::FaceNormalDirections)
        .def_readwrite("FacePlaneData", &FKConvexElem::FacePlaneData)
        .def_readwrite("ElemBox", &FKConvexElem::ElemBox)
  ;
}