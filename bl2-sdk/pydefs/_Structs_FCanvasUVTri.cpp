#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCanvasUVTri(py::object m)
{
    py::class_< FCanvasUVTri >(m, "FCanvasUVTri")
        .def_readwrite("V0_Pos", &FCanvasUVTri::V0_Pos)
        .def_readwrite("V0_UV", &FCanvasUVTri::V0_UV)
        .def_readwrite("V1_Pos", &FCanvasUVTri::V1_Pos)
        .def_readwrite("V1_UV", &FCanvasUVTri::V1_UV)
        .def_readwrite("V2_Pos", &FCanvasUVTri::V2_Pos)
        .def_readwrite("V2_UV", &FCanvasUVTri::V2_UV)
  ;
}