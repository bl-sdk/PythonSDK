#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleHUD(py::module &m)
{
    py::class_< UGFxMovieDrawStyleHUD,  UGFxMovieDrawStyle   >(m, "UGFxMovieDrawStyleHUD")
        .def_readwrite("AnchorPoints", &UGFxMovieDrawStyleHUD::AnchorPoints)
        .def("StaticClass", &UGFxMovieDrawStyleHUD::StaticClass, py::return_value_policy::reference)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleHUD::eventRequiresClientInstance)
          ;
}