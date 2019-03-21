#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingDomino(py::object m)
{
    py::class_< ULevelStreamingDomino,  ULevelStreamingKismet   >(m, "ULevelStreamingDomino")
        .def_readwrite("TilePossibilities", &ULevelStreamingDomino::TilePossibilities)
        .def("StaticClass", &ULevelStreamingDomino::StaticClass, py::return_value_policy::reference)
          ;
}