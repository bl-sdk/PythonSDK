#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieStateCustom()
{
    py::class_< UGFxMovieStateCustom,  UGFxMovieState   >("UGFxMovieStateCustom")
        .def_readwrite("CustomStates", &UGFxMovieStateCustom::CustomStates)
        .def("StaticClass", &UGFxMovieStateCustom::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}