#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingDomino(py::module &m)
{
    py::class_< ULevelStreamingDomino,  ULevelStreamingKismet   >(m, "ULevelStreamingDomino")
		.def_static("StaticClass", &ULevelStreamingDomino::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TilePossibilities", &ULevelStreamingDomino::TilePossibilities)
          ;
}