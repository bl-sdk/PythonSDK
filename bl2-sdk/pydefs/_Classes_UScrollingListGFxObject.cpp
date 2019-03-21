#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UScrollingListGFxObject()
{
    py::class_< UScrollingListGFxObject,  UGFxObject   >("UScrollingListGFxObject")
        .def("StaticClass", &UScrollingListGFxObject::StaticClass, py::return_value_policy::reference)
        .def("eventSetSelectedIndex", &UScrollingListGFxObject::eventSetSelectedIndex)
        .def("ScrollToIndex", &UScrollingListGFxObject::ScrollToIndex)
        .def("Init", &UScrollingListGFxObject::Init)
        .staticmethod("StaticClass")
  ;
}