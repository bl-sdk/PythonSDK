#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKConvexElem(py::object m)
{
    py::class_< FKConvexElem >(m, "FKConvexElem")
        .def_readwrite("VertexData", &FKConvexElem::VertexData)
        .def_readwrite("PermutedVertexData", &FKConvexElem::PermutedVertexData)
        .def_readwrite("FaceTriData", &FKConvexElem::FaceTriData)
        .def_readwrite("EdgeDirections", &FKConvexElem::EdgeDirections)
        .def_readwrite("FaceNormalDirections", &FKConvexElem::FaceNormalDirections)
        .def_readwrite("FacePlaneData", &FKConvexElem::FacePlaneData)
        .def_readwrite("ElemBox", &FKConvexElem::ElemBox)
  ;
}