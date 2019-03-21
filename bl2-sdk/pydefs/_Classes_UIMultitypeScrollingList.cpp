#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMultitypeScrollingList()
{
    py::class_< UIMultitypeScrollingList,  UInterface   >("UIMultitypeScrollingList")
        .def("StaticClass", &UIMultitypeScrollingList::StaticClass, py::return_value_policy::reference)
        .def("Move", &UIMultitypeScrollingList::Move)
        .def("SetRendererInfo", &UIMultitypeScrollingList::SetRendererInfo)
        .staticmethod("StaticClass")
  ;
}