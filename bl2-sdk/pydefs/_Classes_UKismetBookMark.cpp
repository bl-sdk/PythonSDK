#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKismetBookMark()
{
    py::class_< UKismetBookMark,  UBookMark2D   >("UKismetBookMark")
        .def_readwrite("BookMarkSequencePathName", &UKismetBookMark::BookMarkSequencePathName)
        .def("StaticClass", &UKismetBookMark::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}