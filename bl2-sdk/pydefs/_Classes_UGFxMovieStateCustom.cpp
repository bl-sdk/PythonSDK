#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieStateCustom(py::module &m)
{
    py::class_< UGFxMovieStateCustom,  UGFxMovieState   >(m, "UGFxMovieStateCustom")
		.def_static("StaticClass", &UGFxMovieStateCustom::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomStates", &UGFxMovieStateCustom::CustomStates)
          ;
}