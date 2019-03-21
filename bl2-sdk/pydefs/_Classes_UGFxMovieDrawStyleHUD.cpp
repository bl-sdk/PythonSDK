#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleHUD()
{
    py::class_< UGFxMovieDrawStyleHUD,  UGFxMovieDrawStyle   >("UGFxMovieDrawStyleHUD")
        .def_readwrite("AnchorPoints", &UGFxMovieDrawStyleHUD::AnchorPoints)
        .def_readonly("MovieDimensions", &UGFxMovieDrawStyleHUD::MovieDimensions)
        .def_readonly("MovieScreenPos", &UGFxMovieDrawStyleHUD::MovieScreenPos)
        .def("StaticClass", &UGFxMovieDrawStyleHUD::StaticClass, py::return_value_policy::reference)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleHUD::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}