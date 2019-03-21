#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMorphNodeConn()
{
    py::class_< FMorphNodeConn >("FMorphNodeConn")
        .def_readwrite("ChildNodes", &FMorphNodeConn::ChildNodes)
        .def_readwrite("ConnName", &FMorphNodeConn::ConnName)
        .def_readwrite("DrawY", &FMorphNodeConn::DrawY)
  ;
}